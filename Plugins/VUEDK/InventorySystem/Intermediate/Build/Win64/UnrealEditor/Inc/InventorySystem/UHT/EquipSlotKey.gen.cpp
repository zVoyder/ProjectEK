// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Data/EquipSlotKey.h"
#include "Styling/SlateBrush.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEquipSlotKey() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipSlotKey();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipSlotKey_NoRegister();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEquipSlotKey ************************************************************
void UEquipSlotKey::StaticRegisterNativesUEquipSlotKey()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEquipSlotKey;
UClass* UEquipSlotKey::GetPrivateStaticClass()
{
	using TClass = UEquipSlotKey;
	if (!Z_Registration_Info_UClass_UEquipSlotKey.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EquipSlotKey"),
			Z_Registration_Info_UClass_UEquipSlotKey.InnerSingleton,
			StaticRegisterNativesUEquipSlotKey,
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
	return Z_Registration_Info_UClass_UEquipSlotKey.InnerSingleton;
}
UClass* Z_Construct_UClass_UEquipSlotKey_NoRegister()
{
	return UEquipSlotKey::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEquipSlotKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EquipmentSystem/Data/EquipSlotKey.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/EquipmentSystem/Data/EquipSlotKey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipSlotKey_MetaData[] = {
		{ "Category", "EquipSlotKey" },
		{ "ModuleRelativePath", "Public/EquipmentSystem/Data/EquipSlotKey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipSlotName_MetaData[] = {
		{ "Category", "EquipSlotKey" },
		{ "ModuleRelativePath", "Public/EquipmentSystem/Data/EquipSlotKey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipSlotBrush_MetaData[] = {
		{ "Category", "EquipSlotKey" },
		{ "ModuleRelativePath", "Public/EquipmentSystem/Data/EquipSlotKey.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_EquipSlotKey;
	static const UECodeGen_Private::FTextPropertyParams NewProp_EquipSlotName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquipSlotBrush;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipSlotKey>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEquipSlotKey_Statics::NewProp_EquipSlotKey = { "EquipSlotKey", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipSlotKey, EquipSlotKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipSlotKey_MetaData), NewProp_EquipSlotKey_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEquipSlotKey_Statics::NewProp_EquipSlotName = { "EquipSlotName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipSlotKey, EquipSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipSlotName_MetaData), NewProp_EquipSlotName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipSlotKey_Statics::NewProp_EquipSlotBrush = { "EquipSlotBrush", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipSlotKey, EquipSlotBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipSlotBrush_MetaData), NewProp_EquipSlotBrush_MetaData) }; // 963227394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipSlotKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipSlotKey_Statics::NewProp_EquipSlotKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipSlotKey_Statics::NewProp_EquipSlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipSlotKey_Statics::NewProp_EquipSlotBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipSlotKey_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEquipSlotKey_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipSlotKey_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipSlotKey_Statics::ClassParams = {
	&UEquipSlotKey::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEquipSlotKey_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEquipSlotKey_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipSlotKey_Statics::Class_MetaDataParams), Z_Construct_UClass_UEquipSlotKey_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEquipSlotKey()
{
	if (!Z_Registration_Info_UClass_UEquipSlotKey.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipSlotKey.OuterSingleton, Z_Construct_UClass_UEquipSlotKey_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEquipSlotKey.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipSlotKey);
UEquipSlotKey::~UEquipSlotKey() {}
// ********** End Class UEquipSlotKey **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Data_EquipSlotKey_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEquipSlotKey, UEquipSlotKey::StaticClass, TEXT("UEquipSlotKey"), &Z_Registration_Info_UClass_UEquipSlotKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipSlotKey), 794105448U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Data_EquipSlotKey_h__Script_InventorySystem_1144566272(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Data_EquipSlotKey_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Data_EquipSlotKey_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
