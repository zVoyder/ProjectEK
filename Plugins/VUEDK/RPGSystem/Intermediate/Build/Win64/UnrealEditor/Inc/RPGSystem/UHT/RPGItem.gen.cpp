// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGInventory/Items/RPGItem.h"
#include "RPGItemsGeneration/Data/Visuals/RPGItemVisualDetails.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRPGItem() {}

// ********** Begin Cross Module References ********************************************************
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisItem();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItem();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItem_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGRarityLevelData_NoRegister();
RPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FRPGItemVisualDetails();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URPGItem Function GetRPGItemData *****************************************
struct Z_Construct_UFunction_URPGItem_GetRPGItemData_Statics
{
	struct RPGItem_eventGetRPGItemData_Parms
	{
		URPGItemData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RPGInventory/Items/RPGItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGItem_GetRPGItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGItem_eventGetRPGItemData_Parms, ReturnValue), Z_Construct_UClass_URPGItemData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGItem_GetRPGItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGItem_GetRPGItemData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGItem_GetRPGItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGItem_GetRPGItemData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGItem, nullptr, "GetRPGItemData", Z_Construct_UFunction_URPGItem_GetRPGItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGItem_GetRPGItemData_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGItem_GetRPGItemData_Statics::RPGItem_eventGetRPGItemData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGItem_GetRPGItemData_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGItem_GetRPGItemData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGItem_GetRPGItemData_Statics::RPGItem_eventGetRPGItemData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGItem_GetRPGItemData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGItem_GetRPGItemData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGItem::execGetRPGItemData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URPGItemData**)Z_Param__Result=P_THIS->GetRPGItemData();
	P_NATIVE_END;
}
// ********** End Class URPGItem Function GetRPGItemData *******************************************

// ********** Begin Class URPGItem Function OnPostGeneration ***************************************
static FName NAME_URPGItem_OnPostGeneration = FName(TEXT("OnPostGeneration"));
void URPGItem::OnPostGeneration()
{
	UFunction* Func = FindFunctionChecked(NAME_URPGItem_OnPostGeneration);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_URPGItem_OnPostGeneration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RPGInventory/Items/RPGItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGItem_OnPostGeneration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGItem, nullptr, "OnPostGeneration", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGItem_OnPostGeneration_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGItem_OnPostGeneration_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_URPGItem_OnPostGeneration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGItem_OnPostGeneration_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class URPGItem Function OnPostGeneration *****************************************

// ********** Begin Class URPGItem *****************************************************************
void URPGItem::StaticRegisterNativesURPGItem()
{
	UClass* Class = URPGItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRPGItemData", &URPGItem::execGetRPGItemData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URPGItem;
UClass* URPGItem::GetPrivateStaticClass()
{
	using TClass = URPGItem;
	if (!Z_Registration_Info_UClass_URPGItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RPGItem"),
			Z_Registration_Info_UClass_URPGItem.InnerSingleton,
			StaticRegisterNativesURPGItem,
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
	return Z_Registration_Info_UClass_URPGItem.InnerSingleton;
}
UClass* Z_Construct_UClass_URPGItem_NoRegister()
{
	return URPGItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URPGItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RPGInventory/Items/RPGItem.h" },
		{ "ModuleRelativePath", "Public/RPGInventory/Items/RPGItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RarityLevel_MetaData[] = {
		{ "Category", "RPGItem" },
		{ "ModuleRelativePath", "Public/RPGInventory/Items/RPGItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisualDetails_MetaData[] = {
		{ "Category", "RPGItem" },
		{ "ModuleRelativePath", "Public/RPGInventory/Items/RPGItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RarityLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VisualDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGItem_GetRPGItemData, "GetRPGItemData" }, // 1435377019
		{ &Z_Construct_UFunction_URPGItem_OnPostGeneration, "OnPostGeneration" }, // 2346579097
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URPGItem_Statics::NewProp_RarityLevel = { "RarityLevel", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGItem, RarityLevel), Z_Construct_UClass_URPGRarityLevelData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RarityLevel_MetaData), NewProp_RarityLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGItem_Statics::NewProp_VisualDetails = { "VisualDetails", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGItem, VisualDetails), Z_Construct_UScriptStruct_FRPGItemVisualDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisualDetails_MetaData), NewProp_VisualDetails_MetaData) }; // 191893739
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItem_Statics::NewProp_RarityLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItem_Statics::NewProp_VisualDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URPGItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTetrisItem,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGItem_Statics::ClassParams = {
	&URPGItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URPGItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URPGItem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGItem_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URPGItem()
{
	if (!Z_Registration_Info_UClass_URPGItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGItem.OuterSingleton, Z_Construct_UClass_URPGItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGItem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URPGItem);
URPGItem::~URPGItem() {}
// ********** End Class URPGItem *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Items_RPGItem_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGItem, URPGItem::StaticClass, TEXT("URPGItem"), &Z_Registration_Info_UClass_URPGItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGItem), 4194921215U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Items_RPGItem_h__Script_RPGSystem_2227187450(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Items_RPGItem_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Items_RPGItem_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
