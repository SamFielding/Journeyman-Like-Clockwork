#include "LockOnTarget.h"
#include "Blueprint/UserWidget.h"

ULockOnTarget::ULockOnTarget()
{
	PrimaryComponentTick.bCanEverTick = false;
	LockOnWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("LockOnWidget"));
	LockOnWidget->SetVisibility(true);
	LockOnWidget->SetWidgetSpace(EWidgetSpace::World);
	LockOnWidget->SetHiddenInGame(false);
	LockOnWidget->SetTwoSided(true);
	LockOnWidget->SetupAttachment(this);
}

FVector ULockOnTarget::GetTargetLocation() const
{
	return GetComponentLocation();
}

void ULockOnTarget::LockedOn()
{
	LockOnWidget->SetVisibility(true);
}

void ULockOnTarget::LockedOff()
{
	LockOnWidget->SetVisibility(false);
}

void ULockOnTarget::BeginPlay()
{
	Super::BeginPlay();

	TSubclassOf<UUserWidget> WidgetBPClass = LoadClass<UUserWidget>(nullptr, TEXT("/LockOnCamera/WBP_LockOnIcon.WBP_LockOnIcon_C"));
	if (!WidgetBPClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("LockOnCamera could not load LockOnIcon blueprint widget class"));
		return;
	}

	LockOnWidget->SetWidgetClass(WidgetBPClass);
	LockOnWidget->InitWidget();
}

void ULockOnTarget::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}