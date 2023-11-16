// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShipAIController.h"
#include "BaseShip.h"
#include "BaseEnemyShip.generated.h"

/**
 * 
 */
UCLASS()
class ABaseEnemyShip : public ABaseShip
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Move();

	virtual void Died_Implementation(AController* Killer) override;

};
