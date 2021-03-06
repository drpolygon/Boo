// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "BooGameMode.h"
#include "BooHUD.h"
#include "BooCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABooGameMode::ABooGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Boo/Player/BP_Player"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ABooHUD::StaticClass();
}
