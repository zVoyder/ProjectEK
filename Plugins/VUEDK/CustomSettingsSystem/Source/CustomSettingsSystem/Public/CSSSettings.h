// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Data/CustomOptionData.h"
#include "Engine/DeveloperSettings.h"
#include "CSSSettings.generated.h"

UCLASS(Config = CSSSettings, DefaultConfig, meta = (DisplayName = "Custom Game User Settings"))
class CUSTOMSETTINGSSYSTEM_API UCSSSettings : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(Config, EditAnywhere, Category = Settings)
	TMap<FGameplayTag, FCustomOptionData> CustomSettingsMap;
	UPROPERTY(Config, EditAnywhere, Category = Settings)
	float DefaultFrameRateLimit = 360.0f;
	UPROPERTY(Config, EditAnywhere, Category = Settings)
	bool DefaultVSync = true;
};
