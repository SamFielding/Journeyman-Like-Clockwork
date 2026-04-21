// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EEnemyStates : uint8
{
	MOVETO UMETA(DisplayName = "MOVETO"),
	ATTACK UMETA(DisplayName = "ATTACK"),
	DEFEND UMETA(DisplayName = "DEFEND"),
	DEATH UMETA(DisplayName = "DEATH"),
	RESET UMETA(DisplayName = "RESET"),

};
