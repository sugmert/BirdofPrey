// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameAgent.h"
#include "BaseShip.generated.h"

/**
 * 
 */
UCLASS()
class ABaseShip : public ABaseGameAgent
{
	GENERATED_BODY()
	
	virtual void ApplyAgentInfo_Implementation(FSAgentInfo NewAgentInfo) override;

	virtual void Died_Implementation(AController* Killer) override;


};
