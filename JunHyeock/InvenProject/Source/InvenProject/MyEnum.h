// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//#include "CoreMinimal.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class  MyEnum : uint8
{
	NONE = 0 UMETA(DisplayName = "NONE"),
	Head = 1 UMETA(DisplayName = "Head"),
	Body = 2 UMETA(DisplayName = "Body"),
	Foot = 3 UMETA(DisplayName = "Foot"),
	Weapon = 4 UMETA(DisplayName = "Weapon")
};
