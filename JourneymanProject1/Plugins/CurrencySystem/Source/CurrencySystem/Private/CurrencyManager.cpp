#include "CurrencyManager.h"

UCurrencyManager::UCurrencyManager()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UCurrencyManager::BeginPlay()
{
	Super::BeginPlay();
}

void UCurrencyManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UCurrencyManager::AddCurrency(int32 Amount)
{
	CurrencyAmount += Amount;
}

