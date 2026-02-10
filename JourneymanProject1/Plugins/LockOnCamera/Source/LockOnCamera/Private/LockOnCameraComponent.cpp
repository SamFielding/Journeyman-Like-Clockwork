#include "LockOnCameraComponent.h"
#include "LockOnTarget.h"
#include "Engine/OverlapResult.h"
#include "Blueprint/UserWidget.h"

ULockOnCameraComponent::ULockOnCameraComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void ULockOnCameraComponent::FindNearbyTargets()
{
	NearbyTargets.Empty();

	FCollisionShape CollsionSphere = FCollisionShape::MakeSphere(LockOnRange);
	TArray<FOverlapResult> Overlaps;
	GetWorld()->OverlapMultiByObjectType(Overlaps, GetOwner()->GetActorLocation(), FQuat::Identity, FCollisionObjectQueryParams(ECollisionChannel::ECC_WorldDynamic), CollsionSphere);

	for (const FOverlapResult& Result : Overlaps)
	{
		AActor* OverlapedActor = Result.GetActor();
		if (ULockOnTarget* LockOnTarget = OverlapedActor->FindComponentByClass<ULockOnTarget>())
		{
			NearbyTargets.Add(LockOnTarget);
		}
	}
}

void ULockOnCameraComponent::LockOnClosest()
{
	FindNearbyTargets();
	if (NearbyTargets.IsEmpty())
		return;

	const FVector OwnerLocation = GetOwner()->GetActorLocation();
	NearbyTargets.Sort([OwnerLocation](const ULockOnTarget& A, const ULockOnTarget& B)
		{
			return FVector::DistSquared(OwnerLocation, A.GetTargetLocation() + ULockOnTarget::Offset) < FVector::DistSquared(OwnerLocation, B.GetTargetLocation() + ULockOnTarget::Offset);
		});

	CurrentTarget = NearbyTargets[0];
}

void ULockOnCameraComponent::LockOn(ULockOnTarget* Target)
{
	if (!Target)
		return;

	CurrentTarget = Target;
}

void ULockOnCameraComponent::SwitchTarget(const FVector2D& Input)
{
	if (!CurrentTarget || !PlayerCamera || !PlayerController)
		return;

	if (Input.Size() < SwitchTargetDeadzone)
		return;

	FindNearbyTargets();
	if (NearbyTargets.Num() <= 1)
		return;

	FVector2D InputDir = Input.GetSafeNormal();

	FVector2D CurrentScreenPos;
	if (!PlayerController->ProjectWorldLocationToScreen(CurrentTarget->GetTargetLocation() + ULockOnTarget::Offset, CurrentScreenPos))
		return;

	ULockOnTarget* BestTarget = nullptr;
	float BestScore = -FLT_MAX;

	for (ULockOnTarget* Target : NearbyTargets)
	{
		if (!Target || Target == CurrentTarget)
			continue;

		FVector2D ScreenPos;
		if (!PlayerController->ProjectWorldLocationToScreen(Target->GetTargetLocation() + ULockOnTarget::Offset, ScreenPos))
			continue;

		FVector2D ToTarget = ScreenPos - CurrentScreenPos;

		if (ToTarget.IsNearlyZero())
			continue;

		const float Distance = ToTarget.Size();
		ToTarget.Normalize();

		const float Alignment = FVector2D::DotProduct(InputDir, ToTarget);
		if (Alignment < 0.25f)
			continue;

		const float Score = Alignment - Distance * 0.001f;
		if (Score > BestScore)
		{
			BestScore = Score;
			BestTarget = Target;
		}
	}

	if (BestTarget)
	{
		LockOff();
		CurrentTarget = BestTarget;
	}
}

void ULockOnCameraComponent::LockOff()
{
	CurrentTarget = nullptr;
}

void ULockOnCameraComponent::UpdateCamera(float DeltaTime)
{
	if (!CurrentTarget || !PlayerCamera || !PlayerController)
		return;

	const float DistanceToTarget = FVector::DistSquared(GetOwner()->GetActorLocation(), CurrentTarget->GetOwnerLocation());
	if (DistanceToTarget > FMath::Square(LockOnRange))
	{
		LockOff();
		return;
	}

	FRotator NewRotation = FMath::RInterpTo(
		PlayerController->GetControlRotation(),
		(CurrentTarget->GetTargetLocation() + ULockOnTarget::Offset - PlayerCamera->GetComponentLocation()).Rotation(),
		DeltaTime,
		CameraInterpolationSpeed
	);

	PlayerController->SetControlRotation(NewRotation);
}

void ULockOnCameraComponent::UpdateWidget()
{
	if (!CurrentTarget || !PlayerCamera || !PlayerController)
	{
		LockOnWidget->SetVisibility(ESlateVisibility::Hidden);
		return;
	}

	const FVector WorldPos = CurrentTarget->GetTargetLocation();
	FVector2D ScreenPos;
	bool bOnScreen = PlayerController->ProjectWorldLocationToScreen(WorldPos, ScreenPos, true);

	if (bOnScreen)
	{
		LockOnWidget->SetVisibility(ESlateVisibility::Visible);
		LockOnWidget->SetPositionInViewport(ScreenPos, true);
	}
	else
	{
		LockOnWidget->SetVisibility(ESlateVisibility::Hidden);
	}
}

void ULockOnCameraComponent::BeginPlay()
{
	Super::BeginPlay();

	PlayerCamera = GetOwner()->FindComponentByClass<UCameraComponent>();
	if (!PlayerCamera)
	{
		UE_LOG(LogTemp, Warning, TEXT("LockOnCamera could not find a Camera Component in owner."));
	}

	PlayerController = Cast<APlayerController>(GetOwner()->GetInstigatorController());
	if (!PlayerController)
	{
		UE_LOG(LogTemp, Warning, TEXT("LockOnCamera could not find owner's PlayerController"));
		return;
	}

	TSubclassOf<UUserWidget> WidgetBPClass = LoadClass<UUserWidget>(nullptr, TEXT("/LockOnCamera/WBP_LockOnIcon.WBP_LockOnIcon_C"));
	if (!WidgetBPClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("LockOnCamera could not load LockOnIcon blueprint widget class"));
		return;
	}

	LockOnWidget = CreateWidget<UUserWidget>(PlayerController, WidgetBPClass);
	LockOnWidget->AddToViewport();
	LockOnWidget->SetVisibility(ESlateVisibility::Hidden);
}

void ULockOnCameraComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UpdateCamera(DeltaTime);
	UpdateWidget();
}