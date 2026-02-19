#pragma once

#include "CoreMinimal.h"
#include "PickupManager.h"
#include "PlayerTimeManager.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class PLAYERTIMECOMPONENT_API UPlayerTimeManager : public UPickupManager
{
	GENERATED_BODY()

public:
	UPlayerTimeManager();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Time")
	float MaxPlayerTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Time")
	float CurrentPlayerTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Time")
	float TickDownRate;

	UFUNCTION(BlueprintCallable, Category = "Time")
	bool IsPlayerOutOfTime() const;

	UFUNCTION(BlueprintCallable, Category = "Time")
	void TimeTickDown(float DeltaTime);

	UFUNCTION(BlueprintCallable, Category = "Time")
	void AddTime(float Time);

	UFUNCTION(BlueprintCallable, Category = "Time")
	void RemoveTime(float Time);

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

};