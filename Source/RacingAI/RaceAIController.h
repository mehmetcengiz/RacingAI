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
	void MakeAISteering(float Steering);
	UFUNCTION(BlueprintCallable, Category = "AI Controll")
	void MakeAIMoveForward(float Throttle);

public:
	virtual void BeginPlay() override;
	virtual void SetPawn(APawn* inPawn) override;
	virtual void Tick(float DeltaTime) override;	
};
