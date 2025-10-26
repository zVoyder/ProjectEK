// Copyright zVoyder, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Features/Gameplay/InventorySystem/EKWeaponFirearmItem.h"
#include "Weapons/WeaponFirearm.h"
#include "EKWeaponFirearm.generated.h"

DEFINE_LOG_CATEGORY_STATIC(LogEKWeapons, All, All);

UCLASS()
class PROJECTEK_API AEKWeaponFirearm : public AWeaponFirearm
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "EKWeaponFirearm|Config")
	UItemDataBase* AmmoItemData;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "EKWeaponFirearm|Config")
	bool bUseItemFireRate = true;

private:
	UPROPERTY()
	UEKWeaponFirearmItem* WeaponFirearmItem;

public:
	AEKWeaponFirearm();

	virtual void Init(APawn* InOwner, UObject* InPayload = nullptr) override;

	UFUNCTION(BlueprintPure)
	UEKWeaponFirearmItem* GetWeaponFirearmItem() const;

	virtual bool CanReload_Implementation() const override;
	
	bool CanReloadWithItemData() const;

	virtual void OnBehaviourAmmoChange_Implementation(UShooterBehaviourBase* Behaviour, UMagazine* Magazine, int32 CurrentAmmo, int32 MagSize) override;
	
	virtual void OnReloadSuccess_Implementation(float Remain, float ReloadedAmmo) override;
};
