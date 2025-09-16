// Copyright VUEDK, Inc. All Rights Reserved.

#include "Data/SaveData/SaveDataBase.h"

void USaveDataBase::SetSaveDataID(const FName NewID)
{
	SaveDataID = NewID;
}

FName USaveDataBase::GetSaveDataID() const
{
	const FName ClassName = GetClass()->GetFName();
	return FName(*FString::Printf(TEXT("%s_%s"), *ClassName.ToString(), *SaveDataID.ToString()));
}

void USaveDataBase::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);
	SerializeSaveGameMembers(Ar);
}

void USaveDataBase::SerializeSaveGameMembers(const FArchive& Ar)
{
	for (TFieldIterator<FProperty> PropIt(GetClass()); PropIt; ++PropIt)
	{
		FProperty* Property = *PropIt;

		if (!Property->HasAnyPropertyFlags(CPF_SaveGame))
			continue;

		if (const FObjectProperty* ObjProp = CastField<FObjectProperty>(Property))
			HandleObjectProperty(Ar, ObjProp);
		else if (const FArrayProperty* ArrayProp = CastField<FArrayProperty>(Property))
			HandleArrayProperty(Ar, ArrayProp);
		else if (const FMapProperty* MapProp = CastField<FMapProperty>(Property))
			HandleMapProperty(Ar, MapProp);
		else if (const FSetProperty* SetProp = CastField<FSetProperty>(Property))
			HandleSetProperty(Ar, SetProp);
	}
}

void USaveDataBase::HandleObjectProperty(const FArchive& Ar, const FObjectProperty* ObjProp) const
{
	UObject* Obj = ObjProp->GetObjectPropertyValue_InContainer(this);
	if (!IsValid(Obj))
		return;

	// Unique ID for the object property
	const FString ID = FString::Printf(TEXT("%s.%s"), *GetSaveDataID().ToString(), *ObjProp->GetName());

	if (Ar.IsSaving())
		USSSerializationUtility::TrySerializeObjectInSaveGame(Obj, FName(*ID));
	else
		USSSerializationUtility::TryDeserializeObjectFromSaveGame(Obj, FName(*ID));
}

void USaveDataBase::HandleArrayProperty(const FArchive& Ar, const FArrayProperty* ArrayProp)
{
	if (FObjectProperty* InnerObjProp = CastField<FObjectProperty>(ArrayProp->Inner))
	{
		FScriptArrayHelper Helper(ArrayProp, ArrayProp->ContainerPtrToValuePtr<void>(this));
		for (int32 i = 0; i < Helper.Num(); ++i)
		{
			UObject* Elem = *reinterpret_cast<UObject**>(Helper.GetRawPtr(i));
			if (!IsValid(Elem))
				continue;

			// Unique ID for the array element
			const FString ID = FString::Printf(TEXT("%s.%s[%d]"), *GetSaveDataID().ToString(), *ArrayProp->GetName(), i);

			if (Ar.IsSaving())
				USSSerializationUtility::TrySerializeObjectInSaveGame(Elem, FName(*ID));
			else
				USSSerializationUtility::TryDeserializeObjectFromSaveGame(Elem, FName(*ID));
		}
	}
}

void USaveDataBase::HandleMapProperty(const FArchive& Ar, const FMapProperty* MapProp)
{
	if (const FObjectProperty* ValueProp = CastField<FObjectProperty>(MapProp->ValueProp))
	{
		FScriptMapHelper Helper(MapProp, MapProp->ContainerPtrToValuePtr<void>(this));

		for (int32 i = 0; i < Helper.GetMaxIndex(); ++i)
		{
			if (!Helper.IsValidIndex(i))
				continue;

			const uint8* PairPtr = Helper.GetPairPtr(i);
			FString KeyString;
			MapProp->KeyProp->ExportTextItem_Direct(KeyString, PairPtr, nullptr, this, PPF_None);

			// Value pointer
			UObject* Value = ValueProp->GetObjectPropertyValue(PairPtr + MapProp->MapLayout.ValueOffset);
			if (!IsValid(Value))
				continue;

			const FString ID = FString::Printf(TEXT("%s.%s[%s]"),
				*GetSaveDataID().ToString(),
				*MapProp->GetName(),
				*KeyString);

			if (Ar.IsSaving())
				USSSerializationUtility::TrySerializeObjectInSaveGame(Value, FName(*ID));
			else
				USSSerializationUtility::TryDeserializeObjectFromSaveGame(Value, FName(*ID));
		}
	}
}

void USaveDataBase::HandleSetProperty(const FArchive& Ar, const FSetProperty* SetProp)
{
	if (const FObjectProperty* ElemProp = CastField<FObjectProperty>(SetProp->ElementProp))
	{
		FScriptSetHelper Helper(SetProp, SetProp->ContainerPtrToValuePtr<void>(this));
		int32 Counter = 0;

		for (int32 i = 0; i < Helper.GetMaxIndex(); ++i)
		{
			if (!Helper.IsValidIndex(i))
				continue;

			const uint8* ElementPtr = Helper.GetElementPtr(i);
			UObject* Elem = ElemProp->GetObjectPropertyValue(ElementPtr);
			if (!IsValid(Elem))
				continue;

			const FString ID = FString::Printf(TEXT("%s.%s[%d]"),
				*GetSaveDataID().ToString(),
				*SetProp->GetName(),
				Counter++);

			if (Ar.IsSaving())
				USSSerializationUtility::TrySerializeObjectInSaveGame(Elem, FName(*ID));
			else
				USSSerializationUtility::TryDeserializeObjectFromSaveGame(Elem, FName(*ID));
		}
	}
}
