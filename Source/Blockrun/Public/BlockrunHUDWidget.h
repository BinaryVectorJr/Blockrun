// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BlockrunHUDWidget.generated.h"

class UCanvasPanel;
class UOverlay;
class UImage;
class UVerticalBox;
class UHorizontalBox;
class UTextBlock;

/**
 * 
 */
UCLASS()
class BLOCKRUN_API UBlockrunHUDWidget : public UUserWidget
{
	GENERATED_BODY()
	
	public:

	void SetTimerText(float time);
	void SetActiveSliceText(float activeSlice);

	private:
	
	UPROPERTY(meta=(BindWidget))
	UCanvasPanel* U_HUDWidgetCanvasPanel;

	UPROPERTY(meta=(BindWidget))
	UOverlay* U_HUDWidgetOverlay;

	
	UPROPERTY(meta=(BindWidget))
	UImage* U_BorderImage;

	UPROPERTY(meta=(BindWidget))
	UImage* U_BackgroundImage;

	UPROPERTY(meta=(BindWidget))
	UVerticalBox* U_VerticalBoxContainer;

	UPROPERTY(meta=(BindWidget))
	UHorizontalBox* U_TopHorizontalBox;
	
	UPROPERTY(meta=(BindWidget))
	UHorizontalBox* U_BottomHorizontalBox;

	UPROPERTY(meta=(BindWidget))
	UTextBlock* U_TimerText;

	UPROPERTY(meta=(BindWidget))
	UTextBlock* U_TimerValueText;

	UPROPERTY(meta=(BindWidget))
	UTextBlock* U_ActiveSliceText;

	UPROPERTY(meta=(BindWidget))
	UTextBlock* U_SliceValueText;
};
