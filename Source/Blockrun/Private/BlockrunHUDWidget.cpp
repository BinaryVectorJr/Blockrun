// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockrunHUDWidget.h"
#include "Components/CanvasPanel.h"
#include "Components/Overlay.h"
#include "Components/Image.h"
#include "Components/VerticalBox.h"
#include "Components/TextBlock.h"

void UBlockrunHUDWidget::SetTimerText(float time)
{
    U_TimerText->SetText(FText::AsNumber(time));
}

void UBlockrunHUDWidget::SetActiveSliceText(float activeSlice)
{
    U_ActiveSliceText->SetText(FText::AsNumber(activeSlice));
}
