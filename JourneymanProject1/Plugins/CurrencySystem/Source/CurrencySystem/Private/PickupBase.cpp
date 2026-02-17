#include "PickupBase.h"
#include "PickupManager.h"

APickupBase::APickupBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void APickupBase::BeginPlay()
{
	Super::BeginPlay();
}

void APickupBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bIsMoving)
	{
		SetActorRotation(GetActorRotation() + FRotator(0.f, RotationRate * DeltaTime, 0.f));
		SetActorLocation(GetActorLocation() + FVector(0.f, 0.f, FMath::Sin(GetWorld()->GetTimeSeconds() * 2.f * PI * OscillationFrequency) * OscillationAmplitude * DeltaTime));
	}

	if (!Target)
		return;

	FVector Direction = (Target->GetCollectionPointLocation() - GetActorLocation()).GetSafeNormal();
	FVector NewLocation = GetActorLocation() + Direction * AttractionStrength * DeltaTime;

	SetActorLocation(NewLocation);
}

