// Fill out your copyright notice in the Description page of Project Settings.


#include "StateMachineComponent.h"

// Sets default values for this component's properties
UStateMachineComponent::UStateMachineComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UStateMachineComponent::SwitchOnCombatState(ECombatState& OutputPin)
{
	OutputPin = CurrentCombatState;
}

void UStateMachineComponent::SwitchOnGameState(EGameState& OutputPin)
{
	OutputPin = CurrentGameState;
}


void UStateMachineComponent::ChangeState(ECombatState NewState)
{
	if (CurrentCombatState != ECombatState::EMPTY && NewState != ECombatState::EMPTY)
		return;

	// Call Exit Current State
	OnCombatStateExits.Broadcast();

	// Set New State
	CurrentCombatState = NewState;

	// Call Enter New State
	OnCombatStateEntries.Broadcast();


}

// Called when the game starts
void UStateMachineComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	CurrentGameState = EGameState::MAIN_MENU;
}


// Called every frame
void UStateMachineComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

