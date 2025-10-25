// Copyright VUEDK, Inc. All Rights Reserved.

#include "Shooter/Managers/Magazine/MagazinesManager.h"

void UMagazinesManager::Init()
{
	for (const auto& Elem : MagazinesMap)
	{
		if (Elem.Value)
			Elem.Value->Init();
	}
}

UMagazine* UMagazinesManager::GetMagazineByTag(const FGameplayTag& MagazineTag) const
{
	return HasMagazineWithTag(MagazineTag) ? MagazinesMap[MagazineTag] : nullptr;
}

bool UMagazinesManager::HasMagazineWithTag(const FGameplayTag& MagazineTag) const
{
	return MagazinesMap.Contains(MagazineTag);
}
