// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class TIMEMANIPULATION_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh")
		UStaticMeshComponent* VisualMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		float HitCooldownDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		float DamageDealt;*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		UStaticMeshComponent* VisualMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		float Velocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		float Distance;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FVector StartingPosition;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
