// Copyright Epic Games, Inc. All Rights Reserved.

#include "InvenProjectGameMode.h"
#include "InvenProjectCharacter.h"
#include "InvenPlayerController.h"
#include "UObject/ConstructorHelpers.h"

AInvenProjectGameMode::AInvenProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	PlayerControllerClass = AInvenPlayerController::StaticClass();
	
}
