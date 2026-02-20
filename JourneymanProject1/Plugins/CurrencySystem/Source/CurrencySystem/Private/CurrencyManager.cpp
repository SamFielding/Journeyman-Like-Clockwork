#include "CurrencyManager.h"

UCurrencyManager::UCurrencyManager()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UCurrencyManager::AddCurrency(int32 Amount)
{
	CurrencyAmount += FMath::Max(CurrencyAmount + Amount, 0.f);
}

void UCurrencyManager::RemoveCurrency(int32 Amount)
{
	CurrencyAmount = FMath::Max(CurrencyAmount - Amount, 0.f);
}

void UCurrencyManager::BeginPlay()
{
	Super::BeginPlay();
}

void UCurrencyManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}