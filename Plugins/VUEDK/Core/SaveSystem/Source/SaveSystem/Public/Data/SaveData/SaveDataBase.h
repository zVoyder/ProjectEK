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
	UFUNCTION(BlueprintCallable)
	void SetSaveDataID(const FName NewID);

	UFUNCTION(BlueprintCallable)
	FName GetSaveDataID() const;
	
protected:
	virtual void Serialize(FArchive& Ar) override;
	
	void SerializeSaveGameMembers(const FArchive& Ar);
	
	void HandleObjectProperty(const FArchive& Ar, const FObjectProperty* ObjProp) const;
	
	void HandleArrayProperty(const FArchive& Ar, const FArrayProperty* ArrayProp);
	
	void HandleMapProperty(const FArchive& Ar, const FMapProperty* MapProp);
	
	void HandleSetProperty(const FArchive& Ar, const FSetProperty* SetProp);
};
