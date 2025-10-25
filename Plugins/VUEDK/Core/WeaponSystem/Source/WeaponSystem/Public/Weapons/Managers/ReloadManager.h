// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Weapons/WeaponFirearm.h"
#include "Weapons/Data/ReloadRequest.h"
#include "ReloadManager.generated.h"

UCLASS()
class WEAPONSYSTEM_API UReloadManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	AWeaponFirearm* WeaponFirearm;
	FReloadEventData CurrentReloadEventData;

public:
	void Init(AWeaponFirearm* InWeaponFirearm);
	
	void RequestReload(const FReloadRequest& Request);
	
	void RequestReloadByAmmoType(UAmmoTypeData* AmmoType, int32 AmmoToInsert);
	
	void RequestReloadBehaviour(int32 BehaviourIndex, UAmmoTypeData* AmmoType, int32 AmmoToInsert, bool bSequential = false);

	void InsertAmmoMainBehaviour();
	
	void InsertAmmoBehaviour(const int32 BehaviourIndex);

private:
	void PlayMainReload() const;

	static FReloadEventData CreateReloadEvent(const FReloadRequest& Request);

	UFUNCTION()
	void OnMainReloadMontageEnded(bool bInterrupted);
	
private:
	bool Check() const;
};
