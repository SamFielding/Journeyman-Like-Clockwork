#include "Cooldown.h"

UCooldown::UCooldown()
{
	//this = CreateDefaultSubobject<UCooldown>("");
}

void UCooldown::TryUse()
{
	if (!GetWorld())
	{
		UE_LOG(LogTemp, Warning, TEXT("WORLD WAS INVALID"));
		return;
	}

	if (Event.IsBound() && !IsOnCooldown())
	{
		Event.Broadcast();
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UCooldown::CooldownFinished, CooldownDuration, false);
	}

	return;
}

bool UCooldown::IsOnCooldown() const
{
	if (!GetWorld())
	{
		UE_LOG(LogTemp, Warning, TEXT("WORLD WAS INVALID"));
		return false;
	}

	return GetWorld()->GetTimerManager().IsTimerActive(TimerHandle);
}

void UCooldown::CooldownFinished()
{

}