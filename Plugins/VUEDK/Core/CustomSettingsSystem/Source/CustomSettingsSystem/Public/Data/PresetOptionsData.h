// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "QualityLevel.h"
#include "GameplayTagContainer.h"
#include "QualityType.h"
#include "PresetOptionsData.generated.h"

USTRUCT(BlueprintType)
struct FPresetOptionsData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, meta = (EditCondition = "bUseShadingQuality"), Category = Setting)
	EQualityLevel ShadingQuality;
	UPROPERTY(EditAnywhere, meta = (EditCondition = "bUseTextureQuality"), Category = Setting)
	EQualityLevel TextureQuality;
	UPROPERTY(EditAnywhere, meta = (EditCondition = "bUseFoliageQuality"), Category = Setting)
	EQualityLevel FoliageQuality;
	UPROPERTY(EditAnywhere, meta = (EditCondition = "bUseVisualEffectsQuality"), Category = Setting)
	EQualityLevel VisualEffectsQuality;
	UPROPERTY(EditAnywhere, meta = (EditCondition = "bUseAntiAliasingQuality"), Category = Setting)
	EQualityLevel AntiAliasingQuality;
	UPROPERTY(EditAnywhere, meta = (EditCondition = "bUseViewDistanceQuality"), Category = Setting)
	EQualityLevel DistanceQuality;
	UPROPERTY(EditAnywhere, meta = (EditCondition = "bUseGlobalIlluminationQuality"), Category = Setting)
	EQualityLevel IlluminationQuality;
	UPROPERTY(EditAnywhere, meta = (EditCondition = "bUseShadowQuality"), Category = Setting)
	EQualityLevel ShadowQuality;
	UPROPERTY(EditAnywhere, meta = (EditCondition = "bUsePostProcessQuality"), Category = Setting)
	EQualityLevel PostProcessQuality;
	UPROPERTY(EditAnywhere, meta = (EditCondition = "bUseReflectionQuality"), Category = Setting)
	EQualityLevel ReflectionQuality;
	UPROPERTY(EditAnywhere, meta = (EditCondition = "bUseAudioQuality"), Category = Setting)
	EQualityLevel AudioQuality;
	UPROPERTY(EditAnywhere, Category = Setting)
	TMap<FGameplayTag, float> CustomSettingsPresetMap;
	UPROPERTY()
	bool bUseShadingQuality = true;
	UPROPERTY()
	bool bUseTextureQuality = true;
	UPROPERTY()
	bool bUseFoliageQuality = true;
	UPROPERTY()
	bool bUseVisualEffectsQuality = true;
	UPROPERTY()
	bool bUseAntiAliasingQuality = true;
	UPROPERTY()
	bool bUseViewDistanceQuality = true;
	UPROPERTY()
	bool bUseGlobalIlluminationQuality = true;
	UPROPERTY()
	bool bUseShadowQuality = true;
	UPROPERTY()
	bool bUsePostProcessQuality = true;
	UPROPERTY()
	bool bUseReflectionQuality = true;
	UPROPERTY()
	bool bUseAudioQuality = false;
};
