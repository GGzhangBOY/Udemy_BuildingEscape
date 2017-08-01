// Fill out your copyright notice in the Description page of Project Settings.

#include "Udemy_BuildingEscape.h"
#include "PositionReporter.h"


// Sets default values for this component's properties
UPositionReporter::UPositionReporter()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UPositionReporter::BeginPlay()
{
	FString Name,Pos;
	FVector Position;
	Super::BeginPlay();
	Name = GetOwner()->GetName();
	Position = GetOwner()->GetActorLocation();
	Pos = GetOwner()->GetTransform().GetLocation().ToString();
	//UE_LOG(LogTemp, Warning, TEXT("Position Report reporting for %s at  X=%f   Y = %f   Z=%f!"),*Name,Position.X, Position.Y, Position.Z);
	UE_LOG(LogTemp, Warning, TEXT("Position Report reporting for %s at  %s"), *Name, *Pos);
	
}


// Called every frame
void UPositionReporter::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

