// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisInventory/Data/SaveData/TetrisInventorySaveData.h"
#include "TetrisInventory/Data/SaveData/TetrisItemsSaveArray.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTetrisInventorySaveData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoryBaseSaveData();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisInventorySaveData();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisInventorySaveData_NoRegister();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTetrisItemsSaveArray();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTetrisInventorySaveData *************************************************
void UTetrisInventorySaveData::StaticRegisterNativesUTetrisInventorySaveData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTetrisInventorySaveData;
UClass* UTetrisInventorySaveData::GetPrivateStaticClass()
{
	using TClass = UTetrisInventorySaveData;
	if (!Z_Registration_Info_UClass_UTetrisInventorySaveData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TetrisInventorySaveData"),
			Z_Registration_Info_UClass_UTetrisInventorySaveData.InnerSingleton,
			StaticRegisterNativesUTetrisInventorySaveData,
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
	return Z_Registration_Info_UClass_UTetrisInventorySaveData.InnerSingleton;
}
UClass* Z_Construct_UClass_UTetrisInventorySaveData_NoRegister()
{
	return UTetrisInventorySaveData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTetrisInventorySaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TetrisInventory/Data/SaveData/TetrisInventorySaveData.h" },
		{ "ModuleRelativePath", "Public/TetrisInventory/Data/SaveData/TetrisInventorySaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TetrisItems_MetaData[] = {
		{ "Category", "TetrisInventorySaveData" },
		{ "ModuleRelativePath", "Public/TetrisInventory/Data/SaveData/TetrisInventorySaveData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TetrisItems_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TetrisItems_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TetrisItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTetrisInventorySaveData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTetrisInventorySaveData_Statics::NewProp_TetrisItems_ValueProp = { "TetrisItems", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTetrisItemsSaveArray, METADATA_PARAMS(0, nullptr) }; // 2603913265
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTetrisInventorySaveData_Statics::NewProp_TetrisItems_Key_KeyProp = { "TetrisItems_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTetrisInventorySaveData_Statics::NewProp_TetrisItems = { "TetrisItems", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetrisInventorySaveData, TetrisItems), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetrisItems_MetaData), NewProp_TetrisItems_MetaData) }; // 2603913265
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTetrisInventorySaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrisInventorySaveData_Statics::NewProp_TetrisItems_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrisInventorySaveData_Statics::NewProp_TetrisItems_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrisInventorySaveData_Statics::NewProp_TetrisItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTetrisInventorySaveData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTetrisInventorySaveData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInventoryBaseSaveData,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTetrisInventorySaveData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTetrisInventorySaveData_Statics::ClassParams = {
	&UTetrisInventorySaveData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTetrisInventorySaveData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTetrisInventorySaveData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTetrisInventorySaveData_Statics::Class_MetaDataParams), Z_Construct_UClass_UTetrisInventorySaveData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTetrisInventorySaveData()
{
	if (!Z_Registration_Info_UClass_UTetrisInventorySaveData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTetrisInventorySaveData.OuterSingleton, Z_Construct_UClass_UTetrisInventorySaveData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTetrisInventorySaveData.OuterSingleton;
}
UTetrisInventorySaveData::UTetrisInventorySaveData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTetrisInventorySaveData);
UTetrisInventorySaveData::~UTetrisInventorySaveData() {}
// ********** End Class UTetrisInventorySaveData ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_Data_SaveData_TetrisInventorySaveData_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTetrisInventorySaveData, UTetrisInventorySaveData::StaticClass, TEXT("UTetrisInventorySaveData"), &Z_Registration_Info_UClass_UTetrisInventorySaveData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTetrisInventorySaveData), 3746258496U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_Data_SaveData_TetrisInventorySaveData_h__Script_InventorySystem_3717187399(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_Data_SaveData_TetrisInventorySaveData_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_Data_SaveData_TetrisInventorySaveData_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
