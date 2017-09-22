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


void ARaceAIController::MakeAIDecision(float Steering,int32 CurrentSpeed){
	auto ControlledVehicle = static_cast<ARacingAIPawn*>(GetPawn());
	HandleSpeed(CurrentSpeed, ControlledVehicle);
	ControlledVehicle->MoveRight(Steering);

}

void ARaceAIController::SetTopSpeed(int32 Speed){
	TopSpeed = Speed;
}



void ARaceAIController::HandleSpeed(int32 CurrentSpeed, ARacingAIPawn* ControlledVehicle){

	FString CurrentSpeedString = FString::FromInt(CurrentSpeed);
	FString TopSpeedString = FString::FromInt(TopSpeed);

	UE_LOG(LogTemp, Warning, TEXT("Name: %s TopSpeed: %s  CurrentSpeed: %s"), *ControlledVehicle->GetName(), *TopSpeedString, *CurrentSpeedString);
	
	if(TopSpeed >= CurrentSpeed){
		ControlledVehicle->MoveForward(1);
		ControlledVehicle->OnHandbrakeReleased();
	}else if(TopSpeed * 1.5 < CurrentSpeed){
		ControlledVehicle->OnHandbrakePressed();
	}else if(TopSpeed <CurrentSpeed){
		ControlledVehicle->MoveForward(0);
		ControlledVehicle->OnHandbrakeReleased();
	}
}
