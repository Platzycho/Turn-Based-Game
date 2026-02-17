// Fill out your copyright notice in the Description page of Project Settings.


#include "AHexGrid.h"
#include "AHexTile.h"

// Sets default values
AAHexGrid::AAHexGrid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AAHexGrid::OnConstruction(const FTransform& Transform)
{
	if (!HexTileClass) return;

	for (auto& Pair : TileMap)
	{
		if (Pair.Value)
		{
			Pair.Value->Destroy();
		}
	}

	TileMap.Empty();

	for (int32 q = -GridRadius; q <= GridRadius; q++)
	{
		int32 r1 = FMath::Max(-GridRadius, -q - GridRadius);
		int32 r2 = FMath::Min(GridRadius, -q + GridRadius);

		for (int32 r = r1; r <= r2; r++)
		{
			FVector Location = HexToWorld(q, r);
			
			AAHexTile* Tile = GetWorld()->SpawnActor<AAHexTile>(
				HexTileClass,
				Location,
				FRotator::ZeroRotator
			);

			Tile->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);
			Tile->SetCoordinates(q, r);

			FIntPoint Key(q, r);
			TileMap.Add(Key, Tile);
		}
	}
}

AAHexTile* AAHexGrid::GetTile(int32 Q, int32 R) const
{
	const FIntPoint Key(Q, R);

	if (TileMap.Contains(Key))
	{
		return TileMap[Key];
	}

	return nullptr;
}

bool AAHexGrid::DoesTileExist(int32 Q, int32 R) const
{
	return TileMap.Contains(FIntPoint(Q, R));
}

FVector AAHexGrid::HexToWorld(int32 Q, int32 R) const
{
	float X = HexSize * (sqrt(3.f) * Q + sqrt(3.f) / 2.f * R);
	float Y = HexSize * (3.f / 2.f * R);

	return FVector(X, Y, 0.f);
}

// Called when the game starts or when spawned
void AAHexGrid::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAHexGrid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

