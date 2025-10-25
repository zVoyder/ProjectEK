// Copyright VUEDK, Inc. All Rights Reserved.

#include "Weapons/Managers/ReloadManager.h"

void UReloadManager::Init(AWeaponFirearm* InWeaponFirearm)
{
	WeaponFirearm = InWeaponFirearm;
	WeaponFirearm->FirearmMontagesManager->MainReloadMontage.OnMontageFinished.AddDynamic(this, &UReloadManager::OnMainReloadMontageEnded);
}

void UReloadManager::RequestReload(const FReloadRequest& Request)
{
	if (!Check())
		return;

	CurrentReloadEventData = CreateReloadEvent(Request);

	if (Request.bParallel)
	{
		PlayMainReload();
	}
	else
	{
	}
}

void UReloadManager::RequestReloadByAmmoType(UAmmoTypeData* AmmoType, int32 AmmoToInsert)
{
}

void UReloadManager::RequestReloadBehaviour(int32 BehaviourIndex, UAmmoTypeData* AmmoType, int32 AmmoToInsert, bool bSequential)
{
}

void UReloadManager::InsertAmmoMainBehaviour()
{
	// if (!Check())
	// 	return;
	//
	// const UAmmoTypeData* AmmoTypeData = WeaponFirearm->GetWeaponMainAmmoType();
	// if (!CurrentReloadEventData.AmmoPerType.Contains(AmmoTypeData))
	// 	return;
	//
	// int32& Ammo = CurrentReloadEventData.AmmoPerType[AmmoTypeData];
	// const float Remain = WeaponFirearm->Shooter->MainShooterBehaviour->Refill(Ammo);
	// Ammo = Remain;
}

void UReloadManager::InsertAmmoBehaviour(const int32 BehaviourIndex)
{
	// if (!Check())
	// 	return;
	//
	// UShooterBehaviourBase* Behaviour = WeaponFirearm->GetShooterBehaviour(BehaviourIndex);
	// if (!Behaviour)
	// 	return;
	//
	// const UAmmoTypeData* AmmoTypeData = Behaviour->AmmoType;
	// if (!CurrentReloadEventData.AmmoPerType.Contains(AmmoTypeData))
	// 	return;
	//
	// int32& Ammo = CurrentReloadEventData.AmmoPerType[AmmoTypeData];
	// if (Ammo <= 0)
	// 	return;
	//
	// const float Remain = Behaviour->Refill(Ammo);
	// Ammo = Remain;
}

void UReloadManager::PlayMainReload() const
{
	if (!Check())
		return;
	
	const UFirearmMontagesManager* MontagesManager = WeaponFirearm->FirearmMontagesManager;
	if (!IsValid(MontagesManager))
		return;

	float WeaponPlayRate = 0.f;
	float CharacterPlayRate = 0.f;

	if (IsValid(MontagesManager->MainReloadMontage.GetWeaponMontage()))
		WeaponPlayRate = MontagesManager->MainReloadMontage.GetWeaponMontage()->GetPlayLength() / WeaponFirearm->GetWeaponReloadTime();

	if (IsValid(MontagesManager->MainReloadMontage.GetCharacterMontage()))
		CharacterPlayRate = MontagesManager->MainReloadMontage.GetCharacterMontage()->GetPlayLength() / WeaponFirearm->GetWeaponReloadTime();

	WeaponFirearm->StartWeaponMontage(
		MontagesManager->MainReloadMontage,
		WeaponPlayRate,
		CharacterPlayRate
	);
}

FReloadEventData UReloadManager::CreateReloadEvent(const FReloadRequest& Request)
{
	FReloadEventData ReloadEvent;
	ReloadEvent.Request = Request;
	for (const FReloadEntry& Entry : Request.Entries)
	{
		if (ReloadEvent.AmmoPerType.Contains(Entry.AmmoType))
			ReloadEvent.AmmoPerType[Entry.AmmoType] += Entry.AmmoToInsert;
		else
			ReloadEvent.AmmoPerType.Add(Entry.AmmoType, Entry.AmmoToInsert);
	}

	return ReloadEvent;
}

void UReloadManager::OnMainReloadMontageEnded(bool bInterrupted)
{
	if (bInterrupted)
		return;

	if (CurrentReloadEventData.Request.bUseInsertAmmoNotifiers) // Handled by notifies
		return;

	for (const FReloadEntry& Entry : CurrentReloadEventData.Request.Entries)
	{
		if (Entry.bIsMainBehaviour)
			InsertAmmoMainBehaviour();
		else
			InsertAmmoBehaviour(Entry.BehaviourIndex);
	}
}

bool UReloadManager::Check() const
{
	return IsValid(WeaponFirearm);
}
