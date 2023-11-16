// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseWeapon.h"
#include "BaseProjectile.h"
#include "ProjectileWeapon.generated.h"

/**
 * 
 */
UCLASS()
class AProjectileWeapon : public ABaseWeapon
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, Category = "BirdsOfPrey")
	class TSubclassOf<ABaseWeapon> ProjectileType;

	UPROPERTY(BlueprintReadWrite, Category = "BirdsOfPrey")
	float RefireTime;

	UPROPERTY(BlueprintReadWrite, Category = "BirdsOfPrey")
	float LastFireTime;

	UPROPERTY(BlueprintReadWrite, Category = "BirdsOfPrey")
	int NumShots;

	UPROPERTY(BlueprintReadWrite, Category = "BirdsOfPrey")
	bool blsFiring;

	UPROPERTY(BlueprintReadWrite, Category = "BirdsOfPrey")
	float DesiredZ;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SpawnProjectile(FTransform SpawnTransform, TSubclassOf<ABaseProjectile>& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetProjectileSpawnTransform(int ShotNumber, FTransform& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ReadyToFire(bool& ReturnValue);

	virtual bool IsFiring() override;


};
