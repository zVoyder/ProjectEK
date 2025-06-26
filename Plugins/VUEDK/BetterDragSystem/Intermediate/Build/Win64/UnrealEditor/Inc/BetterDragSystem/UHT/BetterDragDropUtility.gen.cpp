// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utility/BetterDragDropUtility.h"
#include "Components/SlateWrapperTypes.h"
#include "Input/Events.h"
#include "InputCoreTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBetterDragDropUtility() {}

// ********** Begin Cross Module References ********************************************************
BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDragDropOperation_NoRegister();
BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDragDropSubsystem_NoRegister();
BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDragDropUtility();
BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDragDropUtility_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyEvent();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FEventReply();
UPackage* Z_Construct_UPackage__Script_BetterDragSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBetterDragDropUtility Function DetectBetterDrag *************************
struct Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDrag_Statics
{
	struct BetterDragDropUtility_eventDetectBetterDrag_Parms
	{
		UUserWidget* InWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BetterDrag" },
		{ "DefaultToSelf", "InWidget" },
		{ "HidePin", "InWidget" },
		{ "ModuleRelativePath", "Public/Utility/BetterDragDropUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDrag_Statics::NewProp_InWidget = { "InWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropUtility_eventDetectBetterDrag_Parms, InWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InWidget_MetaData), NewProp_InWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDrag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDrag_Statics::NewProp_InWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDrag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDrag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropUtility, nullptr, "DetectBetterDrag", Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDrag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDrag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDrag_Statics::BetterDragDropUtility_eventDetectBetterDrag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDrag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDrag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDrag_Statics::BetterDragDropUtility_eventDetectBetterDrag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDrag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDrag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDragDropUtility::execDetectBetterDrag)
{
	P_GET_OBJECT(UUserWidget,Z_Param_InWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBetterDragDropUtility::DetectBetterDrag(Z_Param_InWidget);
	P_NATIVE_END;
}
// ********** End Class UBetterDragDropUtility Function DetectBetterDrag ***************************

// ********** Begin Class UBetterDragDropUtility Function DetectBetterDragIfPressed ****************
struct Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDragIfPressed_Statics
{
	struct BetterDragDropUtility_eventDetectBetterDragIfPressed_Parms
	{
		UUserWidget* InWidget;
		FKeyEvent KeyEvent;
		TArray<FKey> DragKeys;
		FEventReply ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BetterDrag" },
		{ "DefaultToSelf", "InWidget" },
		{ "HidePin", "InWidget" },
		{ "ModuleRelativePath", "Public/Utility/BetterDragDropUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWidget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyEvent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DragKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DragKeys;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDragIfPressed_Statics::NewProp_InWidget = { "InWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropUtility_eventDetectBetterDragIfPressed_Parms, InWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InWidget_MetaData), NewProp_InWidget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDragIfPressed_Statics::NewProp_KeyEvent = { "KeyEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropUtility_eventDetectBetterDragIfPressed_Parms, KeyEvent), Z_Construct_UScriptStruct_FKeyEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyEvent_MetaData), NewProp_KeyEvent_MetaData) }; // 918628646
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDragIfPressed_Statics::NewProp_DragKeys_Inner = { "DragKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 3982742631
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDragIfPressed_Statics::NewProp_DragKeys = { "DragKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropUtility_eventDetectBetterDragIfPressed_Parms, DragKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragKeys_MetaData), NewProp_DragKeys_MetaData) }; // 3982742631
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDragIfPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropUtility_eventDetectBetterDragIfPressed_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 1503038592
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDragIfPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDragIfPressed_Statics::NewProp_InWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDragIfPressed_Statics::NewProp_KeyEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDragIfPressed_Statics::NewProp_DragKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDragIfPressed_Statics::NewProp_DragKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDragIfPressed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDragIfPressed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDragIfPressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropUtility, nullptr, "DetectBetterDragIfPressed", Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDragIfPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDragIfPressed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDragIfPressed_Statics::BetterDragDropUtility_eventDetectBetterDragIfPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDragIfPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDragIfPressed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDragIfPressed_Statics::BetterDragDropUtility_eventDetectBetterDragIfPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDragIfPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDragIfPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDragDropUtility::execDetectBetterDragIfPressed)
{
	P_GET_OBJECT(UUserWidget,Z_Param_InWidget);
	P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_KeyEvent);
	P_GET_TARRAY_REF(FKey,Z_Param_Out_DragKeys);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEventReply*)Z_Param__Result=UBetterDragDropUtility::DetectBetterDragIfPressed(Z_Param_InWidget,Z_Param_Out_KeyEvent,Z_Param_Out_DragKeys);
	P_NATIVE_END;
}
// ********** End Class UBetterDragDropUtility Function DetectBetterDragIfPressed ******************

// ********** Begin Class UBetterDragDropUtility Function EnterReceiver ****************************
struct Z_Construct_UFunction_UBetterDragDropUtility_EnterReceiver_Statics
{
	struct BetterDragDropUtility_eventEnterReceiver_Parms
	{
		UUserWidget* InDropReceiver;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BetterDrag" },
		{ "ModuleRelativePath", "Public/Utility/BetterDragDropUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDropReceiver_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InDropReceiver;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragDropUtility_EnterReceiver_Statics::NewProp_InDropReceiver = { "InDropReceiver", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropUtility_eventEnterReceiver_Parms, InDropReceiver), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDropReceiver_MetaData), NewProp_InDropReceiver_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterDragDropUtility_EnterReceiver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropUtility_EnterReceiver_Statics::NewProp_InDropReceiver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropUtility_EnterReceiver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropUtility_EnterReceiver_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropUtility, nullptr, "EnterReceiver", Z_Construct_UFunction_UBetterDragDropUtility_EnterReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropUtility_EnterReceiver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterDragDropUtility_EnterReceiver_Statics::BetterDragDropUtility_eventEnterReceiver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropUtility_EnterReceiver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropUtility_EnterReceiver_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterDragDropUtility_EnterReceiver_Statics::BetterDragDropUtility_eventEnterReceiver_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterDragDropUtility_EnterReceiver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropUtility_EnterReceiver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDragDropUtility::execEnterReceiver)
{
	P_GET_OBJECT(UUserWidget,Z_Param_InDropReceiver);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBetterDragDropUtility::EnterReceiver(Z_Param_InDropReceiver);
	P_NATIVE_END;
}
// ********** End Class UBetterDragDropUtility Function EnterReceiver ******************************

// ********** Begin Class UBetterDragDropUtility Function GetBetterDragDropOperation ***************
struct Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropOperation_Statics
{
	struct BetterDragDropUtility_eventGetBetterDragDropOperation_Parms
	{
		UBetterDragDropOperation* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BetterDrag" },
		{ "ModuleRelativePath", "Public/Utility/BetterDragDropUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropOperation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropUtility_eventGetBetterDragDropOperation_Parms, ReturnValue), Z_Construct_UClass_UBetterDragDropOperation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropOperation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropOperation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropUtility, nullptr, "GetBetterDragDropOperation", Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropOperation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropOperation_Statics::BetterDragDropUtility_eventGetBetterDragDropOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropOperation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropOperation_Statics::BetterDragDropUtility_eventGetBetterDragDropOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDragDropUtility::execGetBetterDragDropOperation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBetterDragDropOperation**)Z_Param__Result=UBetterDragDropUtility::GetBetterDragDropOperation();
	P_NATIVE_END;
}
// ********** End Class UBetterDragDropUtility Function GetBetterDragDropOperation *****************

// ********** Begin Class UBetterDragDropUtility Function GetBetterDragDropSubsystem ***************
struct Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropSubsystem_Statics
{
	struct BetterDragDropUtility_eventGetBetterDragDropSubsystem_Parms
	{
		UBetterDragDropSubsystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BetterDrag" },
		{ "ModuleRelativePath", "Public/Utility/BetterDragDropUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropUtility_eventGetBetterDragDropSubsystem_Parms, ReturnValue), Z_Construct_UClass_UBetterDragDropSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropSubsystem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropSubsystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropSubsystem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropUtility, nullptr, "GetBetterDragDropSubsystem", Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropSubsystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropSubsystem_Statics::BetterDragDropUtility_eventGetBetterDragDropSubsystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropSubsystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropSubsystem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropSubsystem_Statics::BetterDragDropUtility_eventGetBetterDragDropSubsystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropSubsystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropSubsystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDragDropUtility::execGetBetterDragDropSubsystem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBetterDragDropSubsystem**)Z_Param__Result=UBetterDragDropUtility::GetBetterDragDropSubsystem();
	P_NATIVE_END;
}
// ********** End Class UBetterDragDropUtility Function GetBetterDragDropSubsystem *****************

// ********** Begin Class UBetterDragDropUtility Function IsBetterDragDropping *********************
struct Z_Construct_UFunction_UBetterDragDropUtility_IsBetterDragDropping_Statics
{
	struct BetterDragDropUtility_eventIsBetterDragDropping_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BetterDrag" },
		{ "ModuleRelativePath", "Public/Utility/BetterDragDropUtility.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBetterDragDropUtility_IsBetterDragDropping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BetterDragDropUtility_eventIsBetterDragDropping_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBetterDragDropUtility_IsBetterDragDropping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BetterDragDropUtility_eventIsBetterDragDropping_Parms), &Z_Construct_UFunction_UBetterDragDropUtility_IsBetterDragDropping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterDragDropUtility_IsBetterDragDropping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropUtility_IsBetterDragDropping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropUtility_IsBetterDragDropping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropUtility_IsBetterDragDropping_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropUtility, nullptr, "IsBetterDragDropping", Z_Construct_UFunction_UBetterDragDropUtility_IsBetterDragDropping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropUtility_IsBetterDragDropping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterDragDropUtility_IsBetterDragDropping_Statics::BetterDragDropUtility_eventIsBetterDragDropping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropUtility_IsBetterDragDropping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropUtility_IsBetterDragDropping_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterDragDropUtility_IsBetterDragDropping_Statics::BetterDragDropUtility_eventIsBetterDragDropping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterDragDropUtility_IsBetterDragDropping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropUtility_IsBetterDragDropping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDragDropUtility::execIsBetterDragDropping)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBetterDragDropUtility::IsBetterDragDropping();
	P_NATIVE_END;
}
// ********** End Class UBetterDragDropUtility Function IsBetterDragDropping ***********************

// ********** Begin Class UBetterDragDropUtility Function LeaveReceiver ****************************
struct Z_Construct_UFunction_UBetterDragDropUtility_LeaveReceiver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BetterDrag" },
		{ "ModuleRelativePath", "Public/Utility/BetterDragDropUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropUtility_LeaveReceiver_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropUtility, nullptr, "LeaveReceiver", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropUtility_LeaveReceiver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropUtility_LeaveReceiver_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBetterDragDropUtility_LeaveReceiver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropUtility_LeaveReceiver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDragDropUtility::execLeaveReceiver)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UBetterDragDropUtility::LeaveReceiver();
	P_NATIVE_END;
}
// ********** End Class UBetterDragDropUtility Function LeaveReceiver ******************************

// ********** Begin Class UBetterDragDropUtility Function TryEndDrag *******************************
struct Z_Construct_UFunction_UBetterDragDropUtility_TryEndDrag_Statics
{
	struct BetterDragDropUtility_eventTryEndDrag_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BetterDrag" },
		{ "ModuleRelativePath", "Public/Utility/BetterDragDropUtility.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBetterDragDropUtility_TryEndDrag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BetterDragDropUtility_eventTryEndDrag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBetterDragDropUtility_TryEndDrag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BetterDragDropUtility_eventTryEndDrag_Parms), &Z_Construct_UFunction_UBetterDragDropUtility_TryEndDrag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterDragDropUtility_TryEndDrag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropUtility_TryEndDrag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropUtility_TryEndDrag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropUtility_TryEndDrag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropUtility, nullptr, "TryEndDrag", Z_Construct_UFunction_UBetterDragDropUtility_TryEndDrag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropUtility_TryEndDrag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterDragDropUtility_TryEndDrag_Statics::BetterDragDropUtility_eventTryEndDrag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropUtility_TryEndDrag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropUtility_TryEndDrag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterDragDropUtility_TryEndDrag_Statics::BetterDragDropUtility_eventTryEndDrag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterDragDropUtility_TryEndDrag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropUtility_TryEndDrag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDragDropUtility::execTryEndDrag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBetterDragDropUtility::TryEndDrag();
	P_NATIVE_END;
}
// ********** End Class UBetterDragDropUtility Function TryEndDrag *********************************

// ********** Begin Class UBetterDragDropUtility ***************************************************
void UBetterDragDropUtility::StaticRegisterNativesUBetterDragDropUtility()
{
	UClass* Class = UBetterDragDropUtility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DetectBetterDrag", &UBetterDragDropUtility::execDetectBetterDrag },
		{ "DetectBetterDragIfPressed", &UBetterDragDropUtility::execDetectBetterDragIfPressed },
		{ "EnterReceiver", &UBetterDragDropUtility::execEnterReceiver },
		{ "GetBetterDragDropOperation", &UBetterDragDropUtility::execGetBetterDragDropOperation },
		{ "GetBetterDragDropSubsystem", &UBetterDragDropUtility::execGetBetterDragDropSubsystem },
		{ "IsBetterDragDropping", &UBetterDragDropUtility::execIsBetterDragDropping },
		{ "LeaveReceiver", &UBetterDragDropUtility::execLeaveReceiver },
		{ "TryEndDrag", &UBetterDragDropUtility::execTryEndDrag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBetterDragDropUtility;
UClass* UBetterDragDropUtility::GetPrivateStaticClass()
{
	using TClass = UBetterDragDropUtility;
	if (!Z_Registration_Info_UClass_UBetterDragDropUtility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BetterDragDropUtility"),
			Z_Registration_Info_UClass_UBetterDragDropUtility.InnerSingleton,
			StaticRegisterNativesUBetterDragDropUtility,
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
	return Z_Registration_Info_UClass_UBetterDragDropUtility.InnerSingleton;
}
UClass* Z_Construct_UClass_UBetterDragDropUtility_NoRegister()
{
	return UBetterDragDropUtility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBetterDragDropUtility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Utility/BetterDragDropUtility.h" },
		{ "ModuleRelativePath", "Public/Utility/BetterDragDropUtility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDrag, "DetectBetterDrag" }, // 3587635887
		{ &Z_Construct_UFunction_UBetterDragDropUtility_DetectBetterDragIfPressed, "DetectBetterDragIfPressed" }, // 195522768
		{ &Z_Construct_UFunction_UBetterDragDropUtility_EnterReceiver, "EnterReceiver" }, // 4238152196
		{ &Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropOperation, "GetBetterDragDropOperation" }, // 3653280621
		{ &Z_Construct_UFunction_UBetterDragDropUtility_GetBetterDragDropSubsystem, "GetBetterDragDropSubsystem" }, // 1512003252
		{ &Z_Construct_UFunction_UBetterDragDropUtility_IsBetterDragDropping, "IsBetterDragDropping" }, // 2450110084
		{ &Z_Construct_UFunction_UBetterDragDropUtility_LeaveReceiver, "LeaveReceiver" }, // 2832756293
		{ &Z_Construct_UFunction_UBetterDragDropUtility_TryEndDrag, "TryEndDrag" }, // 407457728
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBetterDragDropUtility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBetterDragDropUtility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_BetterDragSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterDragDropUtility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBetterDragDropUtility_Statics::ClassParams = {
	&UBetterDragDropUtility::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterDragDropUtility_Statics::Class_MetaDataParams), Z_Construct_UClass_UBetterDragDropUtility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBetterDragDropUtility()
{
	if (!Z_Registration_Info_UClass_UBetterDragDropUtility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBetterDragDropUtility.OuterSingleton, Z_Construct_UClass_UBetterDragDropUtility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBetterDragDropUtility.OuterSingleton;
}
UBetterDragDropUtility::UBetterDragDropUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBetterDragDropUtility);
UBetterDragDropUtility::~UBetterDragDropUtility() {}
// ********** End Class UBetterDragDropUtility *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Utility_BetterDragDropUtility_h__Script_BetterDragSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBetterDragDropUtility, UBetterDragDropUtility::StaticClass, TEXT("UBetterDragDropUtility"), &Z_Registration_Info_UClass_UBetterDragDropUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBetterDragDropUtility), 3593075446U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Utility_BetterDragDropUtility_h__Script_BetterDragSystem_4179793820(TEXT("/Script/BetterDragSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Utility_BetterDragDropUtility_h__Script_BetterDragSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_Utility_BetterDragDropUtility_h__Script_BetterDragSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
