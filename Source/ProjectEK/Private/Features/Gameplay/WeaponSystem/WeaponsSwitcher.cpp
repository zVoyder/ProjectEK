// Copyright zVoyder, Inc. All Rights Reserved.

#include "Features/Gameplay/WeaponSystem/WeaponsSwitcher.h"
#include "Features/Gameplay/WeaponSystem/Factories/EKWeaponsFactory.h"

bool UWeaponsSwitcher::CanAddActor_Implementation(const UItemBase* Item) const
{
	return IsWeaponItem(Item);
}

AActor* UWeaponsSwitcher::CreateActorToHold_Implementation(UItemBase* Item) const
{
	APawn* Owner = Cast<APawn>(GetOwner());
	return UEKWeaponsFactory::CreateWeapon(Owner, Item);
}

void UWeaponsSwitcher::OnHoldActor_Implementation(AActor* Actor) const
{
	AWeaponBase* Weapon = Cast<AWeaponBase>(Actor);

	if (!IsValid(Weapon))
		return;

	Weapon->Equip();
}

void UWeaponsSwitcher::OnWithdrawActor_Implementation(AActor* Actor) const
{
	AWeaponBase* Weapon = Cast<AWeaponBase>(Actor);

	if (!IsValid(Weapon))
		return;

	Weapon->Unequip();
}

void UWeaponsSwitcher::OnActorDisposed_Implementation(AActor* Actor) const
{
	AWeaponBase* Weapon = Cast<AWeaponBase>(Actor);

	if (!IsValid(Weapon))
		return;

	Weapon->Unequip();
}

AEKWeaponFirearm* UWeaponsSwitcher::GetHeldActorAsFirearmWeapon() const
{
	return Cast<AEKWeaponFirearm>(GetHeldActor());
}

AEKWeaponMelee* UWeaponsSwitcher::GetHeldActorAsMeleeWeapon() const
{
	return Cast<AEKWeaponMelee>(GetHeldActor());
}

AWeaponBase* UWeaponsSwitcher::GetHeldActorAsWeapon() const
{
	return Cast<AWeaponBase>(GetHeldActor());
}

bool UWeaponsSwitcher::IsWeaponItem(const UItemBase* Item)
{
	return Item->IsA(UEKWeaponItem::StaticClass());
}

bool UWeaponsSwitcher::HasSameWeaponItem(const AWeaponBase* WeaponA, const AWeaponBase* WeaponB)
{
	if (!IsValid(WeaponA) || !IsValid(WeaponB))
		return false;

	return WeaponA->GetPayload() == WeaponB->GetPayload();
}
