// Copyright Epic Games, Inc. All Rights Reserved.

#include "Jks1GameMode.h"
#include "UObject/ConstructorHelpers.h"

AJks1GameMode::AJks1GameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));

	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

}