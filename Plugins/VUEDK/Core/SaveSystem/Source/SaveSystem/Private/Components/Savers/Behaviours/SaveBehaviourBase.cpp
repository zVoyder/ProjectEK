// Copyright VUEDK, Inc. All Rights Reserved.

#include "Components/Savers/Behaviours/SaveBehaviourBase.h"
#include "Components/Savers/Saver.h"

USaveBehaviourBase::USaveBehaviourBase() : UniqueBehaviourID(FGuid::NewGuid())
{
}

void USaveBehaviourBase::Init(USaver* OwnerSaver)
{
	CachedOwnerSaver = OwnerSaver;
	CacheSaveDataInstanceIfNeeded();
}

void USaveBehaviourBase::BeginPlay()
{
	ReceiveBeginPlay();
}

void USaveBehaviourBase::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	ReceiveEndPlay(EndPlayReason);
}

USaveDataBase* USaveBehaviourBase::CreateSaveDataInstanceNative()
{
	USaveDataBase* SaveData = Execute_CreateSaveDataInstance(this);
	if (IsValid(SaveData))
		SaveData->SetSaveDataID(GetCompositeSaveBehaviourID());

	return SaveData;
}

USaveDataBase* USaveBehaviourBase::CreateSaveDataInstance_Implementation()
{
	return NewObject<USaveDataBase>(this, SaveClass);
}

void USaveBehaviourBase::PrepareForSerializationNative(USaveDataBase* SaveData)
{
	Execute_PrepareForSerialization(this, SaveData);
}

void USaveBehaviourBase::PrepareForSerialization_Implementation(USaveDataBase* SaveData)
{
}

void USaveBehaviourBase::PrepareForDeserializationNative(USaveDataBase* SaveData)
{
	Execute_PrepareForDeserialization(this, SaveData);
}

void USaveBehaviourBase::PrepareForDeserialization_Implementation(USaveDataBase* SaveData)
{
}

bool USaveBehaviourBase::Save_Implementation(USaveDataBase* SaveData)
{
	return true;
}

bool USaveBehaviourBase::Load_Implementation(USaveDataBase* SaveData)
{
	return true;
}

USaveDataBase* USaveBehaviourBase::GetSaveDataInstance()
{
	if (bPreserveSaveDataInstance)
	{
		if (!IsValid(CachedSaveData))
			CachedSaveData = CreateSaveDataInstanceNative();

		return CachedSaveData;
	}

	return CreateSaveDataInstanceNative();
}

FName USaveBehaviourBase::GetCompositeSaveBehaviourID() const
{
	if (!Check())
		return NAME_None;

	const FName UniqueID = FName(*UniqueBehaviourID.ToString());
	return CachedOwnerSaver->MakeCompositeSaveID(UniqueID);
}

bool USaveBehaviourBase::Check() const
{
	return IsValid(CachedOwnerSaver) && SaveClass != nullptr;
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

void USaveBehaviourBase::CacheSaveDataInstanceIfNeeded()
{
	if (bPreserveSaveDataInstance)
	{
		if (!IsValid(CachedSaveData))
			CachedSaveData = CreateSaveDataInstanceNative();
	}
}
