// Copyright VUEDK, Inc. All Rights Reserved.

#include "Components/Savers/Behaviours/SaveBehaviourBase.h"
#include "Components/Savers/Saver.h"

void USaveBehaviourBase::BeginPlay()
{
	CacheSaveDataInstanceIfNeeded();
	ReceiveBeginPlay();
}

void USaveBehaviourBase::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	ReceiveEndPlay(EndPlayReason);
}

USaveData* USaveBehaviourBase::CreateSaveDataInstance_Implementation()
{
	return nullptr;
}

bool USaveBehaviourBase::Save_Implementation(USaveData* SaveData)
{
	return false;
}

bool USaveBehaviourBase::Load_Implementation(USaveData* SaveData)
{
	return false;
}

USaveData* USaveBehaviourBase::GetSaveDataInstance()
{
	if (bPreserveSaveDataInstance)
	{
		if (!IsValid(CachedSaveData))
			CachedSaveData = Execute_CreateSaveDataInstance(this);

		return CachedSaveData;
	}

	return Execute_CreateSaveDataInstance(this);
}

#if WITH_ENGINE
UWorld* USaveBehaviourBase::GetWorld() const
{
	return GetOuter()->GetWorld();
}

#if WITH_EDITOR
bool USaveBehaviourBase::ImplementsGetWorld() const
{
	return true;
}
#endif // WITH_EDITOR
#endif // WITH_ENGINE

USaver* USaveBehaviourBase::GetOwnerSaver()
{
	if (IsValid(CachedOwnerSaver))
		return CachedOwnerSaver;

	if (USaver* OwnerSaver = Cast<USaver>(GetOuter()))
	{
		CachedOwnerSaver = OwnerSaver;
		return CachedOwnerSaver;
	}
	
	return nullptr;
}

AActor* USaveBehaviourBase::GetOwnerActor()
{
	const USaver* OwnerSaver = GetOwnerSaver();
	
	if (!IsValid(OwnerSaver))
		return nullptr;
	
	return OwnerSaver->GetOwner();
}

FName USaveBehaviourBase::GetSaveBehaviourID() const
{
	return FName(*GetClass()->GetName());
}

void USaveBehaviourBase::CacheSaveDataInstanceIfNeeded()
{
	if (bPreserveSaveDataInstance)
	{
		if (!IsValid(CachedSaveData))
			CachedSaveData = Execute_CreateSaveDataInstance(this);
	}
}
