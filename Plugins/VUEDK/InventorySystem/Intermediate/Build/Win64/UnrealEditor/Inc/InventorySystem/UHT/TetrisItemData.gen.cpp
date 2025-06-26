// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisInventory/Data/TetrisItemData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTetrisItemData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemDataBase();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisItemData();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisItemData_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTetrisItemData **********************************************************
void UTetrisItemData::StaticRegisterNativesUTetrisItemData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTetrisItemData;
UClass* UTetrisItemData::GetPrivateStaticClass()
{
	using TClass = UTetrisItemData;
	if (!Z_Registration_Info_UClass_UTetrisItemData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TetrisItemData"),
			Z_Registration_Info_UClass_UTetrisItemData.InnerSingleton,
			StaticRegisterNativesUTetrisItemData,
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
	return Z_Registration_Info_UClass_UTetrisItemData.InnerSingleton;
}
UClass* Z_Construct_UClass_UTetrisItemData_NoRegister()
{
	return UTetrisItemData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTetrisItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TetrisInventory/Data/TetrisItemData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TetrisInventory/Data/TetrisItemData.h" },
		{ "NotBlueprintType", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "TetrisItemData" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/TetrisInventory/Data/TetrisItemData.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeRotated_MetaData[] = {
		{ "Category", "TetrisItemData" },
		{ "ModuleRelativePath", "Public/TetrisInventory/Data/TetrisItemData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static void NewProp_bCanBeRotated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeRotated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTetrisItemData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTetrisItemData_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTetrisItemData, Size), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
void Z_Construct_UClass_UTetrisItemData_Statics::NewProp_bCanBeRotated_SetBit(void* Obj)
{
	((UTetrisItemData*)Obj)->bCanBeRotated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTetrisItemData_Statics::NewProp_bCanBeRotated = { "bCanBeRotated", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTetrisItemData), &Z_Construct_UClass_UTetrisItemData_Statics::NewProp_bCanBeRotated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeRotated_MetaData), NewProp_bCanBeRotated_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTetrisItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrisItemData_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetrisItemData_Statics::NewProp_bCanBeRotated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTetrisItemData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTetrisItemData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UItemDataBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTetrisItemData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTetrisItemData_Statics::ClassParams = {
	&UTetrisItemData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTetrisItemData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTetrisItemData_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTetrisItemData_Statics::Class_MetaDataParams), Z_Construct_UClass_UTetrisItemData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTetrisItemData()
{
	if (!Z_Registration_Info_UClass_UTetrisItemData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTetrisItemData.OuterSingleton, Z_Construct_UClass_UTetrisItemData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTetrisItemData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTetrisItemData);
UTetrisItemData::~UTetrisItemData() {}
// ********** End Class UTetrisItemData ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_Data_TetrisItemData_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTetrisItemData, UTetrisItemData::StaticClass, TEXT("UTetrisItemData"), &Z_Registration_Info_UClass_UTetrisItemData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTetrisItemData), 2373660823U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_Data_TetrisItemData_h__Script_InventorySystem_2247900624(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_Data_TetrisItemData_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_Data_TetrisItemData_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
