#include "CurrencyPickup.h"
#include "CurrencyManager.h"

ACurrencyPickup::ACurrencyPickup() : APickupBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ACurrencyPickup::Collect(UPickupManager* PickupManagerComponent)
{
	if (!PickupManagerComponent || bIsAttracted)
		return;

	if (UCurrencyManager* CurrencyManagerComponent = Cast<UCurrencyManager>(PickupManagerComponent))
	{
		Target = PickupManagerComponent;
	}
}

void ACurrencyPickup::BeginPlay()
{
	Super::BeginPlay();
}

void ACurrencyPickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	APickupBase::Tick(DeltaTime);

	if (UCurrencyManager* CurrencyPickupManager = Cast<UCurrencyManager>(Target); CurrencyPickupManager && FVector::Dist(GetActorLocation(), Target->GetCollectionPointLocation()) <= AttractionStrength * SpeedCoefficient * DeltaTime + 1.f)
	{
		CurrencyPickupManager->AddCurrency(CurrencyValue);
		Destroy();
	}
}