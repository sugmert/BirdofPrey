// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileWeapon.h"

void AProjectileWeapon::SpawnProjectile(FTransform SpawnTransform, TSubclassOf<ABaseProjectile>& ReturnValue)
{
}

void AProjectileWeapon::GetProjectileSpawnTransform(int ShotNumber, FTransform& ReturnValue)
{
}

void AProjectileWeapon::ReadyToFire(bool& ReturnValue)
{
}

bool AProjectileWeapon::IsFiring()
{
    return false;
}



