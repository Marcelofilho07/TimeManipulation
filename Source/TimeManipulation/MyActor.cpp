// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "TimeManipulationGameModeBase.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	VisualMesh->SetOnlyOwnerSee(false);
	SetRootComponent(VisualMesh);
	Velocity = 0;
	Distance = 0;
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	StartingPosition = GetActorLocation();
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector NewLocation = GetActorLocation();
	if (ATimeManipulationGameModeBase* GM = Cast<ATimeManipulationGameModeBase>(GetWorld()->GetAuthGameMode()))
	{
		if (GM->ResetTime)
		{
			NewLocation.X = StartingPosition.X + GM->Distance;
			GM->ResetTime = false;
		}
		else
			NewLocation.X -= GM->Velocity;
	}

	if (NewLocation.X >= StartingPosition.X)
		SetActorLocation(NewLocation, false);
	
	else
		SetActorLocation(StartingPosition, false);
}

