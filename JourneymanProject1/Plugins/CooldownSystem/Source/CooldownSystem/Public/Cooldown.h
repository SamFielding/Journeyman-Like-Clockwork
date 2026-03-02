#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Cooldown.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCooldownTimeout);

UCLASS(BlueprintType, Blueprintable)
class COOLDOWNSYSTEM_API UCooldown : public UObject
{
	GENERATED_BODY()

public:
	UCooldown();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CooldownDuration = 0.f;

	UPROPERTY()
	FTimerHandle TimerHandle;

	UPROPERTY(BlueprintAssignable)
	FOnCooldownTimeout Event;

	UFUNCTION(BlueprintCallable)
	void TryUse();

	UFUNCTION(BlueprintCallable)
	bool IsOnCooldown() const;

	UFUNCTION()
	void CooldownFinished();

};