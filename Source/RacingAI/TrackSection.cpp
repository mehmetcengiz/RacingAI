// Fill out your copyright notice in the Description page of Project Settings.

#include "RacingAI.h"
#include "TrackSection.h"


// Sets default values
ATrackSection::ATrackSection(){
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATrackSection::BeginPlay(){
	Super::BeginPlay();

}

// Called every frame
void ATrackSection::Tick(float DeltaTime){
	Super::Tick(DeltaTime);

}

void ATrackSection::SetTopSpeed(){
	
}
