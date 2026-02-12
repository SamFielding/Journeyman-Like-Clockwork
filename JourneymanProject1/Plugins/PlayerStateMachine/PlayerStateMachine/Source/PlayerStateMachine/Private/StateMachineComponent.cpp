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
	switch (CurrentCombatState)
	{
	case ECombatState::NONE:
		OutputPin = ECombatState::NONE;
		break;
	case ECombatState::MELEE:
		OutputPin = ECombatState::MELEE;
		break;
	case ECombatState::AB1:
		OutputPin = ECombatState::AB1;
		break;
	case ECombatState::AB2:
		OutputPin = ECombatState::AB2;
		break;
	default:
		break;
	}
}


void UStateMachineComponent::ChangeState(ECombatState NewState)
{
	if (CurrentCombatState == NewState)
		return;

	OnStateExit();

	////////////////

	OnStateEnter(NewState);


}

void UStateMachineComponent::OnStateExit()
{
	switch (CurrentCombatState)
	{
	case ECombatState::NONE:
		break;
	case ECombatState::MELEE:
		break;
	case ECombatState::AB1:
		break;
	case ECombatState::AB2:
		break;
	default:
		break;
	}
}

void UStateMachineComponent::OnStateEnter(ECombatState NewState)
{
	switch (NewState)
	{
	case ECombatState::NONE:
		break;
	case ECombatState::MELEE:
		break;
	case ECombatState::AB1:
		break;
	case ECombatState::AB2:
		break;
	default:
		break;
	}

	CurrentCombatState = NewState;
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

