// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Base/Data/ItemsRegistry.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeItemsRegistry() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemDataBase_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemsRegistry();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemsRegistry_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UItemsRegistry ***********************************************************
void UItemsRegistry::StaticRegisterNativesUItemsRegistry()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UItemsRegistry;
UClass* UItemsRegistry::GetPrivateStaticClass()
{
	using TClass = UItemsRegistry;
	if (!Z_Registration_Info_UClass_UItemsRegistry.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ItemsRegistry"),
			Z_Registration_Info_UClass_UItemsRegistry.InnerSingleton,
			StaticRegisterNativesUItemsRegistry,
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
	return Z_Registration_Info_UClass_UItemsRegistry.InnerSingleton;
}
UClass* Z_Construct_UClass_UItemsRegistry_NoRegister()
{
	return UItemsRegistry::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UItemsRegistry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Base/Data/ItemsRegistry.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Base/Data/ItemsRegistry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredItems_MetaData[] = {
		{ "Category", "ItemsRegistry" },
		{ "ModuleRelativePath", "Public/Base/Data/ItemsRegistry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemsRegistry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemsRegistry_Statics::NewProp_RegisteredItems_Inner = { "RegisteredItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemDataBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UItemsRegistry_Statics::NewProp_RegisteredItems = { "RegisteredItems", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemsRegistry, RegisteredItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredItems_MetaData), NewProp_RegisteredItems_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemsRegistry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemsRegistry_Statics::NewProp_RegisteredItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemsRegistry_Statics::NewProp_RegisteredItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemsRegistry_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemsRegistry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemsRegistry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemsRegistry_Statics::ClassParams = {
	&UItemsRegistry::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UItemsRegistry_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemsRegistry_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemsRegistry_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemsRegistry_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemsRegistry()
{
	if (!Z_Registration_Info_UClass_UItemsRegistry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemsRegistry.OuterSingleton, Z_Construct_UClass_UItemsRegistry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemsRegistry.OuterSingleton;
}
UItemsRegistry::UItemsRegistry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemsRegistry);
UItemsRegistry::~UItemsRegistry() {}
// ********** End Class UItemsRegistry *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_ItemsRegistry_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemsRegistry, UItemsRegistry::StaticClass, TEXT("UItemsRegistry"), &Z_Registration_Info_UClass_UItemsRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemsRegistry), 3431733471U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_ItemsRegistry_h__Script_InventorySystem_3548647520(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_ItemsRegistry_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_ItemsRegistry_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
