// Copyright Epic Games, Inc. All Rights Reserved.


#include "TimeManipulationGameModeBase.h"

ATimeManipulationGameModeBase::ATimeManipulationGameModeBase()
	: Super()
{
	// set default pawn class to our Blueprinted character

	// use our custom HUD class
	Distance = 0;
	Velocity = 0;
	ResetTime = false;
}