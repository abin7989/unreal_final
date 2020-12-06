// Fill out your copyright notice in the Description page of Project Settings.


#include "Barghest.h"

// Sets default values
ABarghest::ABarghest()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Health = 100.0f;
}

// Called when the game starts or when spawned
void ABarghest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABarghest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABarghest::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

