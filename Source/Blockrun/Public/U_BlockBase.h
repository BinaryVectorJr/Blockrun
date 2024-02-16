// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "U_BlockBase.generated.h"

UCLASS()
class BLOCKRUN_API AU_BlockBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AU_BlockBase();

protected:

	// The core block's mesh and collision properties
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Attributes")
	class UStaticMeshComponent* U_BlockMesh;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Attributes")
	class UBoxComponent* U_BlockCollision;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
