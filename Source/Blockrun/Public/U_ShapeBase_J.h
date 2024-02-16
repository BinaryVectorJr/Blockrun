// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "U_ShapeBase.h"
#include "U_ShapeBase_J.generated.h"

/**
 * 
 */
UCLASS()
class BLOCKRUN_API AU_ShapeBase_J : public AU_ShapeBase
{
	GENERATED_BODY()

	public:
	AU_ShapeBase_J();

	protected:
	void BeginPlay() override;
	void SetBlockPositions() override;
	
};
