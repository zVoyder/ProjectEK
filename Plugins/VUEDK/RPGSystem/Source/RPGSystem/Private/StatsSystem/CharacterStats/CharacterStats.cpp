// Copyright VUEDK, Inc. All Rights Reserved.

#include "StatsSystem/CharacterStats/CharacterStats.h"
#include "RPGInventory/Items/RPGGearItem.h"
#include "RPGInventory/Items/RPGItem.h"

UCharacterStats::UCharacterStats(): Equipment(nullptr)
{
}

void UCharacterStats::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	
	if (!Check())
		return;
	
	Equipment->OnAnyItemEquipNotify.RemoveDynamic(this, &UCharacterStats::OnItemEquippedOrUnequipped);
	Equipment->OnAnyItemUnequipNotify.RemoveDynamic(this, &UCharacterStats::OnItemEquippedOrUnequipped);
	Equipment->OnAnyItemSwapWithInventoryItem.RemoveDynamic(this, &UCharacterStats::OnItemSwappedWithInventoryItem);
	Equipment->OnItemsSwitchedSlots.RemoveDynamic(this, &UCharacterStats::OnItemsSwitchedSlots);
}

void UCharacterStats::Init(UEquipment* InEquipment)
{
	if (!IsValid(InEquipment))
		return;
	
	Equipment = InEquipment;
	Equipment->OnAnyItemEquipNotify.AddDynamic(this, &UCharacterStats::OnItemEquippedOrUnequipped);
	Equipment->OnAnyItemUnequipNotify.AddDynamic(this, &UCharacterStats::OnItemEquippedOrUnequipped);
	Equipment->OnAnyItemSwapWithInventoryItem.AddDynamic(this, &UCharacterStats::OnItemSwappedWithInventoryItem);
	Equipment->OnItemsSwitchedSlots.AddDynamic(this, &UCharacterStats::OnItemsSwitchedSlots);
}

void UCharacterStats::OnCalculateFullStatsValues_Implementation()
{
	if (!Check())
		return;
	
	for (UItemBase* Item : Equipment->GetEquippedItems())
	{
		if (const URPGGearItem* RPGItem = Cast<URPGGearItem>(Item); RPGItem != nullptr)
		{
			for (const auto& Values : GetFullStatsValues())
			{
				UStatDataBase* Stat = Values.Key;
				ModifyFullStatValue(Stat, RPGItem->GearStatsContainer->GetValueAsFloat(Stat));
			}
		}
	}
}

void UCharacterStats::OnItemEquippedOrUnequipped(UEquipSlotKey* EquipSlotKey, int32 SlotIndex, UItemBase* ItemBase)
{
	CalculateFullStatsValues();
}

void UCharacterStats::OnItemSwappedWithInventoryItem(UEquipSlotKey* EquipSlotKey, UItemBase* Item, UItemBase* InventoryItem, int32 SlotIndex)
{
	CalculateFullStatsValues();
}

void UCharacterStats::OnItemsSwitchedSlots(UEquipSlotKey* EquipSlotKey, UItemBase* ItemBaseA, UItemBase* ItemBaseB, int OldSlotIndexItemA, int OldSlotIndexItemB, int NewSlotIndexItemA, int NewSlotIndexItemB)
{
	CalculateFullStatsValues();
}

bool UCharacterStats::Check() const
{
	return IsValid(Equipment);
}
