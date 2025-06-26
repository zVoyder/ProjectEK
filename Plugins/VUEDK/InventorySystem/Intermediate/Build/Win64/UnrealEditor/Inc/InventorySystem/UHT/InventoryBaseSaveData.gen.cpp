// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Base/Data/SaveData/InventoryBaseSaveData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInventoryBaseSaveData() {}

// ********** Begin Cross Module References ********************************************************
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoryBaseSaveData();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoryBaseSaveData_NoRegister();
SAVESYSTEM_API UClass* Z_Construct_UClass_USaveData();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInventoryBaseSaveData ***************************************************
void UInventoryBaseSaveData::StaticRegisterNativesUInventoryBaseSaveData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInventoryBaseSaveData;
UClass* UInventoryBaseSaveData::GetPrivateStaticClass()
{
	using TClass = UInventoryBaseSaveData;
	if (!Z_Registration_Info_UClass_UInventoryBaseSaveData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InventoryBaseSaveData"),
			Z_Registration_Info_UClass_UInventoryBaseSaveData.InnerSingleton,
			StaticRegisterNativesUInventoryBaseSaveData,
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
	return Z_Registration_Info_UClass_UInventoryBaseSaveData.InnerSingleton;
}
UClass* Z_Construct_UClass_UInventoryBaseSaveData_NoRegister()
{
	return UInventoryBaseSaveData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInventoryBaseSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Base/Data/SaveData/InventoryBaseSaveData.h" },
		{ "ModuleRelativePath", "Public/Base/Data/SaveData/InventoryBaseSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWeight_MetaData[] = {
		{ "Category", "InventoryBaseSaveData" },
		{ "ModuleRelativePath", "Public/Base/Data/SaveData/InventoryBaseSaveData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxWeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryBaseSaveData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UInventoryBaseSaveData_Statics::NewProp_MaxWeight = { "MaxWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryBaseSaveData, MaxWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWeight_MetaData), NewProp_MaxWeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryBaseSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryBaseSaveData_Statics::NewProp_MaxWeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryBaseSaveData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryBaseSaveData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveData,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryBaseSaveData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryBaseSaveData_Statics::ClassParams = {
	&UInventoryBaseSaveData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInventoryBaseSaveData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryBaseSaveData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryBaseSaveData_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryBaseSaveData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryBaseSaveData()
{
	if (!Z_Registration_Info_UClass_UInventoryBaseSaveData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryBaseSaveData.OuterSingleton, Z_Construct_UClass_UInventoryBaseSaveData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryBaseSaveData.OuterSingleton;
}
UInventoryBaseSaveData::UInventoryBaseSaveData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryBaseSaveData);
UInventoryBaseSaveData::~UInventoryBaseSaveData() {}
// ********** End Class UInventoryBaseSaveData *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_SaveData_InventoryBaseSaveData_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryBaseSaveData, UInventoryBaseSaveData::StaticClass, TEXT("UInventoryBaseSaveData"), &Z_Registration_Info_UClass_UInventoryBaseSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryBaseSaveData), 3026617755U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_SaveData_InventoryBaseSaveData_h__Script_InventorySystem_1731714402(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_SaveData_InventoryBaseSaveData_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_SaveData_InventoryBaseSaveData_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
