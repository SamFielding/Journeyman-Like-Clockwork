#include "TimePickup.h"
#include "PlayerTimeManager.h"

ATimePickup::ATimePickup() : APickupBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ATimePickup::Collect(UPickupManager* PickupManagerComponent)
{
	if (!PickupManagerComponent || bIsAttracted)
		return;

	if (UPlayerTimeManager* TimeManagerComponent = Cast<UPlayerTimeManager>(PickupManagerComponent))
	{
		Target = PickupManagerComponent;
	}
}

void ATimePickup::BeginPlay()
{
	Super::BeginPlay();
}

void ATimePickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	APickupBase::Tick(DeltaTime);

	if (UPlayerTimeManager* TimeManagerComponent = Cast<UPlayerTimeManager>(Target); TimeManagerComponent && FVector::Dist(GetActorLocation(), Target->GetCollectionPointLocation()) < AttractionStrength * SpeedCoefficient * DeltaTime + 1.f)
	{
		TimeManagerComponent->AddTime(TimeValue);
		Destroy();
	}
}