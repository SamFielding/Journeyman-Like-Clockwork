#pragma once

#include "CoreMinimal.h"
#include "PickupBase.h"
#include "TimePickup.generated.h"

class UPickupManager;
    
UCLASS(Abstract)
class PLAYERTIMECOMPONENT_API ATimePickup : public APickupBase
{
	GENERATED_BODY()
	
public:	
	ATimePickup();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup|Time Pickup")
    float TimeValue;

    void Collect(UPickupManager* PickupManagerComponent) override;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};