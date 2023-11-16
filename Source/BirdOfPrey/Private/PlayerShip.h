// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h" 
#include "BasePlayerController.h"
#include "PlayerShip.generated.h"

/**
 * 
 */
UCLASS()
class APlayerShip : public ABaseShip
{
	GENERATED_BODY()

public:
	
	UPROPERTY(BlueprintReadWrite, Category = "BirdsOfPrey")
	class TSubclassOf<ABasePlayerController> BasePlayerController;

	UPROPERTY(BlueprintReadWrite, Category = "BirdsOfPrey")
	float InvulnerabilityTime;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetShipConstantVelocity(FVector& Direction, float& Speed);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ClampToCameraBounds();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetShipAxisAdjustment(float Dist, float Max, float& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CalcOutofBoundsAdjustment(FVector& ReturnValue);


	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetPlayerAgentInfo(TSubclassOf<APlayerController> Player);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ShouldSpawnAIController();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void UpdateHoverPitch();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void HasDied(bool& ReturnValue);

	virtual void Died_Implementation(AController* Killer) override;

	virtual void Take_Damage(float Damage, float& ActualDamage) override;


};
