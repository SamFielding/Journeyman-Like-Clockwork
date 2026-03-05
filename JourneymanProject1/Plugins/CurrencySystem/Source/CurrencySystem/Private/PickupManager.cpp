#include "PickupManager.h"

UPickupManager::UPickupManager()
{
	PrimaryComponentTick.bCanEverTick = false;

	this->OnComponentBeginOverlap.AddDynamic(this, &UPickupManager::OverlapPickupManager);
}

void UPickupManager::OverlapPickupManager(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (auto Pickup = Cast<APickupBase>(OtherActor))
	{
		Pickup->Collect(this);
	}
}

FVector UPickupManager::GetCollectionPointLocation() const
{
	return GetComponentLocation();
}

void UPickupManager::BeginPlay()
{
	Super::BeginPlay();
}

void UPickupManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

