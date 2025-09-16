// Copyright VUEDK, Inc. All Rights Reserved.

#include "Utility/SSSerializationUtility.h"
#include "Data/SaveData/SaveDataBase.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"
#include "Utility/SSUtility.h"

bool USSSerializationUtility::TrySerializeSaveDataObjectInSaveGame(USaveDataBase* SaveDataToSerialize)
{
	if (!IsValid(SaveDataToSerialize))
	{
		UE_LOG(LogSaveSystem, Warning, TEXT("USSSerializationUtility::TrySerializeSaveDataObjectInSaveGame: Failed Serialization: SaveDataToSerialize is not valid."));
		return false;
	}

	return TrySerializeObjectInSaveGame(SaveDataToSerialize, SaveDataToSerialize->GetSaveDataID());
}

bool USSSerializationUtility::TryDeserializeSaveDataObjectFromSaveGame(USaveDataBase* SaveDataToDeserialize)
{
	if (!IsValid(SaveDataToDeserialize))
	{
		UE_LOG(LogSaveSystem, Warning, TEXT("USSSerializationUtility::TryDeserializeSaveDataObjectFromSaveGame: Failed Deserialization: SaveDataToDeserialize is not valid."));
		return false;
	}

	return TryDeserializeObjectFromSaveGame(SaveDataToDeserialize, SaveDataToDeserialize->GetSaveDataID());
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
	{
		UE_LOG(LogSaveSystem, Warning, TEXT("USSSerializationUtility::TrySerializeObjectInSaveGame: Failed Serialization: SaveGame instance is not valid."));
		return false;
	}

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
	if (!IsValid(SaveGame))
	{
		UE_LOG(LogSaveSystem, Warning, TEXT("USSSerializationUtility::TryDeserializeObjectFromSaveGame: Failed Deserialization: SaveGame instance is not valid."));
		return false;
	}
	
	if (!SaveGame->SavedObjects.Contains(ObjectID))
	{
		UE_LOG(LogSaveSystem, Warning, TEXT("USSSerializationUtility::TryDeserializeObjectFromSaveGame: Failed Deserialization: No saved data found for ObjectID %s."), *ObjectID.ToString());
		return false;
	}

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
