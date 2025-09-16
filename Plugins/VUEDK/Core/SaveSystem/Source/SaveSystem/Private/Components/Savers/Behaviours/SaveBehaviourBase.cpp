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

USaveDataBase* USaveBehaviourBase::CreateSaveDataInstanceNative()
{
	USaveDataBase* SaveData = Execute_CreateSaveDataInstance(this);
	if (IsValid(SaveData))
		SaveData->SetSaveDataID(GetSaveBehaviourID());

	return SaveData;
}

USaveDataBase* USaveBehaviourBase::CreateSaveDataInstance_Implementation()
{
	return nullptr;
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

void USaveBehaviourBase::SetSaveBehaviourID(const FName NewID)
{
	SaveBehaviourID = NewID;
}

FName USaveBehaviourBase::GetSaveBehaviourID() const
{
	const FName ClassName = GetClass()->GetFName();
	return FName(*FString::Printf(TEXT("%s_%s"), *SaveBehaviourID.ToString(), *ClassName.ToString()));
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
