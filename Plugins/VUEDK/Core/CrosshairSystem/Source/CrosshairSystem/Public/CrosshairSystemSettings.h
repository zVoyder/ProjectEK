// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Blueprint/UserWidget.h"
#include "CrosshairSystemSettings.generated.h"

UCLASS(Config = CrosshairSystemSettings, DefaultConfig, meta = (DisplayName = "Crosshair System Settings"))
class CROSSHAIRSYSTEM_API UCrosshairSystemSettings : public UObject
{
	GENERATED_BODY()

	UPROPERTY(Config, EditAnywhere, Category = Settings)
	TSoftClassPtr<UUserWidget> GeneralCrosshairWidget;

public:
	explicit UCrosshairSystemSettings(const FObjectInitializer& ObjectInitializer);

	TSubclassOf<UUserWidget> GetGeneralCrosshairClass() const;
};
