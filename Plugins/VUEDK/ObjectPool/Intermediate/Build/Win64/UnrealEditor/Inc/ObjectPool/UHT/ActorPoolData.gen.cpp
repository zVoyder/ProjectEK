// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/ActorPoolData.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActorPoolData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
OBJECTPOOL_API UScriptStruct* Z_Construct_UScriptStruct_FActorPoolData();
UPackage* Z_Construct_UPackage__Script_ObjectPool();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FActorPoolData ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FActorPoolData;
class UScriptStruct* FActorPoolData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FActorPoolData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FActorPoolData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorPoolData, (UObject*)Z_Construct_UPackage__Script_ObjectPool(), TEXT("ActorPoolData"));
	}
	return Z_Registration_Info_UScriptStruct_FActorPoolData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FActorPoolData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/ActorPoolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolTag_MetaData[] = {
		{ "Category", "ActorPoolData" },
		{ "ModuleRelativePath", "Public/Data/ActorPoolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialSize_MetaData[] = {
		{ "Category", "ActorPoolData" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Data/ActorPoolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCapped_MetaData[] = {
		{ "Category", "ActorPoolData" },
		{ "ModuleRelativePath", "Public/Data/ActorPoolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSize_MetaData[] = {
		{ "Category", "ActorPoolData" },
		{ "ClampMin", "1" },
		{ "EditCondition", "bIsCapped" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/ActorPoolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "ActorPoolData" },
		{ "ModuleRelativePath", "Public/Data/ActorPoolData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoolTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialSize;
	static void NewProp_bIsCapped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCapped;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSize;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorPoolData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorPoolData_Statics::NewProp_PoolTag = { "PoolTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorPoolData, PoolTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolTag_MetaData), NewProp_PoolTag_MetaData) }; // 133831994
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActorPoolData_Statics::NewProp_InitialSize = { "InitialSize", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorPoolData, InitialSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialSize_MetaData), NewProp_InitialSize_MetaData) };
void Z_Construct_UScriptStruct_FActorPoolData_Statics::NewProp_bIsCapped_SetBit(void* Obj)
{
	((FActorPoolData*)Obj)->bIsCapped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorPoolData_Statics::NewProp_bIsCapped = { "bIsCapped", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FActorPoolData), &Z_Construct_UScriptStruct_FActorPoolData_Statics::NewProp_bIsCapped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCapped_MetaData), NewProp_bIsCapped_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActorPoolData_Statics::NewProp_MaxSize = { "MaxSize", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorPoolData, MaxSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSize_MetaData), NewProp_MaxSize_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FActorPoolData_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorPoolData, ActorClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorPoolData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPoolData_Statics::NewProp_PoolTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPoolData_Statics::NewProp_InitialSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPoolData_Statics::NewProp_bIsCapped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPoolData_Statics::NewProp_MaxSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPoolData_Statics::NewProp_ActorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPoolData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorPoolData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectPool,
	nullptr,
	&NewStructOps,
	"ActorPoolData",
	Z_Construct_UScriptStruct_FActorPoolData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPoolData_Statics::PropPointers),
	sizeof(FActorPoolData),
	alignof(FActorPoolData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPoolData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorPoolData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorPoolData()
{
	if (!Z_Registration_Info_UScriptStruct_FActorPoolData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FActorPoolData.InnerSingleton, Z_Construct_UScriptStruct_FActorPoolData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FActorPoolData.InnerSingleton;
}
// ********** End ScriptStruct FActorPoolData ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Data_ActorPoolData_h__Script_ObjectPool_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActorPoolData::StaticStruct, Z_Construct_UScriptStruct_FActorPoolData_Statics::NewStructOps, TEXT("ActorPoolData"), &Z_Registration_Info_UScriptStruct_FActorPoolData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorPoolData), 83406171U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Data_ActorPoolData_h__Script_ObjectPool_3746028710(TEXT("/Script/ObjectPool"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Data_ActorPoolData_h__Script_ObjectPool_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Data_ActorPoolData_h__Script_ObjectPool_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
