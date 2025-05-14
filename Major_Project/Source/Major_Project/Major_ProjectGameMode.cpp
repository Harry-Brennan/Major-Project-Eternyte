// Copyright Epic Games, Inc. All Rights Reserved.

#include "Major_ProjectGameMode.h"
#include "Major_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMajor_ProjectGameMode::AMajor_ProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
