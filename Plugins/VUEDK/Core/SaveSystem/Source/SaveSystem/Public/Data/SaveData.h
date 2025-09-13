// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Utility/SSSerializationUtility.h"
#include "SaveData.generated.h"

UCLASS(Blueprintable, BlueprintType)
class SAVESYSTEM_API USaveData : public UObject
{
	GENERATED_BODY()

protected:
	virtual void Serialize(FArchive& Ar) override
	{
		Super::Serialize(Ar);
		SerializeSaveGameMembers(Ar);
	}

	void SerializeSaveGameMembers(FArchive& Ar);
};

inline void USaveData::SerializeSaveGameMembers(FArchive& Ar)
{
	for (TFieldIterator<FProperty> PropIt(GetClass()); PropIt; ++PropIt)
	{
		FProperty* Property = *PropIt;

		if (!Property->HasAnyPropertyFlags(CPF_SaveGame))
			continue;

		if (FObjectProperty* ObjProp = CastField<FObjectProperty>(Property))
		{
			UObject* Obj = ObjProp->GetObjectPropertyValue_InContainer(this);
			if (!IsValid(Obj))
				continue;

			if (Ar.IsSaving())
				USSSerializationUtility::TrySerializeObjectInSaveGame(Obj, "Test");
			else
				USSSerializationUtility::TryDeserializeObjectFromSaveGame(Obj, "Test");
		}
		else if (FArrayProperty* ArrayProp = CastField<FArrayProperty>(Property))
		{
			if (FObjectProperty* InnerObjProp = CastField<FObjectProperty>(ArrayProp->Inner))
			{
				FScriptArrayHelper Helper(ArrayProp, ArrayProp->ContainerPtrToValuePtr<void>(this));
				for (int32 i = 0; i < Helper.Num(); ++i)
				{
					UObject* Elem = *reinterpret_cast<UObject**>(Helper.GetRawPtr(i));
					if (!IsValid(Elem))
						continue;

					if (Ar.IsSaving())
						USSSerializationUtility::TrySerializeObjectInSaveGame(Elem, Elem->GetFName());
					else
						USSSerializationUtility::TryDeserializeObjectFromSaveGame(Elem, Elem->GetFName());
				}
			}
		}
	}
}