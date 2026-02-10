#include "LockOnTarget.h"
#include "Blueprint/UserWidget.h"

FVector ULockOnTarget::Offset = FVector(0.f, 0.f, -200.f);

ULockOnTarget::ULockOnTarget()
{
	PrimaryComponentTick.bCanEverTick = false;
}

FVector ULockOnTarget::GetTargetLocation() const
{
	return GetComponentLocation();
}

FVector ULockOnTarget::GetOwnerLocation() const
{
	if (!GetOwner())
		return FVector();

	return GetOwner()->GetActorLocation();
}

void ULockOnTarget::BeginPlay()
{
	Super::BeginPlay();
}

void ULockOnTarget::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}