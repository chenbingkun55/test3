// Copyright Epic Games, Inc. All Rights Reserved.

#include "Test3GameMode.h"
#include "Test3HUD.h"
#include "Test3Character.h"
#include "UObject/ConstructorHelpers.h"

ATest3GameMode::ATest3GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATest3HUD::StaticClass();
}
