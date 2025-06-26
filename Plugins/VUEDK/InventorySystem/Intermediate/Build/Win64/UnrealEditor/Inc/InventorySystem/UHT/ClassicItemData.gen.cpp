// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClassicInventory/Data/ClassicItemData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeClassicItemData() {}

// ********** Begin Cross Module References ********************************************************
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UClassicItemData();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UClassicItemData_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemDataBase();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UClassicItemData *********************************************************
void UClassicItemData::StaticRegisterNativesUClassicItemData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UClassicItemData;
UClass* UClassicItemData::GetPrivateStaticClass()
{
	using TClass = UClassicItemData;
	if (!Z_Registration_Info_UClass_UClassicItemData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ClassicItemData"),
			Z_Registration_Info_UClass_UClassicItemData.InnerSingleton,
			StaticRegisterNativesUClassicItemData,
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
	return Z_Registration_Info_UClass_UClassicItemData.InnerSingleton;
}
UClass* Z_Construct_UClass_UClassicItemData_NoRegister()
{
	return UClassicItemData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UClassicItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ClassicInventory/Data/ClassicItemData.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/ClassicInventory/Data/ClassicItemData.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClassicItemData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UClassicItemData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UItemDataBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClassicItemData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClassicItemData_Statics::ClassParams = {
	&UClassicItemData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClassicItemData_Statics::Class_MetaDataParams), Z_Construct_UClass_UClassicItemData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClassicItemData()
{
	if (!Z_Registration_Info_UClass_UClassicItemData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClassicItemData.OuterSingleton, Z_Construct_UClass_UClassicItemData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClassicItemData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClassicItemData);
UClassicItemData::~UClassicItemData() {}
// ********** End Class UClassicItemData ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_ClassicItemData_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UClassicItemData, UClassicItemData::StaticClass, TEXT("UClassicItemData"), &Z_Registration_Info_UClass_UClassicItemData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClassicItemData), 2073110691U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_ClassicItemData_h__Script_InventorySystem_1546828876(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_ClassicItemData_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_ClassicItemData_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
