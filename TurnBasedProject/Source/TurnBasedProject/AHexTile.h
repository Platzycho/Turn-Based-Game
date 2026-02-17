// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AHexTile.generated.h"

UCLASS()
class TURNBASEDPROJECT_API AAHexTile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAHexTile();

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;

	int32 Q;
	int32 R;

	void SetCoordinates(int32 InQ, int32 InR);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
