// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "TestingInstancedSaveData.h"
#include "Data/SaveData.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"
#include "Utility/SSSerializationUtility.h"
#include "TestingSaveData.generated.h"

UCLASS()
class PROJECTEK_API UTestingSaveData : public USaveData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, SaveGame, Instanced)
	UTestingInstancedSaveData* InstancedData;
	
	UPROPERTY(BlueprintReadWrite, SaveGame)
	int32 SomeInt;


	// virtual void Serialize(FArchive& Ar) override;
};

// inline void UTestingSaveData::Serialize(FArchive& Ar)
// {
// 	Super::Serialize(Ar);
//
// 	if (Ar.IsSaving())
// 	{
// 		InstancedData = USSSerializationUtility::TrySerializeObjectInSaveGame(InstancedData, TEXT("InstancedData")) ? InstancedData : nullptr;
// 	}else
// 	{
// 		InstancedData = USSSerializationUtility::TryDeserializeObjectFromSaveGame(InstancedData, TEXT("InstancedData")) ? InstancedData : nullptr;
// 	}
// }
