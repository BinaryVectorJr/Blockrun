// Fill out your copyright notice in the Description page of Project Settings.


#include "U_ShapeBase_J.h"

AU_ShapeBase_J::AU_ShapeBase_J()
{

}

void AU_ShapeBase_J::BeginPlay()
{
    Super::BeginPlay();
}

void AU_ShapeBase_J::SetBlockPositions()
{
    Super::SetBlockPositions();

    switch(U_Orientation)
    {
        case 0:
            U_BlockShapes[0]->SetActorLocation(U_BlockPositions[3] + GetActorLocation());
            U_BlockShapes[2]->SetActorLocation(U_BlockPositions[4] + GetActorLocation());
            U_BlockShapes[3]->SetActorLocation(U_BlockPositions[5] + GetActorLocation());
            U_BlockShapes[1]->SetActorLocation(U_BlockPositions[2] + GetActorLocation());
        break;

        case 1:
            U_BlockShapes[0]->SetActorLocation(U_BlockPositions[1] + GetActorLocation());
            U_BlockShapes[2]->SetActorLocation(U_BlockPositions[4] + GetActorLocation());
            U_BlockShapes[3]->SetActorLocation(U_BlockPositions[7] + GetActorLocation());
            U_BlockShapes[1]->SetActorLocation(U_BlockPositions[0] + GetActorLocation());
        break;

        case 2:
            U_BlockShapes[0]->SetActorLocation(U_BlockPositions[3] + GetActorLocation());
            U_BlockShapes[2]->SetActorLocation(U_BlockPositions[4] + GetActorLocation());
            U_BlockShapes[3]->SetActorLocation(U_BlockPositions[5] + GetActorLocation());
            U_BlockShapes[1]->SetActorLocation(U_BlockPositions[6] + GetActorLocation());
        break;

        case 3:
            U_BlockShapes[0]->SetActorLocation(U_BlockPositions[1] + GetActorLocation());
            U_BlockShapes[2]->SetActorLocation(U_BlockPositions[4] + GetActorLocation());
            U_BlockShapes[3]->SetActorLocation(U_BlockPositions[7] + GetActorLocation());
            U_BlockShapes[1]->SetActorLocation(U_BlockPositions[8] + GetActorLocation());
        break;

        //Takes actor location into account due to it needing to know where the current shape (tetromino) is located
    }
}