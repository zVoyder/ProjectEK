// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "TestingLoadingScreen.generated.h"

UCLASS()
class PROJECTEK_API UTestingLoadingScreen : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	void BeginLoadingScreen(const FString& String);

	void EndLoadingScreen(UWorld* World);
};
