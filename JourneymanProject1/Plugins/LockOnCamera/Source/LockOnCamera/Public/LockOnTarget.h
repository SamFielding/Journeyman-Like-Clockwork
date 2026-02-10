#pragma once

#include "Components/WidgetComponent.h"
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "LockOnTarget.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LOCKONCAMERA_API ULockOnTarget : public USceneComponent
{
	GENERATED_BODY()

public:	
	ULockOnTarget();

	UPROPERTY()
	UWidgetComponent* LockOnWidget = nullptr;

	UFUNCTION()
	FVector GetTargetLocation() const;

	UFUNCTION()
	void LockedOn();

	UFUNCTION()
	void LockedOff();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

};