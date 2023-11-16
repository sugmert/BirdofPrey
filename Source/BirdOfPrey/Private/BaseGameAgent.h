// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BaseWeapon.h"
#include "BaseGameInstance.h"
#include "BaseGameAgent.generated.h"

UCLASS()
class ABaseGameAgent : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABaseGameAgent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	float MoveSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	class ABaseWeapon* BaseWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	TSubclassOf<ABaseWeapon> Weapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdsOfPrey")
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	FSAgentInfo AgentInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float Points;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	bool bCheckForOutOfBounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float OutOfBoundsCheckTolerance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	FName WeaponSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	EAttachmentRule WeaponAttachmentRule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	FVector TargetLocation;

	UFUNCTION(BlueprintCallable,BlueprintNativeEvent, Category = "BirdOfPrey")
	void GetWeaponSpawnTransform(FTransform& SpawnTransform);
	
		
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ChangeWeaponType(TSubclassOf<ABaseWeapon>NewWeaponType); 

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SpawnDefaultWeapon();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartFire();
	
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	float TakeDamage(float Damage);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void Take_Damage(float Damage, float& ActualDamage);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool IsAlive(bool Alive);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BirdOfPrey")
	void Died(AController* Killer);
	virtual void Died_Implementation(AController* Killer);
	
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayHitEffects();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CleanUp();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BirdOfPrey")
	void ApplyAgentInfo(FSAgentInfo NewAgentInfo);
	virtual void ApplyAgentInfo_Implementation(FSAgentInfo NewAgentInfo);


	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AimAt(FVector AimTarget);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayDeadEffects();
	

};
