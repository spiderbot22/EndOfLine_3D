// Copyright Epic Games, Inc. All Rights Reserved.

#include "EndOfLine_3DGameMode.h"
#include "EndOfLine_3DCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEndOfLine_3DGameMode::AEndOfLine_3DGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
