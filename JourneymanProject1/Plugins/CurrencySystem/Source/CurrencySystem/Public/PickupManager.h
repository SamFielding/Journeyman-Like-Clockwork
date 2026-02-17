#pragma once

#include "PickupBase.h"
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "PickupManager.generated.h"

UCLASS(Abstract)
class CURRENCYSYSTEM_API UPickupManager : public USphereComponent
{
	GENERATED_BODY()

public:	
	UPickupManager();

	UFUNCTION()
	void OverlapPickupManager(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
		class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	FVector GetCollectionPointLocation() const;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

};
