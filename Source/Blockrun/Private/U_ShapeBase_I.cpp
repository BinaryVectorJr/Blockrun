// Fill out your copyright notice in the Description page of Project Settings.


#include "U_ShapeBase_I.h"
#include "U_BlockBase.h"

//NOTE: Blockbase is not inherited into ShapeBase because we forward declared Blockbase earlier; Inheritance does not take into account forward declared classes.

AU_ShapeBase_I::AU_ShapeBase_I()
{
    //Specific shape of the I-Tetronimo, as presented in the Wiki, that is why we have to hard code the positions
    U_BlockPositions.Empty();

    U_BlockPositions.Add(FVector(0,0,0));
    U_BlockPositions.Add(FVector(-100,0,0));
    U_BlockPositions.Add(FVector(100,0,0));
    U_BlockPositions.Add(FVector(200,0,0));

    U_BlockPositions.Add(FVector(0,0,100));
    U_BlockPositions.Add(FVector(0,0,200));
    U_BlockPositions.Add(FVector(0,0,300));
}

void AU_ShapeBase_I::BeginPlay()
{
    Super::BeginPlay();
    U_Orientation = 1;
    SetBlockPositions();
}

void AU_ShapeBase_I::SetBlockPositions()
{
    Super::SetBlockPositions();

    switch(U_Orientation)
    {
        //0 and 2 alternates between left-right positions
        case 0:
        case 2:
            U_BlockShapes[0]->SetActorLocation(U_BlockPositions[0] + GetActorLocation());
            U_BlockShapes[1]->SetActorLocation(U_BlockPositions[1] + GetActorLocation());
            U_BlockShapes[2]->SetActorLocation(U_BlockPositions[2] + GetActorLocation());
            U_BlockShapes[3]->SetActorLocation(U_BlockPositions[3] + GetActorLocation());
        break;

        //1 and 3 alternates between up-down positions
        case 1:
        case 3:
            U_BlockShapes[0]->SetActorLocation(U_BlockPositions[0] + GetActorLocation());
            U_BlockShapes[1]->SetActorLocation(U_BlockPositions[4] + GetActorLocation());
            U_BlockShapes[2]->SetActorLocation(U_BlockPositions[5] + GetActorLocation());
            U_BlockShapes[3]->SetActorLocation(U_BlockPositions[6] + GetActorLocation());
        break;
        //Index goes only till 6 because the BlockPositions has only 7 elements
        //Takes actor location into account due to it needing to know where the current shape (tetromino) is located
    }
}
