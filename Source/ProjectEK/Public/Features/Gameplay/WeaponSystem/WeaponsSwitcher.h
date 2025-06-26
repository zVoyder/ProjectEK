// Copyright zVoyder, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "EKWeaponFirearm.h"
#include "EKWeaponMelee.h"
#include "Components/ActorComponent.h"
#include "Features/Gameplay/InventorySystem/EKWeaponItem.h"
#include "Weapons/WeaponBase.h"
#include "EquipmentSystem/EquipActorSwitcher.h"
#include "WeaponsSwitcher.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class PROJECTEK_API UWeaponsSwitcher : public UEquipActorSwitcher
{
	GENERATED_BODY()

protected:
	virtual bool CanAddActor_Implementation(const UItemBase* Item) const override;

	virtual AActor* CreateActorToHold_Implementation(UItemBase* Item) const override;

	virtual void OnHoldActor_Implementation(AActor* Actor) const override;

	virtual void OnWithdrawActor_Implementation(AActor* Actor) const override;

	virtual void OnActorDisposed_Implementation(AActor* Actor) const override;
	
private:
	UFUNCTION(BlueprintPure)
	AEKWeaponFirearm* GetHeldActorAsFirearmWeapon() const;

	UFUNCTION(BlueprintPure)
	AEKWeaponMelee* GetHeldActorAsMeleeWeapon() const;

	UFUNCTION(BlueprintPure)
	AWeaponBase* GetHeldActorAsWeapon() const;
	
	static bool IsWeaponItem(const UItemBase* Item);

	static bool HasSameWeaponItem(const AWeaponBase* WeaponA, const AWeaponBase* WeaponB);
};
