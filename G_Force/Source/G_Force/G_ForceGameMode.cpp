// Copyright Epic Games, Inc. All Rights Reserved.

#include "G_ForceGameMode.h"
#include "G_ForceCharacter.h"
#include "UObject/ConstructorHelpers.h"

AG_ForceGameMode::AG_ForceGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
