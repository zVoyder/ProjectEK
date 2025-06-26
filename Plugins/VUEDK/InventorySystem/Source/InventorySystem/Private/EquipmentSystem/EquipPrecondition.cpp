// Copyright VUEDK, Inc. All Rights Reserved.

#include "EquipmentSystem/EquipPrecondition.h"

bool UEquipPrecondition::IsPreconditionMet_Implementation(UItemBase* Item, class UEquipment* Equipment) const
{
	return true; // Default implementation, can be overridden in derived classes
}

UWorld* UEquipPrecondition::GetWorld() const
{
	return GEngine->GetWorld();
}

bool UEquipPrecondition::ImplementsGetWorld() const
{
	return true;
}
