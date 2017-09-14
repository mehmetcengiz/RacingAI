// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "RacingAI.h"
#include "RacingAIGameMode.h"
#include "RacingAIPawn.h"
#include "RacingAIHud.h"

ARacingAIGameMode::ARacingAIGameMode()
{
	DefaultPawnClass = ARacingAIPawn::StaticClass();
	HUDClass = ARacingAIHud::StaticClass();
}
