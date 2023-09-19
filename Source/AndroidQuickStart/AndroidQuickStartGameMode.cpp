// Copyright Epic Games, Inc. All Rights Reserved.

#include "AndroidQuickStartGameMode.h"
#include "AndroidQuickStartCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAndroidQuickStartGameMode::AAndroidQuickStartGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
