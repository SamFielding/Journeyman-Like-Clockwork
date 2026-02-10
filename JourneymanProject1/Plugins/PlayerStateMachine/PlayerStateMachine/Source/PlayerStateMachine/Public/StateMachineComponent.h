// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerStateMachine/Public/EnumStates.h"
#include "Components/ActorComponent.h"
#include "StateMachineComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMeleeEnter);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAB1Enter);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAB2Enter);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMeleeExit);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAB1Exit);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAB2Exit);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PLAYERSTATEMACHINE_API UStateMachineComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStateMachineComponent();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	ECombatState CurrentState = ECombatState::NONE;


	UPROPERTY(BlueprintAssignable, Category = "State Machine", meta = (ToolTip = "[MUST] IMPLEMENT THIS EVENT TO HANDLE MELEE ENTER"))
	FOnMeleeEnter OnMeleeEnter;

	UPROPERTY(BlueprintAssignable, Category = "State Machine", meta = (ToolTip = "[MUST] IMPLEMENT THIS EVENT TO HANDLE AB1 ENTER"))
	FOnAB1Enter OnAB1Enter;

	UPROPERTY(BlueprintAssignable, Category = "State Machine", meta = (ToolTip = "[MUST] IMPLEMENT THIS EVENT TO HANDLE AB2 ENTER"))
	FOnAB2Enter OnAB2Enter;

	UPROPERTY(BlueprintAssignable, Category = "State Machine", meta = (ToolTip = "[MUST] IMPLEMENT THIS EVENT TO HANDLE MELEE EXIT"))
	FOnMeleeExit OnMeleeExit;

	UPROPERTY(BlueprintAssignable, Category = "State Machine", meta = (ToolTip = "[MUST] IMPLEMENT THIS EVENT TO HANDLE AB1 EXIT"))
	FOnAB1Exit OnAB1Exit;

	UPROPERTY(BlueprintAssignable, Category = "State Machine", meta = (ToolTip = "[MUST] IMPLEMENT THIS EVENT TO HANDLE AB2 EXIT"))
	FOnAB2Exit OnAB2Exit;

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
		CurrentState = ECombatState::NONE;
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
