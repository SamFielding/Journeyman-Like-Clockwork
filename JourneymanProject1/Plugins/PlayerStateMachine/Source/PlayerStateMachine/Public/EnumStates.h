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
	RESET UMETA(DisplayName = "RESET"),
	LIGHTMELEEATTACK UMETA(DisplayName = "LIGHT MELEE ATTACK"),
	HEAVYMELEEATTACK UMETA(DisplayName = "HEAVY MELEE ATTACK"),
	COGTHROW UMETA(DisplayName = "COG THROW"),
	COGSPIN UMETA(DisplayName = "COG SPIN"),
	COGDASH UMETA(DisplayName = "COG DASH"),
	INTERACT UMETA(DisplayName = "INTERACT"),
	DEATH UMETA(DisplayName = "DEATH"),
};


UENUM()
enum class EGameState : uint8
{
	EMPTY UMETA(DisplayName = "EMPTY"),
	MAIN_MENU UMETA(DisplayName = "MAIN MENU"),
	PAUSE_MENU UMETA(DisplayName = "PAUSE MENU"),
	IN_GAME UMETA(DisplayName = "IN GAME"),
	END_GAME UMETA(DisplayName = "END GAME"),
};
