// Copyright Epic Games, Inc. All Rights Reserved.

#include "test2GameMode.h"
#include "test2Character.h"
#include "UObject/ConstructorHelpers.h"

Atest2GameMode::Atest2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
