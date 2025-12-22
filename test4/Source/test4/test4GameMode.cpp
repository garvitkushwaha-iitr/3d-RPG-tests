// Copyright Epic Games, Inc. All Rights Reserved.

#include "test4GameMode.h"
#include "test4Character.h"
#include "UObject/ConstructorHelpers.h"

Atest4GameMode::Atest4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
