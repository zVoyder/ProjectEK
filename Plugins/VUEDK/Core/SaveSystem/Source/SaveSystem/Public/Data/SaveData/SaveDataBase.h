// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Utility/SSSerializationUtility.h"
#include "SaveDataBase.generated.h"

UCLASS(Abstract, Blueprintable, BlueprintType)
class SAVESYSTEM_API USaveDataBase : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta = (ExposeOnSpawn = true))
	FName SaveDataID = "DefaultID";

public:
	virtual bool SaveObjectDataNative(UObject* ObjectToSave);

	virtual bool LoadObjectDataNative(UObject* ObjectToLoad);
	
	UFUNCTION(BlueprintCallable)
	void SetSaveDataID(const FName NewID);

	UFUNCTION(BlueprintCallable)
	FName GetSaveDataID() const;
	
protected:
	UFUNCTION(BlueprintNativeEvent)
	bool SaveObjectData(UObject* ObjectToSave);

	UFUNCTION(BlueprintNativeEvent)
	bool LoadObjectData(UObject* ObjectToLoad);
	
	virtual void Serialize(FArchive& Ar) override;
	
	void SerializeSaveGameMembers(FArchive& Ar);
	
	void HandleObjectProperty(FArchive& Ar, const FObjectProperty* ObjProp);
	
	void HandleArrayProperty(FArchive& Ar, const FArrayProperty* ArrayProp);
	
	void HandleMapProperty(FArchive& Ar, const FMapProperty* MapProp);
	
	void HandleSetProperty(FArchive& Ar, const FSetProperty* SetProp);
};
