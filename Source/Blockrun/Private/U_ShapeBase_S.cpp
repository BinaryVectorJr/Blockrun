// Fill out your copyright notice in the Description page of Project Settings.


#include "U_ShapeBase_S.h"

AU_ShapeBase_S::AU_ShapeBase_S()
{

}

void AU_ShapeBase_S::BeginPlay()
{
    Super::BeginPlay();
}

void AU_ShapeBase_S::SetBlockPositions()
{
    Super::SetBlockPositions();

    switch(U_Orientation)
    {
        case 0:
        case 2:
            U_BlockShapes[1]->SetActorLocation(U_BlockPositions[0] + GetActorLocation());
            U_BlockShapes[2]->SetActorLocation(U_BlockPositions[1] + GetActorLocation());
            U_BlockShapes[0]->SetActorLocation(U_BlockPositions[4] + GetActorLocation());
            U_BlockShapes[3]->SetActorLocation(U_BlockPositions[5] + GetActorLocation());
        break;

        case 1:
        case 3:
            U_BlockShapes[0]->SetActorLocation(U_BlockPositions[7] + GetActorLocation());
            U_BlockShapes[1]->SetActorLocation(U_BlockPositions[4] + GetActorLocation());
            U_BlockShapes[2]->SetActorLocation(U_BlockPositions[5] + GetActorLocation());
            U_BlockShapes[3]->SetActorLocation(U_BlockPositions[2] + GetActorLocation());
        break;

        //Takes actor location into account due to it needing to know where the current shape (tetromino) is located
    }
}
