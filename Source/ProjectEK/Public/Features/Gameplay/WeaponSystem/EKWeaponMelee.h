// Copyright zVoyder, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Features/Gameplay/InventorySystem/EKWeaponItem.h"
#include "Weapons/WeaponMelee.h"
#include "EKWeaponMelee.generated.h"

UCLASS()
class PROJECTEK_API AEKWeaponMelee : public AWeaponMelee
{
	GENERATED_BODY()

private:
	UPROPERTY()
	UEKWeaponItem* WeaponItem;

public:
	AEKWeaponMelee();

	virtual void Init(APawn* InOwner, UObject* InPayload = nullptr) override;

	UFUNCTION(BlueprintPure)
	UEKWeaponItem* GetWeaponMeleeItem() const;
};
