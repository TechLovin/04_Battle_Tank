// Fill out your copyright notice in the Description page of Project Settings.

#include "TankBarrel.h"
#include "GameFramework/Actor.h"

void UTankBarrel::Elevate(float RelativeSpeed)
{
	// Move barrel the right amount this frame
	// given max elevation speed, and the frame time.
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, +1);
	auto ElevationChange = RelativeSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto RawNewElevation = RelativeRotation.Pitch + ElevationChange;
	auto Elevation = FMath::Clamp<float>(RawNewElevation, MinBarrelElevation, MaxBarrelElevation);
	SetRelativeRotation(FRotator(Elevation, 0, 0));
}


