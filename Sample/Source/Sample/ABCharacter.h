// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Sample.h"
#include "GameFramework/Character.h"
#include "ABCharacter.generated.h"

UCLASS()
class SAMPLE_API AABCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AABCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	enum class EControlMode
	{
		GTA,
		DIABLO
	};

	void SetControlMode(EControlMode NewControlMode);
	EControlMode CurrentControlMode = EControlMode::GTA;

	FVector DirectionToMove = FVector::ZeroVector;
	float ArmLengthTo = 0.0f;
	FRotator ArmRotationTo = FRotator::ZeroRotator;
	float ArmLengthSpeed = 0.0f;
	float ArmRotationSpeed = 0.0f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void PostInitializeComponents() override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Camera)
		USpringArmComponent* SpringArm;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Camera)
		UCameraComponent* Camera;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		bool isRadar;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly)
		bool IsDiablomode;

	UFUNCTION(BlueprintCallable)
		void OutRadar(bool radar, bool diablo) {
		if (diablo)
		{
			if (!radar)
			{
				GetController()->SetControlRotation(SpringArm->RelativeRotation);
				SetControlMode(EControlMode::GTA);
			}
		}
	}

private:
	void UpDown(float NewAxisValue);
	void LeftRight(float newAxisValue);
	void LookUp(float NewAxisValue);
	void Turn(float newAxisValue);

	void ViewChange();
	void Attack();

	UFUNCTION()
		void OnAttackMontageEnded(UAnimMontage* Montage, bool binterrupted);
		void AttackStartComboState();
		void AttackEndComboState();

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		bool IsAttacking;

	UPROPERTY()
		class UABAnimInstance* ABAnim;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		bool CanNextCombo;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		bool IsComboInputOn;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		int32 CurrentCombo;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		int32 MaxCombo;
};
