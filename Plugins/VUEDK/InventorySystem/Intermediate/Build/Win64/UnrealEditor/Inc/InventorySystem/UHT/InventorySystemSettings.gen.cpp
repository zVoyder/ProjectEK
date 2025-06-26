// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystemSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInventorySystemSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UDropItemOperation_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventorySystemSettings();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventorySystemSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInventorySystemSettings *************************************************
void UInventorySystemSettings::StaticRegisterNativesUInventorySystemSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInventorySystemSettings;
UClass* UInventorySystemSettings::GetPrivateStaticClass()
{
	using TClass = UInventorySystemSettings;
	if (!Z_Registration_Info_UClass_UInventorySystemSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InventorySystemSettings"),
			Z_Registration_Info_UClass_UInventorySystemSettings.InnerSingleton,
			StaticRegisterNativesUInventorySystemSettings,
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
	return Z_Registration_Info_UClass_UInventorySystemSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UInventorySystemSettings_NoRegister()
{
	return UInventorySystemSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInventorySystemSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Inventory System Settings" },
		{ "IncludePath", "InventorySystemSettings.h" },
		{ "ModuleRelativePath", "Public/InventorySystemSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemsDropOperationClass_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/InventorySystemSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ItemsDropOperationClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventorySystemSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UInventorySystemSettings_Statics::NewProp_ItemsDropOperationClass = { "ItemsDropOperationClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySystemSettings, ItemsDropOperationClass), Z_Construct_UClass_UDropItemOperation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemsDropOperationClass_MetaData), NewProp_ItemsDropOperationClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventorySystemSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySystemSettings_Statics::NewProp_ItemsDropOperationClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySystemSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventorySystemSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySystemSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventorySystemSettings_Statics::ClassParams = {
	&UInventorySystemSettings::StaticClass,
	"InventorySystemSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInventorySystemSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySystemSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySystemSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventorySystemSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventorySystemSettings()
{
	if (!Z_Registration_Info_UClass_UInventorySystemSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventorySystemSettings.OuterSingleton, Z_Construct_UClass_UInventorySystemSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventorySystemSettings.OuterSingleton;
}
UInventorySystemSettings::UInventorySystemSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventorySystemSettings);
UInventorySystemSettings::~UInventorySystemSettings() {}
// ********** End Class UInventorySystemSettings ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_InventorySystemSettings_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventorySystemSettings, UInventorySystemSettings::StaticClass, TEXT("UInventorySystemSettings"), &Z_Registration_Info_UClass_UInventorySystemSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventorySystemSettings), 3173712775U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_InventorySystemSettings_h__Script_InventorySystem_4257080005(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_InventorySystemSettings_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_InventorySystemSettings_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
