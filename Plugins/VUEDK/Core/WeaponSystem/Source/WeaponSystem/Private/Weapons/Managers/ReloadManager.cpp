// Copyright VUEDK, Inc. All Rights Reserved.

#include "Weapons/Managers/ReloadManager.h"
#include "WeaponSystem.h"
#include "Weapons/Data/WeaponShootData.h"

void UReloadManager::Init(AWeaponFirearm* InWeaponFirearm)
{
	WeaponFirearm = InWeaponFirearm;
	FirearmMontageManager = InWeaponFirearm->FirearmMontagesManager;
}

void UReloadManager::RequestReload(const FReloadRequest& Request)
{
	if (IsReloading())
	{
		UE_LOG(LogWeaponSystem, Display, TEXT("UReloadManager::RequestReload: Already reloading."));
		return;
	}

	if (!Check())
	{
		UE_LOG(LogWeaponSystem, Error, TEXT("UReloadManager::RequestReload: Check failed."));
		return;
	}

	StartReloadEvent(Request);
}

void UReloadManager::RequestFullReload(const EReloadMode ReloadMode)
{
	if (IsReloading())
	{
		UE_LOG(LogWeaponSystem, Display, TEXT("UReloadManager::RequestFullReload: Already reloading."));
		return;
	}

	if (!Check())
	{
		UE_LOG(LogWeaponSystem, Error, TEXT("UReloadManager::RequestFullReload: Check failed."));
		return;
	}

	const FReloadRequest Request = CreateFullReloadRequest(ReloadMode);
	StartReloadEvent(Request);
}

void UReloadManager::InterruptReload(const float CharacterBlendOutTime, const float WeaponBlendOutTime) const
{
	if (!IsReloading())
		return;

	if (!Check())
	{
		UE_LOG(LogWeaponSystem, Error, TEXT("UReloadManager::InterruptReload: Check failed."));
		return;
	}

	FirearmMontageManager->StopReloadMontage(WeaponBlendOutTime, CharacterBlendOutTime);
}

void UReloadManager::InsertAmmoInBehaviourOfIndex(const int32 BehaviourIndex)
{
	if (!Check())
		return;

	UShooterBehaviourBase* Behaviour = WeaponFirearm->GetShooterBehaviour(BehaviourIndex);
	if (!Behaviour)
		return;

	const UAmmoTypeData* AmmoTypeData = Behaviour->GetRelatedMagazine()->GetAmmoType();
	if (!CurrentReloadEventData.RemainingAmmoPerType.Contains(AmmoTypeData))
		return;

	int32& RemainingAmmo = CurrentReloadEventData.RemainingAmmoPerType[AmmoTypeData];
	if (RemainingAmmo <= 0)
		return;

	const int32 InsertedAmmo = Behaviour->RefillMagazine(RemainingAmmo, RemainingAmmo);
	OnReloadInsertedAmmo.Broadcast(Behaviour, InsertedAmmo, RemainingAmmo);
}

bool UReloadManager::IsReloading() const
{
	return bIsReloading;
}

const FReloadEventData& UReloadManager::GetReloadEventData() const
{
	return CurrentReloadEventData;
}

bool UReloadManager::TryInstantReload(const FReloadRequest& Request, const int32 ReloadableBehaviourIndex)
{
	const UShooterBehaviourBase* Behaviour = WeaponFirearm->GetShooterBehaviour(ReloadableBehaviourIndex);
	if (!IsValid(Behaviour))
		return false;

	const UWeaponShootData* ShootData = Cast<UWeaponShootData>(Behaviour->ShootData);
	if (!IsValid(ShootData))
		return false;

	if (ShootData->bEnableReloadMontage)
		return false;

	UE_LOG(LogWeaponSystem, Display, TEXT("UReloadManager::StartReloadEvent: Reload montage disabled, performing instant reload."));
	CurrentReloadEventData = CreateReloadEvent(Request);
	if (Request.ReloadMode == EReloadMode::Parallel)
		FillRemainingMagazines();
	else
		InsertAmmoInBehaviourOfIndex(ReloadableBehaviourIndex);

	EndReloadEvent(false);
	return true;
}

void UReloadManager::StartReloadEvent(const FReloadRequest& Request)
{
	const int32 ReloadableBehaviourIndex = FindReloadableBehaviourIndex(Request);
	if (ReloadableBehaviourIndex == INDEX_NONE)
	{
		UE_LOG(LogWeaponSystem, Warning, TEXT("UReloadManager::StartReloadEvent: No reloadable magazines found."));
		return;
	}

	if (TryInstantReload(Request, ReloadableBehaviourIndex))
		return;

	if (!TryStartReloadMontage(ReloadableBehaviourIndex))
	{
		UE_LOG(LogWeaponSystem, Error, TEXT("UReloadManager::StartReloadEvent: Failed to start reload montage."));
		return;
	}

	bIsReloading = true;
	CurrentReloadIndex = ReloadableBehaviourIndex;
	CurrentReloadEventData = CreateReloadEvent(Request);
	ListenReloadEndedEvent();
	OnReloadStarted.Broadcast(Request);
}

void UReloadManager::EndReloadEvent(const bool bInterrupted)
{
	bIsReloading = false;
	CurrentReloadIndex = 0;
	OnReloadEnded.Broadcast(CurrentReloadEventData.Request, bInterrupted);
	CurrentReloadEventData = FReloadEventData();
	StopListeningReloadEndedEvent();
}

bool UReloadManager::TryStartReloadMontage(const int32 BehaviourIndex) const
{
	const UShooterBehaviourBase* Behaviour = WeaponFirearm->GetShooterBehaviour(BehaviourIndex);
	if (!Behaviour)
		return false;

	const UWeaponShootData* ShootData = Cast<UWeaponShootData>(Behaviour->ShootData);
	if (!IsValid(ShootData))
		return false;

	FirearmMontageManager->PlayReloadMontage(ShootData->ReloadMontageIndex);
	return true;
}

int32 UReloadManager::FindReloadableBehaviourIndex(const FReloadRequest& Request) const
{
	for (const FReloadEntry& Entry : Request.Entries)
	{
		const UShooterBehaviourBase* Behaviour = WeaponFirearm->GetShooterBehaviour(Entry.BehaviourIndex);
		if (Behaviour && !Behaviour->IsMagazineFull())
			return Entry.BehaviourIndex;
	}

	return INDEX_NONE;
}

FReloadRequest UReloadManager::CreateFullReloadRequest(const EReloadMode ReloadMode) const
{
	FReloadRequest Request;
	Request.ReloadMode = ReloadMode;

	TArray<UShooterBehaviourBase*> Behaviours = WeaponFirearm->Shooter->ShooterBehaviours;
	for (int32 i = 0; i < Behaviours.Num(); ++i)
	{
		const UShooterBehaviourBase* Behaviour = Behaviours[i];
		if (!Behaviour)
			continue;

		const UMagazine* Magazine = Behaviour->GetRelatedMagazine();
		if (!IsValid(Magazine))
			continue;

		const int32 NeededAmmo = Magazine->GetNeededAmmoToFull();
		if (NeededAmmo <= 0)
			continue;

		UAmmoTypeData* AmmoType = Magazine->GetAmmoType();
		FReloadEntry Entry;
		Entry.BehaviourIndex = i;
		Entry.AmmoType = AmmoType;
		Entry.AmmoToInsert = NeededAmmo;
		Request.Entries.Add(Entry);
	}

	return Request;
}

FReloadEventData UReloadManager::CreateReloadEvent(const FReloadRequest& Request) const
{
	FReloadEventData ReloadEvent;
	ReloadEvent.Request = Request;
	for (const FReloadEntry& Entry : Request.Entries)
	{
		if (ReloadEvent.RemainingAmmoPerType.Contains(Entry.AmmoType))
			ReloadEvent.RemainingAmmoPerType[Entry.AmmoType] += Entry.AmmoToInsert;
		else
			ReloadEvent.RemainingAmmoPerType.Add(Entry.AmmoType, Entry.AmmoToInsert);
	}

	return ReloadEvent;
}

void UReloadManager::ListenReloadEndedEvent() const
{
	FirearmMontageManager->OnReloadMontageEnded.AddDynamic(this, &UReloadManager::OnReloadMontageEnded);
}

void UReloadManager::StopListeningReloadEndedEvent()
{
	FirearmMontageManager->OnReloadMontageEnded.RemoveDynamic(this, &UReloadManager::OnReloadMontageEnded);
}

void UReloadManager::FillRemainingMagazines()
{
	for (const FReloadEntry& Entry : CurrentReloadEventData.Request.Entries)
		InsertAmmoInBehaviourOfIndex(Entry.BehaviourIndex);
}

void UReloadManager::OnParallelReloadEnded(const FWeaponMontageData& WeaponMontageData, int32 MontageIndex, bool bInterrupted)
{
	if (!bInterrupted)
		FillRemainingMagazines();
	
	EndReloadEvent(bInterrupted);
}

void UReloadManager::OnSequentialReloadEnded(const FWeaponMontageData& WeaponMontageData, int32 MontageIndex, bool bInterrupted)
{
	if (!bInterrupted)
		InsertAmmoInBehaviourOfIndex(CurrentReloadIndex);

	CurrentReloadIndex = FindReloadableBehaviourIndex(CurrentReloadEventData.Request);
	if (bInterrupted || !TryStartReloadMontage(CurrentReloadIndex))
		EndReloadEvent(bInterrupted);
}

void UReloadManager::OnReloadMontageEnded(const FWeaponMontageData& WeaponMontageData, int32 MontageIndex, bool bInterrupted)
{
	switch (CurrentReloadEventData.Request.ReloadMode)
	{
	case EReloadMode::Parallel:
		OnParallelReloadEnded(WeaponMontageData, MontageIndex, bInterrupted);
		break;
	case EReloadMode::Sequential:
		OnSequentialReloadEnded(WeaponMontageData, MontageIndex, bInterrupted);
		break;
	default:
		break;
	}
}

bool UReloadManager::Check() const
{
	return IsValid(WeaponFirearm) && IsValid(FirearmMontageManager);
}
