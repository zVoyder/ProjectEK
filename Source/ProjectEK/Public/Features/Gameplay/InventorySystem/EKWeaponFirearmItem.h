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
	UPROPERTY(BlueprintReadWrite)
	bool bHasNewMag = true;

private:
	int32 CurrentMagAmmo = 0;

public:
	UFUNCTION(BlueprintNativeEvent)
	float GetFireRate();
	
	UFUNCTION(BlueprintNativeEvent)
	float GetMaxRange();

	UFUNCTION(BlueprintNativeEvent)
	int32 GetMagSize();

	UFUNCTION(BlueprintPure)
	int32 GetCurrentMagAmmo() const;

	UFUNCTION(BlueprintCallable)
	void SetCurrentMagAmmo(const int32 NewAmmo);

	virtual void NativeOnPostGeneration() override;
};
