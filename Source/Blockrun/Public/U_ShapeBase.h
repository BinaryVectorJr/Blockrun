// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "U_ShapeBase.generated.h"

//Forward declarations
class AU_BlockBase;

UCLASS()
class BLOCKRUN_API AU_ShapeBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AU_ShapeBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	TArray<FVector> U_BlockPositions;

	UPROPERTY(VisibleAnywhere, Category="Attributes")
	int8 U_Orientation = 0;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Attributes")
	TSubclassOf<AU_BlockBase> BP_BlockBase;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category="Attributes")
	TArray<AU_BlockBase*> U_BlockShapes;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
