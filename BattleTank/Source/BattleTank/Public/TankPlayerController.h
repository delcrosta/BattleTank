// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" // must be the last include

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ATank* GetControlledTank() const;

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	// Start the tank moving the barrel so that ashot would it where
	// the crosshair intersecs the world
	void AimTowardsCrosshair();
	

	// Return an OUT Parameter, true if hit landscape
	bool GetSightRayHitLocation(FVector& HitLocation) const;
};
