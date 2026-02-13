#pragma once

#include "Components/WidgetComponent.h"
#include "Camera/CameraComponent.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LockOnCameraComponent.generated.h"

class ULockOnTarget;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LOCKONCAMERA_API ULockOnCameraComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	ULockOnCameraComponent();

	UPROPERTY(EditDefaultsOnly, Category = "Lock On Camera")
	float LockOnRange = 1000.f;

	UPROPERTY(EditDefaultsOnly, Category = "Lock On Camera")
	float CameraInterpolationSpeed = 7.5f;

	UPROPERTY(EditDefaultsOnly, Category = "Lock On Camera")
	float SwitchTargetDeadzone = 0.f;

	UPROPERTY()
	UCameraComponent* PlayerCamera = nullptr;

	UPROPERTY()
	APlayerController* PlayerController = nullptr;

	UPROPERTY()
	ULockOnTarget* CurrentTarget = nullptr;

	UPROPERTY()
	UUserWidget* LockOnWidget = nullptr;

	UPROPERTY()
	TArray<ULockOnTarget*> NearbyTargets;

	UFUNCTION()
	void FindNearbyTargets();

	UFUNCTION(BlueprintCallable, Category = "Lock On Camera")
	void LockOnClosest();

	UFUNCTION(BlueprintCallable, Category = "Lock On Camera")
	void LockOn(ULockOnTarget* Target);

	UFUNCTION(BlueprintCallable, Category = "Lock On Camera")
	void SwitchTarget(const FVector2D& Input);

	UFUNCTION(BlueprintCallable, Category = "Lock On Camera")
	void LockOff();

	UFUNCTION()
	void UpdateCamera(float DeltaTime);

	UFUNCTION()
	void UpdateWidget();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

};