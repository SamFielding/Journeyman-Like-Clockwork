#pragma once

#include "Components/SphereComponent.h"
#include "Components/CapsuleComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickupBase.generated.h"

class UPickupManager;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPickup);

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
	TObjectPtr<UCapsuleComponent> Collision;

	UFUNCTION()
	virtual void Collect(UPickupManager* PickupManagerComponent) {}

	UPROPERTY()
	UPickupManager* Target = nullptr;

	UPROPERTY()
	bool bIsAttracted = false;

	UPROPERTY()
	bool bFinishedFalling = false;

	UPROPERTY()
	float ElapsedTime = 0.f;

	UPROPERTY()
	float SpeedCoefficient;

	UPROPERTY(BlueprintAssignable)
	FOnPickup OnPickup;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};