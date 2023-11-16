// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseProjectile.generated.h"

UCLASS()
class ABaseProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float ProjectileSpeed;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey") 
	float Damage;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UParticleSystem* ParticleSystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float GroundUnitCheckDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float GroundUnitCheckAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	class ABaseGameAgent* GroundTarger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float DesiredZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	USoundBase* ImpactSound;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void InitialiseProjectile(FVector Direction, float Speed);
	 
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void DealDamageTo(AActor* Damaging, float D_Damage);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnHit(UPrimitiveComponent* OverlappedActors, AActor* OtherActor);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	ECollisionChannel GetInstigatorCollisionChannel();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CheckForGroundUnitTarget();

	UFUNCTION(BlueprintCallable,BlueprintNativeEvent, Category = "BirdOfPrey")
	void CleanUpAndDestroy();
	virtual void CleanUpAndDestroy_Implementation();


	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ShouldCheckForGroundTarget(bool& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AdjustToTarger();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void IsEnemyProjectile(bool& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AdjustToDesiredZ();

};
