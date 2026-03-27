// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyStateComponent.h"

// Sets default values for this component's properties
UEnemyStateComponent::UEnemyStateComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


void UEnemyStateComponent::SwitchOnEnemyState(EEnemyStates& OutputPin)
{
	OutputPin = currentState;

}

void UEnemyStateComponent::ChangeState(EEnemyStates newState)
{
	if (currentState != EEnemyStates::RESET && newState != EEnemyStates::RESET)
		return;

	OnEnemyStateExits.Broadcast();
	currentState = newState;
	OnEnemyStateEntries.Broadcast();
}

// Called when the game starts
void UEnemyStateComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UEnemyStateComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

