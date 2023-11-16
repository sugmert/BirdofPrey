// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGameMode.h"

void ABaseGameMode::GetWorldScrollVelocity(FVector& ReturnValue)
{
}

AWorldCameraActor* ABaseGameMode::GetWorldCameraActor()
{
	return nullptr;
}


void ABaseGameMode::OnEnemyDied(TSubclassOf<ABaseGameAgent> Enemy, TSubclassOf<AController> Killer)
{
}

void ABaseGameMode::StartGame()
{
}

void ABaseGameMode::EndGame(bool Success)
{
}

void ABaseGameMode::SpawnEnemyFrom(TArray<class ABaseGameAgent*> ClassList)
{
}

void ABaseGameMode::ResetGame()
{
}

void ABaseGameMode::RespawnPlayer()
{
}

void ABaseGameMode::TrySpawnPowerUp(FVector Location)
{
}

void ABaseGameMode::GetDistanceTravelled(float& ReturnValue)
{
}
