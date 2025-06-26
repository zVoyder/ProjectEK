// Copyright zVoyder, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "EKWeaponItem.h"
#include "EKWeaponFirearmItem.generated.h"

UCLASS()
class PROJECTEK_API UEKWeaponFirearmItem : public UEKWeaponItem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent)
	float GetFireRate();
	
	UFUNCTION(BlueprintNativeEvent)
	float GetMaxRange();

	UFUNCTION(BlueprintNativeEvent)
	int32 GetMagSize();
};
