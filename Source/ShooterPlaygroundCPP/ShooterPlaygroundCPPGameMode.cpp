// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShooterPlaygroundCPPGameMode.h"
#include "ShooterPlaygroundCPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShooterPlaygroundCPPGameMode::AShooterPlaygroundCPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Experiment/BP_MyCPPCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
