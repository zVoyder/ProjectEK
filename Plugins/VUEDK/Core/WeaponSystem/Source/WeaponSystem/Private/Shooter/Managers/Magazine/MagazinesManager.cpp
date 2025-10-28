// Copyright VUEDK, Inc. All Rights Reserved.

#include "Shooter/Managers/Magazine/MagazinesManager.h"

void UMagazinesManager::Init()
{
	for (const auto& Mag : Magazines)
		Mag->Init();
}

UMagazine* UMagazinesManager::GetMagazine(const int32 Index) const
{
	return HasMagazineOfIndex(Index) ? Magazines[Index] : nullptr;
}

bool UMagazinesManager::HasMagazineOfIndex(const int32 Index) const
{
	return Magazines.IsValidIndex(Index);
}
