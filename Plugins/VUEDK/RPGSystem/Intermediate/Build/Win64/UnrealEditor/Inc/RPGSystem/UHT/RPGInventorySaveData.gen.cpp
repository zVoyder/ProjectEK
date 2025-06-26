// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGInventory/Data/SaveData/RPGInventorySaveData.h"
#include "RPGInventory/Data/SaveData/RPGInventoryItemsSaveData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRPGInventorySaveData() {}

// ********** Begin Cross Module References ********************************************************
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoryBaseSaveData();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGInventorySaveData();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGInventorySaveData_NoRegister();
RPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FRPGInventoryItemsSaveData();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URPGInventorySaveData ****************************************************
void URPGInventorySaveData::StaticRegisterNativesURPGInventorySaveData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URPGInventorySaveData;
UClass* URPGInventorySaveData::GetPrivateStaticClass()
{
	using TClass = URPGInventorySaveData;
	if (!Z_Registration_Info_UClass_URPGInventorySaveData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RPGInventorySaveData"),
			Z_Registration_Info_UClass_URPGInventorySaveData.InnerSingleton,
			StaticRegisterNativesURPGInventorySaveData,
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
	return Z_Registration_Info_UClass_URPGInventorySaveData.InnerSingleton;
}
UClass* Z_Construct_UClass_URPGInventorySaveData_NoRegister()
{
	return URPGInventorySaveData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URPGInventorySaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RPGInventory/Data/SaveData/RPGInventorySaveData.h" },
		{ "ModuleRelativePath", "Public/RPGInventory/Data/SaveData/RPGInventorySaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RPGItemsSaveData_MetaData[] = {
		{ "Category", "RPGInventorySaveData" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/RPGInventory/Data/SaveData/RPGInventorySaveData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RPGItemsSaveData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGInventorySaveData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGInventorySaveData_Statics::NewProp_RPGItemsSaveData = { "RPGItemsSaveData", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGInventorySaveData, RPGItemsSaveData), Z_Construct_UScriptStruct_FRPGInventoryItemsSaveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RPGItemsSaveData_MetaData), NewProp_RPGItemsSaveData_MetaData) }; // 2322444893
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGInventorySaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGInventorySaveData_Statics::NewProp_RPGItemsSaveData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGInventorySaveData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URPGInventorySaveData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInventoryBaseSaveData,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGInventorySaveData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGInventorySaveData_Statics::ClassParams = {
	&URPGInventorySaveData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URPGInventorySaveData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URPGInventorySaveData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGInventorySaveData_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGInventorySaveData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URPGInventorySaveData()
{
	if (!Z_Registration_Info_UClass_URPGInventorySaveData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGInventorySaveData.OuterSingleton, Z_Construct_UClass_URPGInventorySaveData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGInventorySaveData.OuterSingleton;
}
URPGInventorySaveData::URPGInventorySaveData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URPGInventorySaveData);
URPGInventorySaveData::~URPGInventorySaveData() {}
// ********** End Class URPGInventorySaveData ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_RPGInventorySaveData_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGInventorySaveData, URPGInventorySaveData::StaticClass, TEXT("URPGInventorySaveData"), &Z_Registration_Info_UClass_URPGInventorySaveData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGInventorySaveData), 3828075073U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_RPGInventorySaveData_h__Script_RPGSystem_335451539(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_RPGInventorySaveData_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_RPGInventorySaveData_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
