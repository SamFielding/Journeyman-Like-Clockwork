#pragma once

#include "Components/SphereComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickupBase.generated.h"

class UPickupManager;

UCLASS(Abstract)
class CURRENCYSYSTEM_API APickupBase : public AActor
{
	GENERATED_BODY()
	
public:	
	APickupBase();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup")
	float RotationRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup")
	float OscillationFrequency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup")
	float OscillationAmplitude;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup")
	float AttractionStrength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup")
	TObjectPtr<UStaticMeshComponent> Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup")
	TObjectPtr<USphereComponent> Collision;

	UFUNCTION()
	virtual void Collect(UPickupManager* PickupManagerComponent) {}

	UPROPERTY()
	UPickupManager* Target = nullptr;

	UPROPERTY()
	bool bIsMoving = false;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
