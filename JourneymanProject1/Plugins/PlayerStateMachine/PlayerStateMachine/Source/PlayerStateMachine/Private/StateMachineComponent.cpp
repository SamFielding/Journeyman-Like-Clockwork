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


void UStateMachineComponent::ChangeState(ECombatState NewState)
{
	if (CurrentState == NewState)
		return;

	OnStateExit();

	////////////////

	OnStateEnter(NewState);


}

void UStateMachineComponent::OnStateExit()
{
	switch (CurrentState)
	{
	case ECombatState::NONE:
		break;
	case ECombatState::MELEE:
		OnMeleeExit.Broadcast();
		break;
	case ECombatState::AB1:
		OnAB1Exit.Broadcast();
		break;
	case ECombatState::AB2:
		OnAB2Exit.Broadcast();
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
		OnMeleeEnter.Broadcast();
		break;
	case ECombatState::AB1:
		OnAB1Enter.Broadcast();
		break;
	case ECombatState::AB2:
		OnAB2Enter.Broadcast();
		break;
	default:
		break;
	}

	CurrentState = NewState;
}

// Called when the game starts
void UStateMachineComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UStateMachineComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

