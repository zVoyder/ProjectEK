// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGInventory/RPGInventoriesManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRPGInventoriesManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisInventoriesManager();
RPGSYSTEM_API UClass* Z_Construct_UClass_UCoreStatData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_UItemsStatsData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGInventoriesManager();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGInventoriesManager_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemsRaritiesData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGRarityLevelData_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URPGInventoriesManager Function GetItemRarityByID ************************
struct Z_Construct_UFunction_URPGInventoriesManager_GetItemRarityByID_Statics
{
	struct RPGInventoriesManager_eventGetItemRarityByID_Parms
	{
		FGuid RarityID;
		URPGRarityLevelData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RPGInventory/RPGInventoriesManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RarityID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RarityID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGInventoriesManager_GetItemRarityByID_Statics::NewProp_RarityID = { "RarityID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInventoriesManager_eventGetItemRarityByID_Parms, RarityID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RarityID_MetaData), NewProp_RarityID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGInventoriesManager_GetItemRarityByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInventoriesManager_eventGetItemRarityByID_Parms, ReturnValue), Z_Construct_UClass_URPGRarityLevelData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoriesManager_GetItemRarityByID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoriesManager_GetItemRarityByID_Statics::NewProp_RarityID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoriesManager_GetItemRarityByID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesManager_GetItemRarityByID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoriesManager_GetItemRarityByID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGInventoriesManager, nullptr, "GetItemRarityByID", Z_Construct_UFunction_URPGInventoriesManager_GetItemRarityByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesManager_GetItemRarityByID_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGInventoriesManager_GetItemRarityByID_Statics::RPGInventoriesManager_eventGetItemRarityByID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesManager_GetItemRarityByID_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGInventoriesManager_GetItemRarityByID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGInventoriesManager_GetItemRarityByID_Statics::RPGInventoriesManager_eventGetItemRarityByID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGInventoriesManager_GetItemRarityByID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGInventoriesManager_GetItemRarityByID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGInventoriesManager::execGetItemRarityByID)
{
	P_GET_STRUCT(FGuid,Z_Param_RarityID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URPGRarityLevelData**)Z_Param__Result=P_THIS->GetItemRarityByID(Z_Param_RarityID);
	P_NATIVE_END;
}
// ********** End Class URPGInventoriesManager Function GetItemRarityByID **************************

// ********** Begin Class URPGInventoriesManager Function GetItemStatByID **************************
struct Z_Construct_UFunction_URPGInventoriesManager_GetItemStatByID_Statics
{
	struct RPGInventoriesManager_eventGetItemStatByID_Parms
	{
		FGuid StatID;
		UCoreStatData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RPGInventory/RPGInventoriesManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGInventoriesManager_GetItemStatByID_Statics::NewProp_StatID = { "StatID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInventoriesManager_eventGetItemStatByID_Parms, StatID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatID_MetaData), NewProp_StatID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGInventoriesManager_GetItemStatByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInventoriesManager_eventGetItemStatByID_Parms, ReturnValue), Z_Construct_UClass_UCoreStatData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoriesManager_GetItemStatByID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoriesManager_GetItemStatByID_Statics::NewProp_StatID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoriesManager_GetItemStatByID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesManager_GetItemStatByID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoriesManager_GetItemStatByID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGInventoriesManager, nullptr, "GetItemStatByID", Z_Construct_UFunction_URPGInventoriesManager_GetItemStatByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesManager_GetItemStatByID_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGInventoriesManager_GetItemStatByID_Statics::RPGInventoriesManager_eventGetItemStatByID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoriesManager_GetItemStatByID_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGInventoriesManager_GetItemStatByID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGInventoriesManager_GetItemStatByID_Statics::RPGInventoriesManager_eventGetItemStatByID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGInventoriesManager_GetItemStatByID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGInventoriesManager_GetItemStatByID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGInventoriesManager::execGetItemStatByID)
{
	P_GET_STRUCT(FGuid,Z_Param_StatID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCoreStatData**)Z_Param__Result=P_THIS->GetItemStatByID(Z_Param_StatID);
	P_NATIVE_END;
}
// ********** End Class URPGInventoriesManager Function GetItemStatByID ****************************

// ********** Begin Class URPGInventoriesManager ***************************************************
void URPGInventoriesManager::StaticRegisterNativesURPGInventoriesManager()
{
	UClass* Class = URPGInventoriesManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetItemRarityByID", &URPGInventoriesManager::execGetItemRarityByID },
		{ "GetItemStatByID", &URPGInventoriesManager::execGetItemStatByID },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URPGInventoriesManager;
UClass* URPGInventoriesManager::GetPrivateStaticClass()
{
	using TClass = URPGInventoriesManager;
	if (!Z_Registration_Info_UClass_URPGInventoriesManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RPGInventoriesManager"),
			Z_Registration_Info_UClass_URPGInventoriesManager.InnerSingleton,
			StaticRegisterNativesURPGInventoriesManager,
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
	return Z_Registration_Info_UClass_URPGInventoriesManager.InnerSingleton;
}
UClass* Z_Construct_UClass_URPGInventoriesManager_NoRegister()
{
	return URPGInventoriesManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URPGInventoriesManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RPGInventory/RPGInventoriesManager.h" },
		{ "ModuleRelativePath", "Public/RPGInventory/RPGInventoriesManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemsStats_MetaData[] = {
		{ "Category", "RPGInventoriesManager" },
		{ "ModuleRelativePath", "Public/RPGInventory/RPGInventoriesManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemsRarities_MetaData[] = {
		{ "Category", "RPGInventoriesManager" },
		{ "ModuleRelativePath", "Public/RPGInventory/RPGInventoriesManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemsStats;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemsRarities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGInventoriesManager_GetItemRarityByID, "GetItemRarityByID" }, // 2229228524
		{ &Z_Construct_UFunction_URPGInventoriesManager_GetItemStatByID, "GetItemStatByID" }, // 3586929916
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGInventoriesManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URPGInventoriesManager_Statics::NewProp_ItemsStats = { "ItemsStats", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGInventoriesManager, ItemsStats), Z_Construct_UClass_UItemsStatsData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemsStats_MetaData), NewProp_ItemsStats_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URPGInventoriesManager_Statics::NewProp_ItemsRarities = { "ItemsRarities", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGInventoriesManager, ItemsRarities), Z_Construct_UClass_URPGItemsRaritiesData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemsRarities_MetaData), NewProp_ItemsRarities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGInventoriesManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGInventoriesManager_Statics::NewProp_ItemsStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGInventoriesManager_Statics::NewProp_ItemsRarities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGInventoriesManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URPGInventoriesManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTetrisInventoriesManager,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGInventoriesManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGInventoriesManager_Statics::ClassParams = {
	&URPGInventoriesManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URPGInventoriesManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URPGInventoriesManager_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGInventoriesManager_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGInventoriesManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URPGInventoriesManager()
{
	if (!Z_Registration_Info_UClass_URPGInventoriesManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGInventoriesManager.OuterSingleton, Z_Construct_UClass_URPGInventoriesManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGInventoriesManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URPGInventoriesManager);
URPGInventoriesManager::~URPGInventoriesManager() {}
// ********** End Class URPGInventoriesManager *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventoriesManager_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGInventoriesManager, URPGInventoriesManager::StaticClass, TEXT("URPGInventoriesManager"), &Z_Registration_Info_UClass_URPGInventoriesManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGInventoriesManager), 76613166U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventoriesManager_h__Script_RPGSystem_144684398(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventoriesManager_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventoriesManager_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
