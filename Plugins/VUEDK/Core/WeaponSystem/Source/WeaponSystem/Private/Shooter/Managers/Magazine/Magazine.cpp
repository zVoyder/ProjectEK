// Copyright VUEDK, Inc. All Rights Reserved.

#include "Shooter/Managers/Magazine/Magazine.h"

void UMagazine::Init()
{
	CurrentSize = MagazineData.DefaultSize;

	if (bInitiallyFull)
		CurrentAmmoCount = CurrentSize;
	else
		CurrentAmmoCount = 0;
}

void UMagazine::SetCurrentAmmo(const int32 NewAmmo)
{
	const int32 MagSize = GetMagazineSize();
	CurrentAmmoCount = FMath::Clamp(NewAmmo, 0, MagSize);
	CallAmmoChangeEvent(MagSize);

	if (IsEmpty())
		CallMagEmptyEvent();
	else if (IsFull())
		CallMagFullEvent();
}

void UMagazine::ModifyCurrentAmmo(const int32 Ammo)
{
	SetCurrentAmmo(CurrentAmmoCount + Ammo);
}

bool UMagazine::TryConsumeAmmo(const int32 Ammo)
{
	if (!CanConsumeAmmo(Ammo))
		return false;

	ModifyCurrentAmmo(-Ammo);
	return true;
}

int32 UMagazine::Refill(const int32 Ammo, int32& OutRemainingAmmo)
{
	ModifyCurrentAmmo(Ammo);
	OutRemainingAmmo = FMath::Abs(CurrentAmmoCount - Ammo);
	const int32 RefilledAmmo = Ammo - OutRemainingAmmo;
	CallRefillEvent(OutRemainingAmmo, RefilledAmmo);
	return RefilledAmmo;
}

void UMagazine::RefillAllMagazine()
{
	int32 RemainingAmmo = 0;
	Refill(GetNeededAmmoToFull(), RemainingAmmo);
}

int32 UMagazine::RefillWithAmmoType(UAmmoTypeData* AmmoType, const int32 Ammo, int32& OutRemainingAmmo)
{
	if (!IsOfAmmoType(AmmoType))
	{
		OutRemainingAmmo = Ammo;
		return 0;
	}

	return Refill(Ammo, OutRemainingAmmo);
}

void UMagazine::SetMagazineSize(int32 NewSize)
{
	NewSize = NewSize < 0 ? 0 : NewSize;
	CurrentSize = NewSize;

	if (CurrentAmmoCount > CurrentSize)
		CurrentAmmoCount = CurrentSize;
}

int32 UMagazine::GetMagazineSize() const
{
	return CurrentSize;
}

UAmmoTypeData* UMagazine::GetAmmoType() const
{
	return MagazineData.AmmoType;
}

int32 UMagazine::GetCurrentAmmo() const
{
	return CurrentAmmoCount;
}

int32 UMagazine::GetNeededAmmoToFull() const
{
	return CurrentSize - CurrentAmmoCount;
}

bool UMagazine::IsFull() const
{
	return CurrentAmmoCount >= CurrentSize;
}

bool UMagazine::IsEmpty() const
{
	return CurrentAmmoCount <= 0;
}

bool UMagazine::IsOfAmmoType(const UAmmoTypeData* AmmoType) const
{
	return AmmoType == MagazineData.AmmoType;
}

bool UMagazine::CanConsumeAmmo(const int32 Ammo) const
{
	return CurrentAmmoCount >= Ammo;
}

void UMagazine::ResetMagazineSizeToDefault()
{
	SetMagazineSize(MagazineData.DefaultSize);
}

void UMagazine::OnRefill_Implementation(int32 CurrentAmmo, int32 RefilledAmmo, int32 RemainingAmmo)
{
}

void UMagazine::OnAmmoChange_Implementation(int32 CurrentAmmo, int32 MagSize)
{
}

void UMagazine::OnFull_Implementation()
{
}

void UMagazine::OnEmpty_Implementation()
{
}

void UMagazine::CallAmmoChangeEvent(const int32 MagSize)
{
	OnAmmoChange(CurrentAmmoCount, MagSize);
	OnAmmoChanged.Broadcast(CurrentAmmoCount, MagSize);
}

void UMagazine::CallRefillEvent(const int32& OutRemainingAmmo, const int32 RefilledAmmo)
{
	OnRefill(CurrentAmmoCount, RefilledAmmo, OutRemainingAmmo);
	OnMagazineRefilled.Broadcast(CurrentAmmoCount, RefilledAmmo, OutRemainingAmmo);
}

void UMagazine::CallMagEmptyEvent()
{
	OnEmpty();
	OnMagazineEmpty.Broadcast();
}

void UMagazine::CallMagFullEvent()
{
	OnFull();
	OnMagazineFull.Broadcast();
}
