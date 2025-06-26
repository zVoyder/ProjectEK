// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utility/SSSlotsUtility.h"
#include "Data/Structs/SlotInfoData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSSSlotsUtility() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SAVESYSTEM_API UClass* Z_Construct_UClass_USSSlotsUtility();
SAVESYSTEM_API UClass* Z_Construct_UClass_USSSlotsUtility_NoRegister();
SAVESYSTEM_API UEnum* Z_Construct_UEnum_SaveSystem_ESaveTypeFilter();
SAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSlotInfoData();
UPackage* Z_Construct_UPackage__Script_SaveSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USSSlotsUtility Function ClearSelectedSlotName ***************************
struct Z_Construct_UFunction_USSSlotsUtility_ClearSelectedSlotName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSSlotsUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSSlotsUtility_ClearSelectedSlotName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSSlotsUtility, nullptr, "ClearSelectedSlotName", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_ClearSelectedSlotName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSSlotsUtility_ClearSelectedSlotName_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USSSlotsUtility_ClearSelectedSlotName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSSlotsUtility_ClearSelectedSlotName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSSlotsUtility::execClearSelectedSlotName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USSSlotsUtility::ClearSelectedSlotName();
	P_NATIVE_END;
}
// ********** End Class USSSlotsUtility Function ClearSelectedSlotName *****************************

// ********** Begin Class USSSlotsUtility Function DoesAnySlotFileExist ****************************
struct Z_Construct_UFunction_USSSlotsUtility_DoesAnySlotFileExist_Statics
{
	struct SSSlotsUtility_eventDoesAnySlotFileExist_Parms
	{
		bool bExcludeSharedSlot;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "CPP_Default_bExcludeSharedSlot", "true" },
		{ "ModuleRelativePath", "Public/Utility/SSSlotsUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExcludeSharedSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bExcludeSharedSlot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExcludeSharedSlot;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USSSlotsUtility_DoesAnySlotFileExist_Statics::NewProp_bExcludeSharedSlot_SetBit(void* Obj)
{
	((SSSlotsUtility_eventDoesAnySlotFileExist_Parms*)Obj)->bExcludeSharedSlot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSSlotsUtility_DoesAnySlotFileExist_Statics::NewProp_bExcludeSharedSlot = { "bExcludeSharedSlot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSSlotsUtility_eventDoesAnySlotFileExist_Parms), &Z_Construct_UFunction_USSSlotsUtility_DoesAnySlotFileExist_Statics::NewProp_bExcludeSharedSlot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExcludeSharedSlot_MetaData), NewProp_bExcludeSharedSlot_MetaData) };
void Z_Construct_UFunction_USSSlotsUtility_DoesAnySlotFileExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SSSlotsUtility_eventDoesAnySlotFileExist_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSSlotsUtility_DoesAnySlotFileExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSSlotsUtility_eventDoesAnySlotFileExist_Parms), &Z_Construct_UFunction_USSSlotsUtility_DoesAnySlotFileExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSSlotsUtility_DoesAnySlotFileExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_DoesAnySlotFileExist_Statics::NewProp_bExcludeSharedSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_DoesAnySlotFileExist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_DoesAnySlotFileExist_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSSlotsUtility_DoesAnySlotFileExist_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSSlotsUtility, nullptr, "DoesAnySlotFileExist", Z_Construct_UFunction_USSSlotsUtility_DoesAnySlotFileExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_DoesAnySlotFileExist_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSSlotsUtility_DoesAnySlotFileExist_Statics::SSSlotsUtility_eventDoesAnySlotFileExist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_DoesAnySlotFileExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSSlotsUtility_DoesAnySlotFileExist_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSSlotsUtility_DoesAnySlotFileExist_Statics::SSSlotsUtility_eventDoesAnySlotFileExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSSlotsUtility_DoesAnySlotFileExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSSlotsUtility_DoesAnySlotFileExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSSlotsUtility::execDoesAnySlotFileExist)
{
	P_GET_UBOOL(Z_Param_bExcludeSharedSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USSSlotsUtility::DoesAnySlotFileExist(Z_Param_bExcludeSharedSlot);
	P_NATIVE_END;
}
// ********** End Class USSSlotsUtility Function DoesAnySlotFileExist ******************************

// ********** Begin Class USSSlotsUtility Function DoesSharedSlotFileExist *************************
struct Z_Construct_UFunction_USSSlotsUtility_DoesSharedSlotFileExist_Statics
{
	struct SSSlotsUtility_eventDoesSharedSlotFileExist_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSSlotsUtility.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USSSlotsUtility_DoesSharedSlotFileExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SSSlotsUtility_eventDoesSharedSlotFileExist_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSSlotsUtility_DoesSharedSlotFileExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSSlotsUtility_eventDoesSharedSlotFileExist_Parms), &Z_Construct_UFunction_USSSlotsUtility_DoesSharedSlotFileExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSSlotsUtility_DoesSharedSlotFileExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_DoesSharedSlotFileExist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_DoesSharedSlotFileExist_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSSlotsUtility_DoesSharedSlotFileExist_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSSlotsUtility, nullptr, "DoesSharedSlotFileExist", Z_Construct_UFunction_USSSlotsUtility_DoesSharedSlotFileExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_DoesSharedSlotFileExist_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSSlotsUtility_DoesSharedSlotFileExist_Statics::SSSlotsUtility_eventDoesSharedSlotFileExist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_DoesSharedSlotFileExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSSlotsUtility_DoesSharedSlotFileExist_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSSlotsUtility_DoesSharedSlotFileExist_Statics::SSSlotsUtility_eventDoesSharedSlotFileExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSSlotsUtility_DoesSharedSlotFileExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSSlotsUtility_DoesSharedSlotFileExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSSlotsUtility::execDoesSharedSlotFileExist)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USSSlotsUtility::DoesSharedSlotFileExist();
	P_NATIVE_END;
}
// ********** End Class USSSlotsUtility Function DoesSharedSlotFileExist ***************************

// ********** Begin Class USSSlotsUtility Function DoesSlotFileExist *******************************
struct Z_Construct_UFunction_USSSlotsUtility_DoesSlotFileExist_Statics
{
	struct SSSlotsUtility_eventDoesSlotFileExist_Parms
	{
		FString SlotName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSSlotsUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USSSlotsUtility_DoesSlotFileExist_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSSlotsUtility_eventDoesSlotFileExist_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
void Z_Construct_UFunction_USSSlotsUtility_DoesSlotFileExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SSSlotsUtility_eventDoesSlotFileExist_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSSlotsUtility_DoesSlotFileExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSSlotsUtility_eventDoesSlotFileExist_Parms), &Z_Construct_UFunction_USSSlotsUtility_DoesSlotFileExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSSlotsUtility_DoesSlotFileExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_DoesSlotFileExist_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_DoesSlotFileExist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_DoesSlotFileExist_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSSlotsUtility_DoesSlotFileExist_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSSlotsUtility, nullptr, "DoesSlotFileExist", Z_Construct_UFunction_USSSlotsUtility_DoesSlotFileExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_DoesSlotFileExist_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSSlotsUtility_DoesSlotFileExist_Statics::SSSlotsUtility_eventDoesSlotFileExist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_DoesSlotFileExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSSlotsUtility_DoesSlotFileExist_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSSlotsUtility_DoesSlotFileExist_Statics::SSSlotsUtility_eventDoesSlotFileExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSSlotsUtility_DoesSlotFileExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSSlotsUtility_DoesSlotFileExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSSlotsUtility::execDoesSlotFileExist)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USSSlotsUtility::DoesSlotFileExist(Z_Param_SlotName);
	P_NATIVE_END;
}
// ********** End Class USSSlotsUtility Function DoesSlotFileExist *********************************

// ********** Begin Class USSSlotsUtility Function GetMostRecentSlotInfoPlayedTime *****************
struct Z_Construct_UFunction_USSSlotsUtility_GetMostRecentSlotInfoPlayedTime_Statics
{
	struct SSSlotsUtility_eventGetMostRecentSlotInfoPlayedTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSSlotsUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USSSlotsUtility_GetMostRecentSlotInfoPlayedTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSSlotsUtility_eventGetMostRecentSlotInfoPlayedTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSSlotsUtility_GetMostRecentSlotInfoPlayedTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_GetMostRecentSlotInfoPlayedTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_GetMostRecentSlotInfoPlayedTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSSlotsUtility_GetMostRecentSlotInfoPlayedTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSSlotsUtility, nullptr, "GetMostRecentSlotInfoPlayedTime", Z_Construct_UFunction_USSSlotsUtility_GetMostRecentSlotInfoPlayedTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_GetMostRecentSlotInfoPlayedTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSSlotsUtility_GetMostRecentSlotInfoPlayedTime_Statics::SSSlotsUtility_eventGetMostRecentSlotInfoPlayedTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_GetMostRecentSlotInfoPlayedTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSSlotsUtility_GetMostRecentSlotInfoPlayedTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSSlotsUtility_GetMostRecentSlotInfoPlayedTime_Statics::SSSlotsUtility_eventGetMostRecentSlotInfoPlayedTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSSlotsUtility_GetMostRecentSlotInfoPlayedTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSSlotsUtility_GetMostRecentSlotInfoPlayedTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSSlotsUtility::execGetMostRecentSlotInfoPlayedTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USSSlotsUtility::GetMostRecentSlotInfoPlayedTime();
	P_NATIVE_END;
}
// ********** End Class USSSlotsUtility Function GetMostRecentSlotInfoPlayedTime *******************

// ********** Begin Class USSSlotsUtility Function GetSelectedSlotName *****************************
struct Z_Construct_UFunction_USSSlotsUtility_GetSelectedSlotName_Statics
{
	struct SSSlotsUtility_eventGetSelectedSlotName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSSlotsUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USSSlotsUtility_GetSelectedSlotName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSSlotsUtility_eventGetSelectedSlotName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSSlotsUtility_GetSelectedSlotName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_GetSelectedSlotName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_GetSelectedSlotName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSSlotsUtility_GetSelectedSlotName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSSlotsUtility, nullptr, "GetSelectedSlotName", Z_Construct_UFunction_USSSlotsUtility_GetSelectedSlotName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_GetSelectedSlotName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSSlotsUtility_GetSelectedSlotName_Statics::SSSlotsUtility_eventGetSelectedSlotName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_GetSelectedSlotName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSSlotsUtility_GetSelectedSlotName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSSlotsUtility_GetSelectedSlotName_Statics::SSSlotsUtility_eventGetSelectedSlotName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSSlotsUtility_GetSelectedSlotName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSSlotsUtility_GetSelectedSlotName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSSlotsUtility::execGetSelectedSlotName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USSSlotsUtility::GetSelectedSlotName();
	P_NATIVE_END;
}
// ********** End Class USSSlotsUtility Function GetSelectedSlotName *******************************

// ********** Begin Class USSSlotsUtility Function GetTotalAutoSaveSlots ***************************
struct Z_Construct_UFunction_USSSlotsUtility_GetTotalAutoSaveSlots_Statics
{
	struct SSSlotsUtility_eventGetTotalAutoSaveSlots_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSSlotsUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USSSlotsUtility_GetTotalAutoSaveSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSSlotsUtility_eventGetTotalAutoSaveSlots_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSSlotsUtility_GetTotalAutoSaveSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_GetTotalAutoSaveSlots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_GetTotalAutoSaveSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSSlotsUtility_GetTotalAutoSaveSlots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSSlotsUtility, nullptr, "GetTotalAutoSaveSlots", Z_Construct_UFunction_USSSlotsUtility_GetTotalAutoSaveSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_GetTotalAutoSaveSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSSlotsUtility_GetTotalAutoSaveSlots_Statics::SSSlotsUtility_eventGetTotalAutoSaveSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_GetTotalAutoSaveSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSSlotsUtility_GetTotalAutoSaveSlots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSSlotsUtility_GetTotalAutoSaveSlots_Statics::SSSlotsUtility_eventGetTotalAutoSaveSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSSlotsUtility_GetTotalAutoSaveSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSSlotsUtility_GetTotalAutoSaveSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSSlotsUtility::execGetTotalAutoSaveSlots)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USSSlotsUtility::GetTotalAutoSaveSlots();
	P_NATIVE_END;
}
// ********** End Class USSSlotsUtility Function GetTotalAutoSaveSlots *****************************

// ********** Begin Class USSSlotsUtility Function GetTotalManualSaveSlots *************************
struct Z_Construct_UFunction_USSSlotsUtility_GetTotalManualSaveSlots_Statics
{
	struct SSSlotsUtility_eventGetTotalManualSaveSlots_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSSlotsUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USSSlotsUtility_GetTotalManualSaveSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSSlotsUtility_eventGetTotalManualSaveSlots_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSSlotsUtility_GetTotalManualSaveSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_GetTotalManualSaveSlots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_GetTotalManualSaveSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSSlotsUtility_GetTotalManualSaveSlots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSSlotsUtility, nullptr, "GetTotalManualSaveSlots", Z_Construct_UFunction_USSSlotsUtility_GetTotalManualSaveSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_GetTotalManualSaveSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSSlotsUtility_GetTotalManualSaveSlots_Statics::SSSlotsUtility_eventGetTotalManualSaveSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_GetTotalManualSaveSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSSlotsUtility_GetTotalManualSaveSlots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSSlotsUtility_GetTotalManualSaveSlots_Statics::SSSlotsUtility_eventGetTotalManualSaveSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSSlotsUtility_GetTotalManualSaveSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSSlotsUtility_GetTotalManualSaveSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSSlotsUtility::execGetTotalManualSaveSlots)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USSSlotsUtility::GetTotalManualSaveSlots();
	P_NATIVE_END;
}
// ********** End Class USSSlotsUtility Function GetTotalManualSaveSlots ***************************

// ********** Begin Class USSSlotsUtility Function GetTotalSlots ***********************************
struct Z_Construct_UFunction_USSSlotsUtility_GetTotalSlots_Statics
{
	struct SSSlotsUtility_eventGetTotalSlots_Parms
	{
		bool bExcludeSharedSlot;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "CPP_Default_bExcludeSharedSlot", "true" },
		{ "ModuleRelativePath", "Public/Utility/SSSlotsUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExcludeSharedSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bExcludeSharedSlot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExcludeSharedSlot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USSSlotsUtility_GetTotalSlots_Statics::NewProp_bExcludeSharedSlot_SetBit(void* Obj)
{
	((SSSlotsUtility_eventGetTotalSlots_Parms*)Obj)->bExcludeSharedSlot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSSlotsUtility_GetTotalSlots_Statics::NewProp_bExcludeSharedSlot = { "bExcludeSharedSlot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSSlotsUtility_eventGetTotalSlots_Parms), &Z_Construct_UFunction_USSSlotsUtility_GetTotalSlots_Statics::NewProp_bExcludeSharedSlot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExcludeSharedSlot_MetaData), NewProp_bExcludeSharedSlot_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USSSlotsUtility_GetTotalSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSSlotsUtility_eventGetTotalSlots_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSSlotsUtility_GetTotalSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_GetTotalSlots_Statics::NewProp_bExcludeSharedSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_GetTotalSlots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_GetTotalSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSSlotsUtility_GetTotalSlots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSSlotsUtility, nullptr, "GetTotalSlots", Z_Construct_UFunction_USSSlotsUtility_GetTotalSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_GetTotalSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSSlotsUtility_GetTotalSlots_Statics::SSSlotsUtility_eventGetTotalSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_GetTotalSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSSlotsUtility_GetTotalSlots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSSlotsUtility_GetTotalSlots_Statics::SSSlotsUtility_eventGetTotalSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSSlotsUtility_GetTotalSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSSlotsUtility_GetTotalSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSSlotsUtility::execGetTotalSlots)
{
	P_GET_UBOOL(Z_Param_bExcludeSharedSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USSSlotsUtility::GetTotalSlots(Z_Param_bExcludeSharedSlot);
	P_NATIVE_END;
}
// ********** End Class USSSlotsUtility Function GetTotalSlots *************************************

// ********** Begin Class USSSlotsUtility Function IsSelectedSlotValid *****************************
struct Z_Construct_UFunction_USSSlotsUtility_IsSelectedSlotValid_Statics
{
	struct SSSlotsUtility_eventIsSelectedSlotValid_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSSlotsUtility.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USSSlotsUtility_IsSelectedSlotValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SSSlotsUtility_eventIsSelectedSlotValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSSlotsUtility_IsSelectedSlotValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSSlotsUtility_eventIsSelectedSlotValid_Parms), &Z_Construct_UFunction_USSSlotsUtility_IsSelectedSlotValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSSlotsUtility_IsSelectedSlotValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_IsSelectedSlotValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_IsSelectedSlotValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSSlotsUtility_IsSelectedSlotValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSSlotsUtility, nullptr, "IsSelectedSlotValid", Z_Construct_UFunction_USSSlotsUtility_IsSelectedSlotValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_IsSelectedSlotValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSSlotsUtility_IsSelectedSlotValid_Statics::SSSlotsUtility_eventIsSelectedSlotValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_IsSelectedSlotValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSSlotsUtility_IsSelectedSlotValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSSlotsUtility_IsSelectedSlotValid_Statics::SSSlotsUtility_eventIsSelectedSlotValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSSlotsUtility_IsSelectedSlotValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSSlotsUtility_IsSelectedSlotValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSSlotsUtility::execIsSelectedSlotValid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USSSlotsUtility::IsSelectedSlotValid();
	P_NATIVE_END;
}
// ********** End Class USSSlotsUtility Function IsSelectedSlotValid *******************************

// ********** Begin Class USSSlotsUtility Function IsSharedSlot ************************************
struct Z_Construct_UFunction_USSSlotsUtility_IsSharedSlot_Statics
{
	struct SSSlotsUtility_eventIsSharedSlot_Parms
	{
		FSlotInfoData SlotInfo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSSlotsUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotInfo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USSSlotsUtility_IsSharedSlot_Statics::NewProp_SlotInfo = { "SlotInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSSlotsUtility_eventIsSharedSlot_Parms, SlotInfo), Z_Construct_UScriptStruct_FSlotInfoData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotInfo_MetaData), NewProp_SlotInfo_MetaData) }; // 3154120906
void Z_Construct_UFunction_USSSlotsUtility_IsSharedSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SSSlotsUtility_eventIsSharedSlot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSSlotsUtility_IsSharedSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSSlotsUtility_eventIsSharedSlot_Parms), &Z_Construct_UFunction_USSSlotsUtility_IsSharedSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSSlotsUtility_IsSharedSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_IsSharedSlot_Statics::NewProp_SlotInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_IsSharedSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_IsSharedSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSSlotsUtility_IsSharedSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSSlotsUtility, nullptr, "IsSharedSlot", Z_Construct_UFunction_USSSlotsUtility_IsSharedSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_IsSharedSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSSlotsUtility_IsSharedSlot_Statics::SSSlotsUtility_eventIsSharedSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_IsSharedSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSSlotsUtility_IsSharedSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSSlotsUtility_IsSharedSlot_Statics::SSSlotsUtility_eventIsSharedSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSSlotsUtility_IsSharedSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSSlotsUtility_IsSharedSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSSlotsUtility::execIsSharedSlot)
{
	P_GET_STRUCT_REF(FSlotInfoData,Z_Param_Out_SlotInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USSSlotsUtility::IsSharedSlot(Z_Param_Out_SlotInfo);
	P_NATIVE_END;
}
// ********** End Class USSSlotsUtility Function IsSharedSlot **************************************

// ********** Begin Class USSSlotsUtility Function TryGetAllSaveFileNames **************************
struct Z_Construct_UFunction_USSSlotsUtility_TryGetAllSaveFileNames_Statics
{
	struct SSSlotsUtility_eventTryGetAllSaveFileNames_Parms
	{
		TArray<FString> OutSaveFiles;
		bool bWithExtension;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "CPP_Default_bWithExtension", "true" },
		{ "ModuleRelativePath", "Public/Utility/SSSlotsUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutSaveFiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutSaveFiles;
	static void NewProp_bWithExtension_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWithExtension;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USSSlotsUtility_TryGetAllSaveFileNames_Statics::NewProp_OutSaveFiles_Inner = { "OutSaveFiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USSSlotsUtility_TryGetAllSaveFileNames_Statics::NewProp_OutSaveFiles = { "OutSaveFiles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSSlotsUtility_eventTryGetAllSaveFileNames_Parms, OutSaveFiles), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USSSlotsUtility_TryGetAllSaveFileNames_Statics::NewProp_bWithExtension_SetBit(void* Obj)
{
	((SSSlotsUtility_eventTryGetAllSaveFileNames_Parms*)Obj)->bWithExtension = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSSlotsUtility_TryGetAllSaveFileNames_Statics::NewProp_bWithExtension = { "bWithExtension", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSSlotsUtility_eventTryGetAllSaveFileNames_Parms), &Z_Construct_UFunction_USSSlotsUtility_TryGetAllSaveFileNames_Statics::NewProp_bWithExtension_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USSSlotsUtility_TryGetAllSaveFileNames_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SSSlotsUtility_eventTryGetAllSaveFileNames_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSSlotsUtility_TryGetAllSaveFileNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSSlotsUtility_eventTryGetAllSaveFileNames_Parms), &Z_Construct_UFunction_USSSlotsUtility_TryGetAllSaveFileNames_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSSlotsUtility_TryGetAllSaveFileNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_TryGetAllSaveFileNames_Statics::NewProp_OutSaveFiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_TryGetAllSaveFileNames_Statics::NewProp_OutSaveFiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_TryGetAllSaveFileNames_Statics::NewProp_bWithExtension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_TryGetAllSaveFileNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_TryGetAllSaveFileNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSSlotsUtility_TryGetAllSaveFileNames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSSlotsUtility, nullptr, "TryGetAllSaveFileNames", Z_Construct_UFunction_USSSlotsUtility_TryGetAllSaveFileNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_TryGetAllSaveFileNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSSlotsUtility_TryGetAllSaveFileNames_Statics::SSSlotsUtility_eventTryGetAllSaveFileNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_TryGetAllSaveFileNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSSlotsUtility_TryGetAllSaveFileNames_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSSlotsUtility_TryGetAllSaveFileNames_Statics::SSSlotsUtility_eventTryGetAllSaveFileNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSSlotsUtility_TryGetAllSaveFileNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSSlotsUtility_TryGetAllSaveFileNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSSlotsUtility::execTryGetAllSaveFileNames)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutSaveFiles);
	P_GET_UBOOL(Z_Param_bWithExtension);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USSSlotsUtility::TryGetAllSaveFileNames(Z_Param_Out_OutSaveFiles,Z_Param_bWithExtension);
	P_NATIVE_END;
}
// ********** End Class USSSlotsUtility Function TryGetAllSaveFileNames ****************************

// ********** Begin Class USSSlotsUtility Function TryGetMostAncientSlotInfoData *******************
struct Z_Construct_UFunction_USSSlotsUtility_TryGetMostAncientSlotInfoData_Statics
{
	struct SSSlotsUtility_eventTryGetMostAncientSlotInfoData_Parms
	{
		FSlotInfoData OutSlotData;
		ESaveTypeFilter Type;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "CPP_Default_Type", "All" },
		{ "ModuleRelativePath", "Public/Utility/SSSlotsUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSlotData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USSSlotsUtility_TryGetMostAncientSlotInfoData_Statics::NewProp_OutSlotData = { "OutSlotData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSSlotsUtility_eventTryGetMostAncientSlotInfoData_Parms, OutSlotData), Z_Construct_UScriptStruct_FSlotInfoData, METADATA_PARAMS(0, nullptr) }; // 3154120906
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USSSlotsUtility_TryGetMostAncientSlotInfoData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USSSlotsUtility_TryGetMostAncientSlotInfoData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSSlotsUtility_eventTryGetMostAncientSlotInfoData_Parms, Type), Z_Construct_UEnum_SaveSystem_ESaveTypeFilter, METADATA_PARAMS(0, nullptr) }; // 2982267197
void Z_Construct_UFunction_USSSlotsUtility_TryGetMostAncientSlotInfoData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SSSlotsUtility_eventTryGetMostAncientSlotInfoData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSSlotsUtility_TryGetMostAncientSlotInfoData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSSlotsUtility_eventTryGetMostAncientSlotInfoData_Parms), &Z_Construct_UFunction_USSSlotsUtility_TryGetMostAncientSlotInfoData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSSlotsUtility_TryGetMostAncientSlotInfoData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_TryGetMostAncientSlotInfoData_Statics::NewProp_OutSlotData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_TryGetMostAncientSlotInfoData_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_TryGetMostAncientSlotInfoData_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_TryGetMostAncientSlotInfoData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_TryGetMostAncientSlotInfoData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSSlotsUtility_TryGetMostAncientSlotInfoData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSSlotsUtility, nullptr, "TryGetMostAncientSlotInfoData", Z_Construct_UFunction_USSSlotsUtility_TryGetMostAncientSlotInfoData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_TryGetMostAncientSlotInfoData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSSlotsUtility_TryGetMostAncientSlotInfoData_Statics::SSSlotsUtility_eventTryGetMostAncientSlotInfoData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_TryGetMostAncientSlotInfoData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSSlotsUtility_TryGetMostAncientSlotInfoData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSSlotsUtility_TryGetMostAncientSlotInfoData_Statics::SSSlotsUtility_eventTryGetMostAncientSlotInfoData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSSlotsUtility_TryGetMostAncientSlotInfoData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSSlotsUtility_TryGetMostAncientSlotInfoData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSSlotsUtility::execTryGetMostAncientSlotInfoData)
{
	P_GET_STRUCT_REF(FSlotInfoData,Z_Param_Out_OutSlotData);
	P_GET_ENUM(ESaveTypeFilter,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USSSlotsUtility::TryGetMostAncientSlotInfoData(Z_Param_Out_OutSlotData,ESaveTypeFilter(Z_Param_Type));
	P_NATIVE_END;
}
// ********** End Class USSSlotsUtility Function TryGetMostAncientSlotInfoData *********************

// ********** Begin Class USSSlotsUtility Function TryGetMostRecentSlotInfoData ********************
struct Z_Construct_UFunction_USSSlotsUtility_TryGetMostRecentSlotInfoData_Statics
{
	struct SSSlotsUtility_eventTryGetMostRecentSlotInfoData_Parms
	{
		FSlotInfoData OutSlotData;
		ESaveTypeFilter Type;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "CPP_Default_Type", "All" },
		{ "ModuleRelativePath", "Public/Utility/SSSlotsUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSlotData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USSSlotsUtility_TryGetMostRecentSlotInfoData_Statics::NewProp_OutSlotData = { "OutSlotData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSSlotsUtility_eventTryGetMostRecentSlotInfoData_Parms, OutSlotData), Z_Construct_UScriptStruct_FSlotInfoData, METADATA_PARAMS(0, nullptr) }; // 3154120906
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USSSlotsUtility_TryGetMostRecentSlotInfoData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USSSlotsUtility_TryGetMostRecentSlotInfoData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSSlotsUtility_eventTryGetMostRecentSlotInfoData_Parms, Type), Z_Construct_UEnum_SaveSystem_ESaveTypeFilter, METADATA_PARAMS(0, nullptr) }; // 2982267197
void Z_Construct_UFunction_USSSlotsUtility_TryGetMostRecentSlotInfoData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SSSlotsUtility_eventTryGetMostRecentSlotInfoData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSSlotsUtility_TryGetMostRecentSlotInfoData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSSlotsUtility_eventTryGetMostRecentSlotInfoData_Parms), &Z_Construct_UFunction_USSSlotsUtility_TryGetMostRecentSlotInfoData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSSlotsUtility_TryGetMostRecentSlotInfoData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_TryGetMostRecentSlotInfoData_Statics::NewProp_OutSlotData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_TryGetMostRecentSlotInfoData_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_TryGetMostRecentSlotInfoData_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_TryGetMostRecentSlotInfoData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_TryGetMostRecentSlotInfoData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSSlotsUtility_TryGetMostRecentSlotInfoData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSSlotsUtility, nullptr, "TryGetMostRecentSlotInfoData", Z_Construct_UFunction_USSSlotsUtility_TryGetMostRecentSlotInfoData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_TryGetMostRecentSlotInfoData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSSlotsUtility_TryGetMostRecentSlotInfoData_Statics::SSSlotsUtility_eventTryGetMostRecentSlotInfoData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_TryGetMostRecentSlotInfoData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSSlotsUtility_TryGetMostRecentSlotInfoData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSSlotsUtility_TryGetMostRecentSlotInfoData_Statics::SSSlotsUtility_eventTryGetMostRecentSlotInfoData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSSlotsUtility_TryGetMostRecentSlotInfoData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSSlotsUtility_TryGetMostRecentSlotInfoData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSSlotsUtility::execTryGetMostRecentSlotInfoData)
{
	P_GET_STRUCT_REF(FSlotInfoData,Z_Param_Out_OutSlotData);
	P_GET_ENUM(ESaveTypeFilter,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USSSlotsUtility::TryGetMostRecentSlotInfoData(Z_Param_Out_OutSlotData,ESaveTypeFilter(Z_Param_Type));
	P_NATIVE_END;
}
// ********** End Class USSSlotsUtility Function TryGetMostRecentSlotInfoData **********************

// ********** Begin Class USSSlotsUtility Function TryGetSharedSlotInfoData ************************
struct Z_Construct_UFunction_USSSlotsUtility_TryGetSharedSlotInfoData_Statics
{
	struct SSSlotsUtility_eventTryGetSharedSlotInfoData_Parms
	{
		FSlotInfoData OutSlotInfo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSSlotsUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSlotInfo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USSSlotsUtility_TryGetSharedSlotInfoData_Statics::NewProp_OutSlotInfo = { "OutSlotInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSSlotsUtility_eventTryGetSharedSlotInfoData_Parms, OutSlotInfo), Z_Construct_UScriptStruct_FSlotInfoData, METADATA_PARAMS(0, nullptr) }; // 3154120906
void Z_Construct_UFunction_USSSlotsUtility_TryGetSharedSlotInfoData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SSSlotsUtility_eventTryGetSharedSlotInfoData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSSlotsUtility_TryGetSharedSlotInfoData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSSlotsUtility_eventTryGetSharedSlotInfoData_Parms), &Z_Construct_UFunction_USSSlotsUtility_TryGetSharedSlotInfoData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSSlotsUtility_TryGetSharedSlotInfoData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_TryGetSharedSlotInfoData_Statics::NewProp_OutSlotInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_TryGetSharedSlotInfoData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_TryGetSharedSlotInfoData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSSlotsUtility_TryGetSharedSlotInfoData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSSlotsUtility, nullptr, "TryGetSharedSlotInfoData", Z_Construct_UFunction_USSSlotsUtility_TryGetSharedSlotInfoData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_TryGetSharedSlotInfoData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSSlotsUtility_TryGetSharedSlotInfoData_Statics::SSSlotsUtility_eventTryGetSharedSlotInfoData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_TryGetSharedSlotInfoData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSSlotsUtility_TryGetSharedSlotInfoData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSSlotsUtility_TryGetSharedSlotInfoData_Statics::SSSlotsUtility_eventTryGetSharedSlotInfoData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSSlotsUtility_TryGetSharedSlotInfoData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSSlotsUtility_TryGetSharedSlotInfoData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSSlotsUtility::execTryGetSharedSlotInfoData)
{
	P_GET_STRUCT_REF(FSlotInfoData,Z_Param_Out_OutSlotInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USSSlotsUtility::TryGetSharedSlotInfoData(Z_Param_Out_OutSlotInfo);
	P_NATIVE_END;
}
// ********** End Class USSSlotsUtility Function TryGetSharedSlotInfoData **************************

// ********** Begin Class USSSlotsUtility Function TryGetSlotInfosOfType ***************************
struct Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType_Statics
{
	struct SSSlotsUtility_eventTryGetSlotInfosOfType_Parms
	{
		TArray<FSlotInfoData> OutSlotInfos;
		ESaveTypeFilter Type;
		bool bExcludeSharedSlot;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "CPP_Default_bExcludeSharedSlot", "true" },
		{ "CPP_Default_Type", "All" },
		{ "ModuleRelativePath", "Public/Utility/SSSlotsUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExcludeSharedSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSlotInfos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutSlotInfos;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static void NewProp_bExcludeSharedSlot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExcludeSharedSlot;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType_Statics::NewProp_OutSlotInfos_Inner = { "OutSlotInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSlotInfoData, METADATA_PARAMS(0, nullptr) }; // 3154120906
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType_Statics::NewProp_OutSlotInfos = { "OutSlotInfos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSSlotsUtility_eventTryGetSlotInfosOfType_Parms, OutSlotInfos), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3154120906
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSSlotsUtility_eventTryGetSlotInfosOfType_Parms, Type), Z_Construct_UEnum_SaveSystem_ESaveTypeFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2982267197
void Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType_Statics::NewProp_bExcludeSharedSlot_SetBit(void* Obj)
{
	((SSSlotsUtility_eventTryGetSlotInfosOfType_Parms*)Obj)->bExcludeSharedSlot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType_Statics::NewProp_bExcludeSharedSlot = { "bExcludeSharedSlot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSSlotsUtility_eventTryGetSlotInfosOfType_Parms), &Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType_Statics::NewProp_bExcludeSharedSlot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExcludeSharedSlot_MetaData), NewProp_bExcludeSharedSlot_MetaData) };
void Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SSSlotsUtility_eventTryGetSlotInfosOfType_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSSlotsUtility_eventTryGetSlotInfosOfType_Parms), &Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType_Statics::NewProp_OutSlotInfos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType_Statics::NewProp_OutSlotInfos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType_Statics::NewProp_bExcludeSharedSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSSlotsUtility, nullptr, "TryGetSlotInfosOfType", Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType_Statics::SSSlotsUtility_eventTryGetSlotInfosOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType_Statics::SSSlotsUtility_eventTryGetSlotInfosOfType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSSlotsUtility::execTryGetSlotInfosOfType)
{
	P_GET_TARRAY_REF(FSlotInfoData,Z_Param_Out_OutSlotInfos);
	P_GET_ENUM(ESaveTypeFilter,Z_Param_Type);
	P_GET_UBOOL(Z_Param_bExcludeSharedSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USSSlotsUtility::TryGetSlotInfosOfType(Z_Param_Out_OutSlotInfos,ESaveTypeFilter(Z_Param_Type),Z_Param_bExcludeSharedSlot);
	P_NATIVE_END;
}
// ********** End Class USSSlotsUtility Function TryGetSlotInfosOfType *****************************

// ********** Begin Class USSSlotsUtility Function TrySelectMostAncientSaveGame ********************
struct Z_Construct_UFunction_USSSlotsUtility_TrySelectMostAncientSaveGame_Statics
{
	struct SSSlotsUtility_eventTrySelectMostAncientSaveGame_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSSlotsUtility.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USSSlotsUtility_TrySelectMostAncientSaveGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SSSlotsUtility_eventTrySelectMostAncientSaveGame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSSlotsUtility_TrySelectMostAncientSaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSSlotsUtility_eventTrySelectMostAncientSaveGame_Parms), &Z_Construct_UFunction_USSSlotsUtility_TrySelectMostAncientSaveGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSSlotsUtility_TrySelectMostAncientSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_TrySelectMostAncientSaveGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_TrySelectMostAncientSaveGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSSlotsUtility_TrySelectMostAncientSaveGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSSlotsUtility, nullptr, "TrySelectMostAncientSaveGame", Z_Construct_UFunction_USSSlotsUtility_TrySelectMostAncientSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_TrySelectMostAncientSaveGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSSlotsUtility_TrySelectMostAncientSaveGame_Statics::SSSlotsUtility_eventTrySelectMostAncientSaveGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_TrySelectMostAncientSaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSSlotsUtility_TrySelectMostAncientSaveGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSSlotsUtility_TrySelectMostAncientSaveGame_Statics::SSSlotsUtility_eventTrySelectMostAncientSaveGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSSlotsUtility_TrySelectMostAncientSaveGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSSlotsUtility_TrySelectMostAncientSaveGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSSlotsUtility::execTrySelectMostAncientSaveGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USSSlotsUtility::TrySelectMostAncientSaveGame();
	P_NATIVE_END;
}
// ********** End Class USSSlotsUtility Function TrySelectMostAncientSaveGame **********************

// ********** Begin Class USSSlotsUtility Function TrySelectMostRecentSaveGame *********************
struct Z_Construct_UFunction_USSSlotsUtility_TrySelectMostRecentSaveGame_Statics
{
	struct SSSlotsUtility_eventTrySelectMostRecentSaveGame_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSSlotsUtility.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USSSlotsUtility_TrySelectMostRecentSaveGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SSSlotsUtility_eventTrySelectMostRecentSaveGame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSSlotsUtility_TrySelectMostRecentSaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSSlotsUtility_eventTrySelectMostRecentSaveGame_Parms), &Z_Construct_UFunction_USSSlotsUtility_TrySelectMostRecentSaveGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSSlotsUtility_TrySelectMostRecentSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_TrySelectMostRecentSaveGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_TrySelectMostRecentSaveGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSSlotsUtility_TrySelectMostRecentSaveGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSSlotsUtility, nullptr, "TrySelectMostRecentSaveGame", Z_Construct_UFunction_USSSlotsUtility_TrySelectMostRecentSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_TrySelectMostRecentSaveGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSSlotsUtility_TrySelectMostRecentSaveGame_Statics::SSSlotsUtility_eventTrySelectMostRecentSaveGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_TrySelectMostRecentSaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSSlotsUtility_TrySelectMostRecentSaveGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSSlotsUtility_TrySelectMostRecentSaveGame_Statics::SSSlotsUtility_eventTrySelectMostRecentSaveGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSSlotsUtility_TrySelectMostRecentSaveGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSSlotsUtility_TrySelectMostRecentSaveGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSSlotsUtility::execTrySelectMostRecentSaveGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USSSlotsUtility::TrySelectMostRecentSaveGame();
	P_NATIVE_END;
}
// ********** End Class USSSlotsUtility Function TrySelectMostRecentSaveGame ***********************

// ********** Begin Class USSSlotsUtility Function TrySelectSaveGameSlot ***************************
struct Z_Construct_UFunction_USSSlotsUtility_TrySelectSaveGameSlot_Statics
{
	struct SSSlotsUtility_eventTrySelectSaveGameSlot_Parms
	{
		FString SlotName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Utility/SSSlotsUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USSSlotsUtility_TrySelectSaveGameSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SSSlotsUtility_eventTrySelectSaveGameSlot_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
void Z_Construct_UFunction_USSSlotsUtility_TrySelectSaveGameSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SSSlotsUtility_eventTrySelectSaveGameSlot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USSSlotsUtility_TrySelectSaveGameSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SSSlotsUtility_eventTrySelectSaveGameSlot_Parms), &Z_Construct_UFunction_USSSlotsUtility_TrySelectSaveGameSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSSlotsUtility_TrySelectSaveGameSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_TrySelectSaveGameSlot_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSSlotsUtility_TrySelectSaveGameSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_TrySelectSaveGameSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSSlotsUtility_TrySelectSaveGameSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USSSlotsUtility, nullptr, "TrySelectSaveGameSlot", Z_Construct_UFunction_USSSlotsUtility_TrySelectSaveGameSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_TrySelectSaveGameSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_USSSlotsUtility_TrySelectSaveGameSlot_Statics::SSSlotsUtility_eventTrySelectSaveGameSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USSSlotsUtility_TrySelectSaveGameSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_USSSlotsUtility_TrySelectSaveGameSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USSSlotsUtility_TrySelectSaveGameSlot_Statics::SSSlotsUtility_eventTrySelectSaveGameSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USSSlotsUtility_TrySelectSaveGameSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSSlotsUtility_TrySelectSaveGameSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USSSlotsUtility::execTrySelectSaveGameSlot)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USSSlotsUtility::TrySelectSaveGameSlot(Z_Param_SlotName);
	P_NATIVE_END;
}
// ********** End Class USSSlotsUtility Function TrySelectSaveGameSlot *****************************

// ********** Begin Class USSSlotsUtility **********************************************************
void USSSlotsUtility::StaticRegisterNativesUSSSlotsUtility()
{
	UClass* Class = USSSlotsUtility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearSelectedSlotName", &USSSlotsUtility::execClearSelectedSlotName },
		{ "DoesAnySlotFileExist", &USSSlotsUtility::execDoesAnySlotFileExist },
		{ "DoesSharedSlotFileExist", &USSSlotsUtility::execDoesSharedSlotFileExist },
		{ "DoesSlotFileExist", &USSSlotsUtility::execDoesSlotFileExist },
		{ "GetMostRecentSlotInfoPlayedTime", &USSSlotsUtility::execGetMostRecentSlotInfoPlayedTime },
		{ "GetSelectedSlotName", &USSSlotsUtility::execGetSelectedSlotName },
		{ "GetTotalAutoSaveSlots", &USSSlotsUtility::execGetTotalAutoSaveSlots },
		{ "GetTotalManualSaveSlots", &USSSlotsUtility::execGetTotalManualSaveSlots },
		{ "GetTotalSlots", &USSSlotsUtility::execGetTotalSlots },
		{ "IsSelectedSlotValid", &USSSlotsUtility::execIsSelectedSlotValid },
		{ "IsSharedSlot", &USSSlotsUtility::execIsSharedSlot },
		{ "TryGetAllSaveFileNames", &USSSlotsUtility::execTryGetAllSaveFileNames },
		{ "TryGetMostAncientSlotInfoData", &USSSlotsUtility::execTryGetMostAncientSlotInfoData },
		{ "TryGetMostRecentSlotInfoData", &USSSlotsUtility::execTryGetMostRecentSlotInfoData },
		{ "TryGetSharedSlotInfoData", &USSSlotsUtility::execTryGetSharedSlotInfoData },
		{ "TryGetSlotInfosOfType", &USSSlotsUtility::execTryGetSlotInfosOfType },
		{ "TrySelectMostAncientSaveGame", &USSSlotsUtility::execTrySelectMostAncientSaveGame },
		{ "TrySelectMostRecentSaveGame", &USSSlotsUtility::execTrySelectMostRecentSaveGame },
		{ "TrySelectSaveGameSlot", &USSSlotsUtility::execTrySelectSaveGameSlot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USSSlotsUtility;
UClass* USSSlotsUtility::GetPrivateStaticClass()
{
	using TClass = USSSlotsUtility;
	if (!Z_Registration_Info_UClass_USSSlotsUtility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SSSlotsUtility"),
			Z_Registration_Info_UClass_USSSlotsUtility.InnerSingleton,
			StaticRegisterNativesUSSSlotsUtility,
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
	return Z_Registration_Info_UClass_USSSlotsUtility.InnerSingleton;
}
UClass* Z_Construct_UClass_USSSlotsUtility_NoRegister()
{
	return USSSlotsUtility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USSSlotsUtility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Utility/SSSlotsUtility.h" },
		{ "ModuleRelativePath", "Public/Utility/SSSlotsUtility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USSSlotsUtility_ClearSelectedSlotName, "ClearSelectedSlotName" }, // 475082892
		{ &Z_Construct_UFunction_USSSlotsUtility_DoesAnySlotFileExist, "DoesAnySlotFileExist" }, // 3128029154
		{ &Z_Construct_UFunction_USSSlotsUtility_DoesSharedSlotFileExist, "DoesSharedSlotFileExist" }, // 2914286205
		{ &Z_Construct_UFunction_USSSlotsUtility_DoesSlotFileExist, "DoesSlotFileExist" }, // 1699098386
		{ &Z_Construct_UFunction_USSSlotsUtility_GetMostRecentSlotInfoPlayedTime, "GetMostRecentSlotInfoPlayedTime" }, // 95139967
		{ &Z_Construct_UFunction_USSSlotsUtility_GetSelectedSlotName, "GetSelectedSlotName" }, // 2921682090
		{ &Z_Construct_UFunction_USSSlotsUtility_GetTotalAutoSaveSlots, "GetTotalAutoSaveSlots" }, // 3236844626
		{ &Z_Construct_UFunction_USSSlotsUtility_GetTotalManualSaveSlots, "GetTotalManualSaveSlots" }, // 199627900
		{ &Z_Construct_UFunction_USSSlotsUtility_GetTotalSlots, "GetTotalSlots" }, // 1721348063
		{ &Z_Construct_UFunction_USSSlotsUtility_IsSelectedSlotValid, "IsSelectedSlotValid" }, // 2035346488
		{ &Z_Construct_UFunction_USSSlotsUtility_IsSharedSlot, "IsSharedSlot" }, // 581129784
		{ &Z_Construct_UFunction_USSSlotsUtility_TryGetAllSaveFileNames, "TryGetAllSaveFileNames" }, // 4264434043
		{ &Z_Construct_UFunction_USSSlotsUtility_TryGetMostAncientSlotInfoData, "TryGetMostAncientSlotInfoData" }, // 380246582
		{ &Z_Construct_UFunction_USSSlotsUtility_TryGetMostRecentSlotInfoData, "TryGetMostRecentSlotInfoData" }, // 3903185710
		{ &Z_Construct_UFunction_USSSlotsUtility_TryGetSharedSlotInfoData, "TryGetSharedSlotInfoData" }, // 2394473744
		{ &Z_Construct_UFunction_USSSlotsUtility_TryGetSlotInfosOfType, "TryGetSlotInfosOfType" }, // 642944615
		{ &Z_Construct_UFunction_USSSlotsUtility_TrySelectMostAncientSaveGame, "TrySelectMostAncientSaveGame" }, // 3493378547
		{ &Z_Construct_UFunction_USSSlotsUtility_TrySelectMostRecentSaveGame, "TrySelectMostRecentSaveGame" }, // 2617759959
		{ &Z_Construct_UFunction_USSSlotsUtility_TrySelectSaveGameSlot, "TrySelectSaveGameSlot" }, // 3445662457
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USSSlotsUtility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USSSlotsUtility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SaveSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USSSlotsUtility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USSSlotsUtility_Statics::ClassParams = {
	&USSSlotsUtility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USSSlotsUtility_Statics::Class_MetaDataParams), Z_Construct_UClass_USSSlotsUtility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USSSlotsUtility()
{
	if (!Z_Registration_Info_UClass_USSSlotsUtility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USSSlotsUtility.OuterSingleton, Z_Construct_UClass_USSSlotsUtility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USSSlotsUtility.OuterSingleton;
}
USSSlotsUtility::USSSlotsUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USSSlotsUtility);
USSSlotsUtility::~USSSlotsUtility() {}
// ********** End Class USSSlotsUtility ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Utility_SSSlotsUtility_h__Script_SaveSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USSSlotsUtility, USSSlotsUtility::StaticClass, TEXT("USSSlotsUtility"), &Z_Registration_Info_UClass_USSSlotsUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USSSlotsUtility), 233856162U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Utility_SSSlotsUtility_h__Script_SaveSystem_361786717(TEXT("/Script/SaveSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Utility_SSSlotsUtility_h__Script_SaveSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Utility_SSSlotsUtility_h__Script_SaveSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
