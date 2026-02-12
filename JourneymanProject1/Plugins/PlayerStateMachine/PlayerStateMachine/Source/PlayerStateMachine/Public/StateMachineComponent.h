// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerStateMachine/Public/EnumStates.h"
#include "Components/ActorComponent.h"
#include "StateMachineComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCombatStateEntries);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCombatStateExits);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGameStateEntries);  
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGameStateExits); 


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PLAYERSTATEMACHINE_API UStateMachineComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStateMachineComponent();

	// State Transition Delegates
	UPROPERTY(BlueprintAssignable, Category = "State Transitions", meta = (ToolTip = "[MUST] Implement to handle COMBAT State Entry Transitions"))
	FOnCombatStateEntries OnCombatStateEntries;

	UPROPERTY(BlueprintAssignable, Category = "State Transitions", meta = (ToolTip = "[MUST] Implement to handle COMBAT State Exit Transitions"))
	FOnCombatStateExits OnCombatStateExits;

	UPROPERTY(BlueprintAssignable, Category = "State Transitions", meta = (ToolTip = "[MUST] Implement to handle GAME State Entry Transitions"))
	FOnGameStateEntries OnGameStateEntries;

	UPROPERTY(BlueprintAssignable, Category = "State Transitions", meta = (ToolTip = "[MUST] Implement to handle GAME State Exit Transitions"))
	FOnGameStateExits OnGameStateExits;


	// Current States
	UPROPERTY(VisibleAnywhere, Category = "Current Combat State", BlueprintReadOnly)
	ECombatState CurrentCombatState = ECombatState::EMPTY;

	UPROPERTY(VisibleAnywhere, Category = "Current Game State", BlueprintReadOnly)
	EGameState CurrentGameState = EGameState::EMPTY;



	UFUNCTION(BlueprintCallable, Category = "State Switches", meta = (ExpandEnumAsExecs = "OutputPin"))
	void SwitchOnCombatState(ECombatState& OutputPin);

	UFUNCTION(BlueprintCallable, Category = "State Switches", meta = (ExpandEnumAsExecs = "OutputPin"))
	void SwitchOnGameState(EGameState& OutputPin);

	UFUNCTION(BlueprintCallable, Category = "Change States")
	void Change_STATE_MELEE()
	{
		ChangeState(ECombatState::MELEE);
	}

	UFUNCTION(BlueprintCallable, Category = "Change States")
	void Change_STATE_AB1()
	{

		ChangeState(ECombatState::AB1);
	}

	UFUNCTION(BlueprintCallable, Category = "Change States")
	void Change_STATE_AB2()
	{
		ChangeState(ECombatState::AB2);
	}

	UFUNCTION(BlueprintCallable, Category = "Change States")
	void Change_STATE_EMPTY()
	{
		ChangeState(ECombatState::EMPTY);
	}

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
private:
	void ChangeState(ECombatState NewState);

	void OnStateExit();


	void OnStateEnter(ECombatState NewState);

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


		
};
