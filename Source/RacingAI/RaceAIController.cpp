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
	UE_LOG(LogTemp, Warning, TEXT("Hello I Am AI"));

	auto ControlledVehicle = static_cast<ARacingAIPawn*>(GetPawn());
	float Steering = CalculateSteering();
	float Throttle = CalculateThrottle();

	ControlledVehicle->MoveForward(Throttle);
	ControlledVehicle->MoveRight(Steering);

}

float ARaceAIController::CalculateSteering(){
	
	return .5;
}

float ARaceAIController::CalculateThrottle(){
	return 1;
}


