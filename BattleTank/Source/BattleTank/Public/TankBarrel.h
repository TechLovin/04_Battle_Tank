// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	// -1 is max downward movment, and +1 is max up movement.
	void Elevate(float RelativeSpeed);
	

private: 
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MaxDegreesPerSecond = 10; // Sensible default?
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MaxBarrelElevation = 35;
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MinBarrelElevation = 0;


};
