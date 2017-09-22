// Fill out your copyright notice in the Description page of Project Settings.

#include "RacingAI.h"
#include "RaceAIController.h"
#include "RacingAIPawn.h"



void ARaceAIController::BeginPlay() {
	Super::BeginPlay();
}

void ARaceAIController::SetPawn(APawn* InPawn) {
	Super::SetPawn(InPawn);
	if (InPawn) {
		auto AutoPossessedVehicle = Cast<ARacingAIPawn>(InPawn);
		if (!ensure(AutoPossessedVehicle)) { return; }

	}
}


void ARaceAIController::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}

void ARaceAIController::MakeAISteering(float Steering) {
	auto ControlledVehicle = static_cast<ARacingAIPawn*>(GetPawn());
	ControlledVehicle->MoveRight(Steering);
}

void ARaceAIController::MakeAIMoveForward(float Throttle){
	auto ControlledVehicle = static_cast<ARacingAIPawn*>(GetPawn());
	ControlledVehicle->MoveForward(Throttle);
}

void ARaceAIController::MakeAIDecision(float Steering, float Throttle){
	
}

void ARaceAIController::SetTopSpeed(float Speed){
	CurrentTopSpeed = Speed;
}


