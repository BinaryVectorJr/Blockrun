// Fill out your copyright notice in the Description page of Project Settings.


#include "U_BlockBase.h"
#include "Components/BoxComponent.h"

// Sets default values
AU_BlockBase::AU_BlockBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	U_BlockCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Block Collision"));
	RootComponent = U_BlockCollision;
	U_BlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Block Mesh"));
	U_BlockMesh->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AU_BlockBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AU_BlockBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

