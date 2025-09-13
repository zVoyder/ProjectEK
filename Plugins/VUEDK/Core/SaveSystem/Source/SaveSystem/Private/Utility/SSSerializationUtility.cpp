// Copyright VUEDK, Inc. All Rights Reserved.

#include "Utility/SSSerializationUtility.h"
#include "Data/SaveData.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"
#include "Utility/SSUtility.h"

bool USSSerializationUtility::TrySerializeSaveDataObjectInSaveGame(USaveData* SaveDataToSerialize, const FName SaveDataID)
{
	return TrySerializeObjectInSaveGame(SaveDataToSerialize, SaveDataID);
}

bool USSSerializationUtility::TryDeserializeSaveDataObjectFromSaveGame(USaveData* SaveDataToDeserialize, const FName SaveDataID)
{
	return TryDeserializeObjectFromSaveGame(SaveDataToDeserialize, SaveDataID);
}

bool USSSerializationUtility::TrySerializeObjectInSaveGame(UObject* ObjectToSerialize, const FName ObjectID)
{
	if (!IsValid(ObjectToSerialize))
	{
		UE_LOG(LogSaveSystem, Warning, TEXT("USSSerializationUtility::TrySerializeObjectInSaveGame: Failed Serialization: ObjectToSerialize is not valid."));
		return false;
	}

	UDefaultSaveGame* SaveGame = USSUtility::GetSaveGame();
	if (!IsValid(SaveGame))
		return false;

	FSerializedObject SerializedObject;
	FMemoryWriter MemoryWriter(SerializedObject.Bytes, true);
	FObjectAndNameAsStringProxyArchive Ar(MemoryWriter, true);
	SerializeAsSaveGame(ObjectToSerialize, Ar);
	SaveGame->SavedObjects.Add(ObjectID, SerializedObject);
	return true;
}

bool USSSerializationUtility::TryDeserializeObjectFromSaveGame(UObject* ObjectToDeserialize, const FName ObjectID)
{
	if (!IsValid(ObjectToDeserialize))
	{
		UE_LOG(LogSaveSystem, Warning, TEXT("USSSerializationUtility::TryDeserializeObjectFromSaveGame: Failed Deserialization: ObjectToDeserialize is not valid."));
		return false;
	}

	const UDefaultSaveGame* SaveGame = USSUtility::GetSaveGame();
	if (!IsValid(SaveGame) || !SaveGame->SavedObjects.Contains(ObjectID))
		return false;

	const FSerializedObject& SerializedObject = SaveGame->SavedObjects[ObjectID];
	FMemoryReader MemoryReader(SerializedObject.Bytes, true);
	FObjectAndNameAsStringProxyArchive Ar(MemoryReader, true);
	SerializeAsSaveGame(ObjectToDeserialize, Ar);
	return true;
}

void USSSerializationUtility::SerializeAsSaveGame(UObject* ObjectToSerialize, FObjectAndNameAsStringProxyArchive& Ar)
{
	Ar.ArIsSaveGame = true;
	ObjectToSerialize->Serialize(Ar);
}
