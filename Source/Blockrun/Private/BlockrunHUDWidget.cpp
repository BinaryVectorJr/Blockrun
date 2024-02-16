// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockrunHUDWidget.h"
#include "Components/CanvasPanel.h"
#include "Components/Overlay.h"
#include "Components/Image.h"
#include "Components/VerticalBox.h"
#include "Components/HorizontalBox.h"
#include "Components/TextBlock.h"
#include "Kismet/KismetTextLibrary.h"

void UBlockrunHUDWidget::SetTimerText(float time)
{
    U_TimerValueText->SetText(UKismetTextLibrary::Conv_DoubleToText(time, ERoundingMode::ToZero));
}

void UBlockrunHUDWidget::SetActiveSliceText(float activeSlice)
{
    U_SliceValueText->SetText(FText::AsNumber(activeSlice));
}
