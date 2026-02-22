#pragma once

#include "CoreMinimal.h"
#include "PickupBase.h"
#include "CurrencyPickup.generated.h"

class UPickupManager;

UCLASS(Abstract)
class CURRENCYSYSTEM_API ACurrencyPickup : public APickupBase
{
	GENERATED_BODY()

public:
	ACurrencyPickup();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup|Currency Pickup")
	int32 CurrencyValue;

	void Collect(UPickupManager* PickupManagerComponent) override;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

};
