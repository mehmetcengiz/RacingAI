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
}


