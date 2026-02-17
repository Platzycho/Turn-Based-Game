// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AHexGrid.generated.h"

class AAHexTile;

UCLASS()
class TURNBASEDPROJECT_API AAHexGrid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAHexGrid();

	virtual void OnConstruction(const FTransform& Transform) override;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AAHexTile> HexTileClass;

	UPROPERTY(EditAnywhere)
	int32 GridRadius = 5;

	UPROPERTY(EditAnywhere)
	float HexSize = 100.0f;

	UPROPERTY(VisibleAnywhere)
	TMap<FIntPoint, AAHexTile*> TileMap;

	AAHexTile* GetTile(int32 Q, int32 R) const;
	bool DoesTileExist(int32 Q, int32 R) const;

private:
	FVector HexToWorld(int32 Q, int32 R) const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
