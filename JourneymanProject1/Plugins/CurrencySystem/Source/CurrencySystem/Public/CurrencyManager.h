#pragma once

#include "CoreMinimal.h"
#include "PickupManager.h"
#include "CurrencyManager.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class CURRENCYSYSTEM_API UCurrencyManager : public UPickupManager
{
	GENERATED_BODY()

public:	
	UCurrencyManager();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Currency")
	int32 CurrencyAmount;

	UFUNCTION(BlueprintCallable, Category = "Currency")
	void AddCurrency(int32 Amount);

	UFUNCTION(BlueprintCallable, Category = "Currency")
	void RemoveCurrency(int32 Amount);

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

};