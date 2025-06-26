// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClassicInventory/Data/SaveData/ClassicInventorySaveData.h"
#include "ClassicInventory/Data/SaveData/ClassicItemSaveData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeClassicInventorySaveData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UClassicInventorySaveData();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UClassicInventorySaveData_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoryBaseSaveData();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FClassicItemSaveData();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UClassicInventorySaveData ************************************************
void UClassicInventorySaveData::StaticRegisterNativesUClassicInventorySaveData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UClassicInventorySaveData;
UClass* UClassicInventorySaveData::GetPrivateStaticClass()
{
	using TClass = UClassicInventorySaveData;
	if (!Z_Registration_Info_UClass_UClassicInventorySaveData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ClassicInventorySaveData"),
			Z_Registration_Info_UClass_UClassicInventorySaveData.InnerSingleton,
			StaticRegisterNativesUClassicInventorySaveData,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UClassicInventorySaveData.InnerSingleton;
}
UClass* Z_Construct_UClass_UClassicInventorySaveData_NoRegister()
{
	return UClassicInventorySaveData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UClassicInventorySaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ClassicInventory/Data/SaveData/ClassicInventorySaveData.h" },
		{ "ModuleRelativePath", "Public/ClassicInventory/Data/SaveData/ClassicInventorySaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedItems_MetaData[] = {
		{ "Category", "ClassicInventorySaveData" },
		{ "ModuleRelativePath", "Public/ClassicInventory/Data/SaveData/ClassicInventorySaveData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedItems_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedItems_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SavedItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClassicInventorySaveData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClassicInventorySaveData_Statics::NewProp_SavedItems_ValueProp = { "SavedItems", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FClassicItemSaveData, METADATA_PARAMS(0, nullptr) }; // 90916714
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClassicInventorySaveData_Statics::NewProp_SavedItems_Key_KeyProp = { "SavedItems_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UClassicInventorySaveData_Statics::NewProp_SavedItems = { "SavedItems", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClassicInventorySaveData, SavedItems), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedItems_MetaData), NewProp_SavedItems_MetaData) }; // 90916714
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClassicInventorySaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassicInventorySaveData_Statics::NewProp_SavedItems_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassicInventorySaveData_Statics::NewProp_SavedItems_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassicInventorySaveData_Statics::NewProp_SavedItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClassicInventorySaveData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UClassicInventorySaveData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInventoryBaseSaveData,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClassicInventorySaveData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClassicInventorySaveData_Statics::ClassParams = {
	&UClassicInventorySaveData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UClassicInventorySaveData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UClassicInventorySaveData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClassicInventorySaveData_Statics::Class_MetaDataParams), Z_Construct_UClass_UClassicInventorySaveData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClassicInventorySaveData()
{
	if (!Z_Registration_Info_UClass_UClassicInventorySaveData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClassicInventorySaveData.OuterSingleton, Z_Construct_UClass_UClassicInventorySaveData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClassicInventorySaveData.OuterSingleton;
}
UClassicInventorySaveData::UClassicInventorySaveData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClassicInventorySaveData);
UClassicInventorySaveData::~UClassicInventorySaveData() {}
// ********** End Class UClassicInventorySaveData **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_SaveData_ClassicInventorySaveData_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UClassicInventorySaveData, UClassicInventorySaveData::StaticClass, TEXT("UClassicInventorySaveData"), &Z_Registration_Info_UClass_UClassicInventorySaveData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClassicInventorySaveData), 3312442929U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_SaveData_ClassicInventorySaveData_h__Script_InventorySystem_4275895479(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_SaveData_ClassicInventorySaveData_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_SaveData_ClassicInventorySaveData_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
