// Fill out your copyright notice in the Description page of Project Settings.


#include "AHexTile.h"

// Sets default values
AAHexTile::AAHexTile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	RootComponent = Mesh;

}

void AAHexTile::SetCoordinates(int32 InQ, int32 InR)
{
	Q = InQ;
	R = InR;
}

// Called when the game starts or when spawned
void AAHexTile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAHexTile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

