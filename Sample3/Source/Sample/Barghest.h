// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Barghest.generated.h"

UCLASS()
class SAMPLE_API ABarghest : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABarghest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	UFUNCTION(BlueprintCallable)
	bool DamageReceive(float Damage)
	{
		Health = Health - Damage;
		if (Health < 0.1)
		{
			Destroy();
			return true;
		}
		return false;
	}

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		float Health;
	
};
