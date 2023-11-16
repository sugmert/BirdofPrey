// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameAgent.h"
#include "BasePlayerController.h"
#include "AIController.h"
#include "BaseAIController.generated.h"

/**
 * 
 */
UCLASS()
class ABaseAIController : public AAIController
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "BirdsOfPrey")
	TSubclassOf<ABasePlayerController> Target;

	UPROPERTY(EditAnywhere, Category = "BirdsOfPrey")
	TSubclassOf<ABaseGameAgent> ControlledAgent;

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void SelectTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void AimAt(FVector AimTarget);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void UpdateAim();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void ShouldStartFire(bool& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void ShouldStopFire(bool& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void StopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdsOfPrey")
	void ShouldUpdateAim(bool& ReturnValue);
	
};
