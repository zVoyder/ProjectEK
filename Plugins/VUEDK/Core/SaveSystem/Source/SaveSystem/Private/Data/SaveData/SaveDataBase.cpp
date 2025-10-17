// Copyright VUEDK, Inc. All Rights Reserved.

#include "Data/SaveData/SaveDataBase.h"
#include "UObject/Object.h"
#include "UObject/Class.h"

bool USaveDataBase::SaveObjectDataNative(UObject* ObjectToSave)
{
	return SaveObjectData(ObjectToSave);
}

bool USaveDataBase::LoadObjectDataNative(UObject* ObjectToLoad)
{
	return LoadObjectData(ObjectToLoad);
}

void USaveDataBase::SetSaveDataID(const FName NewID)
{
	SaveDataID = NewID;
}

FName USaveDataBase::GetSaveDataID() const
{
	const FName ClassName = GetClass()->GetFName();
	return FName(*FString::Printf(TEXT("%s_%s"), *ClassName.ToString(), *SaveDataID.ToString()));
}

bool USaveDataBase::SaveObjectData_Implementation(UObject* ObjectToSave)
{
	return true;
}

bool USaveDataBase::LoadObjectData_Implementation(UObject* ObjectToLoad)
{
	return true;
}

void USaveDataBase::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);
	SerializeSaveGameMembers(Ar);
}

void USaveDataBase::SerializeSaveGameMembers(FArchive& Ar)
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

void USaveDataBase::HandleObjectProperty(FArchive& Ar, const FObjectProperty* ObjProp)
{
	UObject* Obj = ObjProp->GetObjectPropertyValue_InContainer(this);

	if (Ar.IsSaving())
	{
		if (!IsValid(Obj))
			return;

		const FString ID = FString::Printf(TEXT("%s.%s"), *GetSaveDataID().ToString(), *ObjProp->GetName());
		USSSerializationUtility::TrySerializeObjectInSaveGame(Obj, FName(*ID));
	}
	else if (Ar.IsLoading())
	{
		if (!IsValid(Obj))
		{
			Obj = NewObject<UObject>(this, ObjProp->PropertyClass);
			ObjProp->SetObjectPropertyValue_InContainer(this, Obj);
		}

		const FString ID = FString::Printf(TEXT("%s.%s"), *GetSaveDataID().ToString(), *ObjProp->GetName());
		USSSerializationUtility::TryDeserializeObjectFromSaveGame(Obj, FName(*ID));
	}
}

void USaveDataBase::HandleArrayProperty(FArchive& Ar, const FArrayProperty* ArrayProp)
{
	if (const FObjectProperty* InnerObjProp = CastField<FObjectProperty>(ArrayProp->Inner))
	{
		FScriptArrayHelper Helper(ArrayProp, ArrayProp->ContainerPtrToValuePtr<void>(this));

		if (Ar.IsSaving())
		{
			int32 Count = Helper.Num();
			Ar << Count;

			for (int32 i = 0; i < Count; ++i)
			{
				UObject* Elem = *reinterpret_cast<UObject**>(Helper.GetRawPtr(i));
				if (!IsValid(Elem))
				{
					FString DummyClassName;
					Ar << DummyClassName;
					continue;
				}

				FString ClassName = Elem->GetClass()->GetPathName();
				Ar << ClassName;
			}
		}
		else if (Ar.IsLoading())
		{
			int32 SavedCount = 0;
			Ar << SavedCount;

			Helper.Resize(SavedCount);
			for (int32 i = 0; i < SavedCount; ++i)
			{
				FString ClassName;
				Ar << ClassName;

				if (!ClassName.IsEmpty())
				{
					UClass* LoadedClass = LoadObject<UClass>(nullptr, *ClassName);
					if (!LoadedClass)
						LoadedClass = InnerObjProp->PropertyClass; // fallback

					UObject* Elem = NewObject<UObject>(this, LoadedClass);
					InnerObjProp->SetObjectPropertyValue(Helper.GetRawPtr(i), Elem);
				}
			}
		}

		for (int32 i = 0; i < Helper.Num(); ++i)
		{
			UObject* Elem = *reinterpret_cast<UObject**>(Helper.GetRawPtr(i));
			if (!IsValid(Elem))
				continue;

			const FString ID = FString::Printf(TEXT("%s.%s[%d]"),
			                                   *GetSaveDataID().ToString(),
			                                   *ArrayProp->GetName(),
			                                   i);

			if (Ar.IsSaving())
				USSSerializationUtility::TrySerializeObjectInSaveGame(Elem, FName(*ID));
			else
				USSSerializationUtility::TryDeserializeObjectFromSaveGame(Elem, FName(*ID));
		}
	}
}

void USaveDataBase::HandleMapProperty(FArchive& Ar, const FMapProperty* MapProp)
{
	if (const FObjectProperty* ValueProp = CastField<FObjectProperty>(MapProp->ValueProp))
	{
		FScriptMapHelper Helper(MapProp, MapProp->ContainerPtrToValuePtr<void>(this));

		if (Ar.IsSaving())
		{
			int32 Count = Helper.Num();
			Ar << Count;

			for (int32 i = 0; i < Helper.GetMaxIndex(); ++i)
			{
				if (!Helper.IsValidIndex(i))
					continue;

				const uint8* PairPtr = Helper.GetPairPtr(i);
				UObject* Value = ValueProp->GetObjectPropertyValue(PairPtr + MapProp->MapLayout.ValueOffset);
				if (!IsValid(Value))
					continue;

				FString KeyString;
				MapProp->KeyProp->ExportTextItem_Direct(KeyString, PairPtr, nullptr, this, PPF_None);

				const FString ID = FString::Printf(TEXT("%s.%s[%s]"),
				                                   *GetSaveDataID().ToString(),
				                                   *MapProp->GetName(),
				                                   *KeyString);

				USSSerializationUtility::TrySerializeObjectInSaveGame(Value, FName(*ID));
			}
		}
		else if (Ar.IsLoading())
		{
			int32 SavedCount = 0;
			Ar << SavedCount;

			for (int32 i = 0; i < Helper.GetMaxIndex() && i < SavedCount; ++i)
			{
				if (!Helper.IsValidIndex(i))
					continue;

				uint8* PairPtr = Helper.GetPairPtr(i);
				UObject* Value = ValueProp->GetObjectPropertyValue(PairPtr + MapProp->MapLayout.ValueOffset);
				if (!IsValid(Value))
				{
					Value = NewObject<UObject>(this, ValueProp->PropertyClass);
					ValueProp->SetObjectPropertyValue(PairPtr + MapProp->MapLayout.ValueOffset, Value);
				}
			}

			for (int32 i = 0; i < Helper.GetMaxIndex() && i < SavedCount; ++i)
			{
				if (!Helper.IsValidIndex(i))
					continue;

				const uint8* PairPtr = Helper.GetPairPtr(i);
				UObject* Value = ValueProp->GetObjectPropertyValue(PairPtr + MapProp->MapLayout.ValueOffset);
				if (!IsValid(Value))
					continue;

				FString KeyString;
				MapProp->KeyProp->ExportTextItem_Direct(KeyString, PairPtr, nullptr, this, PPF_None);

				const FString ID = FString::Printf(TEXT("%s.%s[%s]"),
				                                   *GetSaveDataID().ToString(),
				                                   *MapProp->GetName(),
				                                   *KeyString);

				USSSerializationUtility::TryDeserializeObjectFromSaveGame(Value, FName(*ID));
			}
		}
	}
}

void USaveDataBase::HandleSetProperty(FArchive& Ar, const FSetProperty* SetProp)
{
	if (const FObjectProperty* ElemProp = CastField<FObjectProperty>(SetProp->ElementProp))
	{
		FScriptSetHelper Helper(SetProp, SetProp->ContainerPtrToValuePtr<void>(this));

		if (Ar.IsSaving())
		{
			int32 Count = Helper.Num();
			Ar << Count;

			for (int32 i = 0; i < Helper.GetMaxIndex(); ++i)
			{
				if (!Helper.IsValidIndex(i))
					continue;

				const uint8* ElementPtr = Helper.GetElementPtr(i);
				UObject* Elem = ElemProp->GetObjectPropertyValue(ElementPtr);

				if (!IsValid(Elem))
				{
					FString DummyClassName;
					Ar << DummyClassName;
					continue;
				}

				FString ClassName = Elem->GetClass()->GetPathName();
				Ar << ClassName;
			}
		}
		else if (Ar.IsLoading())
		{
			int32 SavedCount = 0;
			Ar << SavedCount;

			Helper.EmptyElements(SavedCount);

			for (int32 i = 0; i < SavedCount; ++i)
			{
				FString ClassName;
				Ar << ClassName;

				const int32 NewIndex = Helper.AddDefaultValue_Invalid_NeedsRehash();
				uint8* ElementPtr = Helper.GetElementPtr(NewIndex);

				const UClass* LoadedClass = !ClassName.IsEmpty()
					                            ? LoadObject<UClass>(nullptr, *ClassName)
					                            : nullptr;

				if (!LoadedClass)
					LoadedClass = ElemProp->PropertyClass;

				UObject* NewElem = NewObject<UObject>(this, LoadedClass);
				ElemProp->SetObjectPropertyValue(ElementPtr, NewElem);
			}
		}

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
