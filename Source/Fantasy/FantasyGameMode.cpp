// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FantasyGameMode.h"
#include "FantasyPlayerController.h"
#include "FantasyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFantasyGameMode::AFantasyGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AFantasyPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}