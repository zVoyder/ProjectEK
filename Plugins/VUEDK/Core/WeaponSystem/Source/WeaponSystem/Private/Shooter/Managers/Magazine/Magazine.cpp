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

void UMagazine::SetCurrentAmmo(const int32 NewAmmo, const UObject* Instigator)
{
	const int32 MagSize = GetMagazineSize();
	CurrentAmmoCount = FMath::Clamp(NewAmmo, 0, MagSize);
	CallAmmoChangeEvent(MagSize, Instigator);

	if (IsEmpty())
		CallMagEmptyEvent(Instigator);
	else if (IsFull())
		CallMagFullEvent(Instigator);
}

void UMagazine::ModifyCurrentAmmo(const int32 Ammo, const UObject* Instigator)
{
	SetCurrentAmmo(CurrentAmmoCount + Ammo, Instigator);
}

bool UMagazine::TryConsumeAmmo(const int32 Ammo, const UObject* Instigator)
{
	if (!CanConsumeAmmo(Ammo))
		return false;

	ModifyCurrentAmmo(-Ammo, Instigator);
	return true;
}

int32 UMagazine::Refill(const int32 Ammo, int32& OutRemainingAmmo, const UObject* Instigator)
{
	ModifyCurrentAmmo(Ammo, Instigator);
	OutRemainingAmmo = FMath::Abs(CurrentAmmoCount - Ammo);
	const int32 RefilledAmmo = Ammo - OutRemainingAmmo;
	CallRefillEvent(OutRemainingAmmo, RefilledAmmo);
	return RefilledAmmo;
}

void UMagazine::RefillAllMagazine(const UObject* Instigator)
{
	int32 RemainingAmmo = 0;
	Refill(GetNeededAmmoToFull(), RemainingAmmo, Instigator);
}

int32 UMagazine::RefillWithAmmoType(UAmmoTypeData* AmmoType, const int32 Ammo, int32& OutRemainingAmmo, const UObject* Instigator)
{
	if (!IsOfAmmoType(AmmoType))
	{
		OutRemainingAmmo = Ammo;
		return 0;
	}

	return Refill(Ammo, OutRemainingAmmo, Instigator);
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

void UMagazine::OnRefill_Implementation(const UObject* Instigator, int32 CurrentAmmo, int32 RefilledAmmo, int32 RemainingAmmo)
{
}

void UMagazine::OnAmmoChange_Implementation(const UObject* Instigator, int32 CurrentAmmo, int32 MagSize)
{
}

void UMagazine::OnFull_Implementation(const UObject* Instigator)
{
}

void UMagazine::OnEmpty_Implementation(const UObject* Instigator)
{
}

void UMagazine::CallAmmoChangeEvent(const int32 MagSize, const UObject* Instigator)
{
	OnAmmoChange(Instigator, CurrentAmmoCount, MagSize);
	OnMagazineAmmoChanged.Broadcast(Instigator, CurrentAmmoCount, MagSize);
}

void UMagazine::CallRefillEvent(const int32& OutRemainingAmmo, const int32 RefilledAmmo, const UObject* Instigator)
{
	OnRefill(Instigator, CurrentAmmoCount, RefilledAmmo, OutRemainingAmmo);
	OnMagazineRefilled.Broadcast(Instigator, CurrentAmmoCount, RefilledAmmo, OutRemainingAmmo);
}

void UMagazine::CallMagEmptyEvent(const UObject* Instigator)
{
	OnEmpty(Instigator);
	OnMagazineEmpty.Broadcast(Instigator);
}

void UMagazine::CallMagFullEvent(const UObject* Instigator)
{
	OnFull(Instigator);
	OnMagazineFull.Broadcast(Instigator);
}
