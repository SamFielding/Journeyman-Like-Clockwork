// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerStateMachine/Public/EnumStates.h"
#include "Components/ActorComponent.h"
#include "StateMachineComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCombatStateChanged);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGameStateChanged);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PLAYERSTATEMACHINE_API UStateMachineComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStateMachineComponent();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	ECombatState CurrentCombatState = ECombatState::NONE;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	EGameState CurrentGameState = EGameState::NONE;

	UFUNCTION(BlueprintCallable, meta = (ExpandEnumAsExecs = "OutputPin"))
	void SwitchOnCombatState(ECombatState& OutputPin);

	UFUNCTION(BlueprintCallable)
	void Change_STATE_MELEE()
	{
		ChangeState(ECombatState::MELEE);
	}

	UFUNCTION(BlueprintCallable)
	void Change_STATE_AB1()
	{

		ChangeState(ECombatState::AB1);
	}

	UFUNCTION(BlueprintCallable)
	void Change_STATE_AB2()
	{
		ChangeState(ECombatState::AB2);
	}

	UFUNCTION(BlueprintCallable)
	void Change_STATE_NONE()
	{
		CurrentCombatState = ECombatState::NONE;
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
