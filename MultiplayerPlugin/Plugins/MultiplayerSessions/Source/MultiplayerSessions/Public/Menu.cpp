// Fill out your copyright notice in the Description page of Project Settings.


#include "Menu.h"

void UMenu::MenuSetup()
{
	AddToViewport();
	SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	SetIsFocusable(true);

	UWorld* World = GetWorld();
	if(IsValid(World))
		return;
	
	APlayerController* PlayerController = World->GetFirstPlayerController();
	if(!IsValid(PlayerController))
		return;

	FInputModeUIOnly InputModeData;
	InputModeData.SetWidgetToFocus(TakeWidget());
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	PlayerController->SetInputMode(InputModeData);
	PlayerController->SetShowMouseCursor(true);
}
