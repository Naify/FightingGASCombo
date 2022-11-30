// Copyright Epic Games, Inc. All Rights Reserved.

#include "GasTGDTestGameMode.h"
#include "GasTGDTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGasTGDTestGameMode::AGasTGDTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
