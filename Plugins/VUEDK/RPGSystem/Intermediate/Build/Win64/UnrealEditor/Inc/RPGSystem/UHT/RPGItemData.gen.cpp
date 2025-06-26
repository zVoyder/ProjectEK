// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGInventory/Data/RPGItemData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRPGItemData() {}

// ********** Begin Cross Module References ********************************************************
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisItemData();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemData();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGRarityLevelData_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URPGItemData *************************************************************
void URPGItemData::StaticRegisterNativesURPGItemData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URPGItemData;
UClass* URPGItemData::GetPrivateStaticClass()
{
	using TClass = URPGItemData;
	if (!Z_Registration_Info_UClass_URPGItemData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RPGItemData"),
			Z_Registration_Info_UClass_URPGItemData.InnerSingleton,
			StaticRegisterNativesURPGItemData,
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
	return Z_Registration_Info_UClass_URPGItemData.InnerSingleton;
}
UClass* Z_Construct_UClass_URPGItemData_NoRegister()
{
	return URPGItemData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URPGItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RPGInventory/Data/RPGItemData.h" },
		{ "ModuleRelativePath", "Public/RPGInventory/Data/RPGItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRarity_MetaData[] = {
		{ "Category", "RPGItemData" },
		{ "ModuleRelativePath", "Public/RPGInventory/Data/RPGItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePredefinedRarity_MetaData[] = {
		{ "Category", "RPGItemData" },
		{ "EditCondition", "bUseRarity" },
		{ "ModuleRelativePath", "Public/RPGInventory/Data/RPGItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PredefinedRarityLevelData_MetaData[] = {
		{ "Category", "RPGItemData" },
		{ "EditCondition", "bUseRarity && bUsePredefinedRarity" },
		{ "ModuleRelativePath", "Public/RPGInventory/Data/RPGItemData.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseRarity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRarity;
	static void NewProp_bUsePredefinedRarity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePredefinedRarity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PredefinedRarityLevelData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGItemData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_URPGItemData_Statics::NewProp_bUseRarity_SetBit(void* Obj)
{
	((URPGItemData*)Obj)->bUseRarity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URPGItemData_Statics::NewProp_bUseRarity = { "bUseRarity", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URPGItemData), &Z_Construct_UClass_URPGItemData_Statics::NewProp_bUseRarity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRarity_MetaData), NewProp_bUseRarity_MetaData) };
void Z_Construct_UClass_URPGItemData_Statics::NewProp_bUsePredefinedRarity_SetBit(void* Obj)
{
	((URPGItemData*)Obj)->bUsePredefinedRarity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URPGItemData_Statics::NewProp_bUsePredefinedRarity = { "bUsePredefinedRarity", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URPGItemData), &Z_Construct_UClass_URPGItemData_Statics::NewProp_bUsePredefinedRarity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePredefinedRarity_MetaData), NewProp_bUsePredefinedRarity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URPGItemData_Statics::NewProp_PredefinedRarityLevelData = { "PredefinedRarityLevelData", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGItemData, PredefinedRarityLevelData), Z_Construct_UClass_URPGRarityLevelData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PredefinedRarityLevelData_MetaData), NewProp_PredefinedRarityLevelData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItemData_Statics::NewProp_bUseRarity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItemData_Statics::NewProp_bUsePredefinedRarity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItemData_Statics::NewProp_PredefinedRarityLevelData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URPGItemData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTetrisItemData,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGItemData_Statics::ClassParams = {
	&URPGItemData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URPGItemData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemData_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemData_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGItemData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URPGItemData()
{
	if (!Z_Registration_Info_UClass_URPGItemData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGItemData.OuterSingleton, Z_Construct_UClass_URPGItemData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGItemData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URPGItemData);
URPGItemData::~URPGItemData() {}
// ********** End Class URPGItemData ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_RPGItemData_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGItemData, URPGItemData::StaticClass, TEXT("URPGItemData"), &Z_Registration_Info_UClass_URPGItemData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGItemData), 3798932315U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_RPGItemData_h__Script_RPGSystem_997187027(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_RPGItemData_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_RPGItemData_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
