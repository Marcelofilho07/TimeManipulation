// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TimeManipulationGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TIMEMANIPULATION_API ATimeManipulationGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	ATimeManipulationGameModeBase();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		float Velocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		float Distance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		bool ResetTime;
};
