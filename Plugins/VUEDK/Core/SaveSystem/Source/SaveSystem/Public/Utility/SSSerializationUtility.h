// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Data/Saves/DefaultSaveGame.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"
#include "SSSerializationUtility.generated.h"

class USaveData;
class FMemoryWriter;
class FMemoryReader;

UCLASS()
class SAVESYSTEM_API USSSerializationUtility : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Save System|Serialization")
	static bool TrySerializeSaveDataObjectInSaveGame(USaveData* SaveDataToSerialize, const FName SaveDataID);

	UFUNCTION(BlueprintCallable, Category = "Save System|Serialization")
	static bool TryDeserializeSaveDataObjectFromSaveGame(USaveData* SaveDataToDeserialize, const FName SaveDataID);

	UFUNCTION(BlueprintCallable, Category = "Save System|Serialization")
	static bool TrySerializeObjectInSaveGame(UObject* ObjectToSerialize, const FName ObjectID);

	UFUNCTION(BlueprintCallable, Category = "Save System|Serialization")
	static bool TryDeserializeObjectFromSaveGame(UObject* ObjectToDeserialize, const FName ObjectID);

private:
	static void SerializeAsSaveGame(UObject* ObjectToSerialize, FObjectAndNameAsStringProxyArchive& Ar);
};
