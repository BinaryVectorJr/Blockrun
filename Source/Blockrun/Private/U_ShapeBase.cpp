// Fill out your copyright notice in the Description page of Project Settings.


#include "U_ShapeBase.h"
#include "U_BlockBase.h"

// Sets default values
AU_ShapeBase::AU_ShapeBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	// TODO: Tick might not be needed here; check for optimization
	PrimaryActorTick.bCanEverTick = true;

	//Create a 3x3 grid to position blocks to form a tetromino shape (https://en.wikipedia.org/wiki/Tetromino)
	//These are localspace relative positions
	U_BlockPositions.Add(FVector(-100, 0, -100));
	U_BlockPositions.Add(FVector(0, 0, -100));
	U_BlockPositions.Add(FVector(100, 0, -100));
	U_BlockPositions.Add(FVector(-100, 0, 0));
	U_BlockPositions.Add(FVector(0, 0, 0));
	U_BlockPositions.Add(FVector(100, 0, 0));
	U_BlockPositions.Add(FVector(-100, 0, 100));
	U_BlockPositions.Add(FVector(0, 0, 100));
	U_BlockPositions.Add(FVector(100, 0, 100));
	U_Orientation = 0;
}

// Called when the game starts or when spawned
void AU_ShapeBase::BeginPlay()
{
	Super::BeginPlay();

	//Spawning in the blocks based on the shape (position is determined within the specific shape's CPP code using SetBlockPositions())
	// i<4 because the whole concept of a tetromino is 4 blocks
	//AU_BlockBase = TSubclassOf<> data type
	for(int i=0; i<4; i++)
	{
		U_BlockShapes.Add(GetWorld()->SpawnActor<AU_BlockBase>(BP_BlockBase, GetActorLocation(), GetActorRotation()));
	}

	U_Orientation = 0;
	SetBlockPositions();
}

// Called every frame
void AU_ShapeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AU_ShapeBase::SetBlockPositions()
{
	//Leave this blank as it will be set in the specific shape child classes
}
