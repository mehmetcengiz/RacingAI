// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIController.h"
#include "RaceAIController.generated.h"

class ARacingAIPawn;

/**
 * 
 */
UCLASS()
class RACINGAI_API ARaceAIController : public AAIController
{
	GENERATED_BODY()
protected:
	UFUNCTION(BlueprintCallable, Category = "AI Controll")
	void MakeAIDecision(float Steering,int32 CurrentSpeed);
	
	UFUNCTION(BlueprintCallable, Category = "AI Controll")
	void SetTopSpeed(int32 Speed);
	

public:
	virtual void BeginPlay() override;
	virtual void SetPawn(APawn* inPawn) override;
	virtual void Tick(float DeltaTime) override;
	void HandleSpeed(int32 CurrentSpeed, ARacingAIPawn* ControlledVehicle);


	int32 TopSpeed = 150;
};
