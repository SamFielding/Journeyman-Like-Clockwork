// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnumStates.generated.h"

/**
 * 
 */

UENUM()
enum class ECombatState : uint8
{
	NONE UMETA(DisplayName = "NONE"),
	MELEE UMETA(DisplayName = "MELEE ATTACK"),
	AB1 UMETA(DisplayName = "AB1 ATTACK"),
	AB2 UMETA(DisplayName = "AB2 ATTACK"),
};

UENUM()
enum class EGameState : uint8
{
	NONE UMETA(DisplayName = "NONE"),
	MAIN_MENU UMETA(DisplayName = "MAIN MENU"),
	PAUSE_MENU UMETA(DisplayName = "PAUSE MENU"),
	IN_GAME UMETA(DisplayName = "IN GAME"),
	END_GAME UMETA(DisplayName = "END GAME"),
};
