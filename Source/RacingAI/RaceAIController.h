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

public:
	virtual void BeginPlay() override;
	virtual void SetPawn(APawn* inPawn) override;
	virtual void Tick(float DeltaTime) override;	
private:
	float CalculateSteering();
	float CalculateThrottle();
};
