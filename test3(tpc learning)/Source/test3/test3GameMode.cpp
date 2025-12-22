// Copyright Epic Games, Inc. All Rights Reserved.

#include "test3GameMode.h"
#include "test3Character.h"
#include "UObject/ConstructorHelpers.h"

Atest3GameMode::Atest3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
