#include "PlayerTimeManager.h"

UPlayerTimeManager::UPlayerTimeManager()
{
	PrimaryComponentTick.bCanEverTick = true;
}

bool UPlayerTimeManager::IsPlayerOutOfTime() const
{
	return CurrentPlayerTime <= 0.f;
}

void UPlayerTimeManager::TimeTickDown(float DeltaTime)
{
	CurrentPlayerTime = FMath::Clamp(CurrentPlayerTime - TickDownRate * DeltaTime, 0.f, MaxPlayerTime);
}

void UPlayerTimeManager::AddTime(float Time)
{
	CurrentPlayerTime = FMath::Clamp(CurrentPlayerTime + Time, 0.f, MaxPlayerTime);
}

void UPlayerTimeManager::RemoveTime(float Time)
{
	CurrentPlayerTime = FMath::Clamp(CurrentPlayerTime - Time, 0.f, MaxPlayerTime);
}

void UPlayerTimeManager::BeginPlay()
{
	Super::BeginPlay();

	CurrentPlayerTime = MaxPlayerTime;
}

void UPlayerTimeManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	TimeTickDown(DeltaTime);
}