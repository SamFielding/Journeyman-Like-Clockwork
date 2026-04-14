// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyStateEnum.h"
#include "EnemyStateComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEnemyStateEntries);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEnemyStateExits);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ENEMYSTATEMACHINE_API UEnemyStateComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEnemyStateComponent();
	UPROPERTY(BlueprintAssignable)
	FOnEnemyStateEntries OnEnemyStateEntries;
	UPROPERTY(BlueprintAssignable)
	FOnEnemyStateExits OnEnemyStateExits;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	EEnemyStates currentState{ EEnemyStates::RESET };
	UFUNCTION(BlueprintCallable, meta = (ExpandEnumAsExecs = "OutputPin"))
	void SwitchOnEnemyState(EEnemyStates& OutputPin);
	UFUNCTION(BlueprintCallable)
	void ChangeState(EEnemyStates newState);
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
