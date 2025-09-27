// Copyright VUEDK, Inc. All Rights Reserved.

#include "TestingLoadingScreen.h"

void UTestingLoadingScreen::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	FCoreUObjectDelegates::PreLoadMap.AddUObject(this, &UTestingLoadingScreen::BeginLoadingScreen);
	FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(this, &UTestingLoadingScreen::EndLoadingScreen);
}

void UTestingLoadingScreen::BeginLoadingScreen(const FString& String)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Begin Loading Screen: %s"), *String));

	APlayerCameraManager* PC = GEngine->GetFirstLocalPlayerController(GetWorld())->PlayerCameraManager;
	if (PC)
	{
		PC->StartCameraFade(1.f, 1.f, 0.0f, FLinearColor::Black, false, true);
	}
}

void UTestingLoadingScreen::EndLoadingScreen(UWorld* World)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("End Loading Screen"));

	APlayerCameraManager* PC = GEngine->GetFirstLocalPlayerController(GetWorld())->PlayerCameraManager;
	if (PC)
	{
		PC->StartCameraFade(1.f, 0.f, 5.f, FLinearColor::Black, false, false);
	}
}
