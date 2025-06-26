// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BetterDragDropSubsystem.h"
#include "Components/SlateWrapperTypes.h"
#include "Engine/GameInstance.h"
#include "Input/Events.h"
#include "InputCoreTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBetterDragDropSubsystem() {}

// ********** Begin Cross Module References ********************************************************
BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDragDropOperation_NoRegister();
BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDragDropSubsystem();
BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDragDropSubsystem_NoRegister();
BETTERDRAGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationEnded__DelegateSignature();
BETTERDRAGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationStarted__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyEvent();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FEventReply();
UPackage* Z_Construct_UPackage__Script_BetterDragSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FBetterDragDropOperationStarted ***************************************
struct Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationStarted__DelegateSignature_Statics
{
	struct _Script_BetterDragSystem_eventBetterDragDropOperationStarted_Parms
	{
		UBetterDragDropOperation* DragDropOperation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BetterDragDropSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DragDropOperation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationStarted__DelegateSignature_Statics::NewProp_DragDropOperation = { "DragDropOperation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BetterDragSystem_eventBetterDragDropOperationStarted_Parms, DragDropOperation), Z_Construct_UClass_UBetterDragDropOperation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationStarted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationStarted__DelegateSignature_Statics::NewProp_DragDropOperation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationStarted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationStarted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_BetterDragSystem, nullptr, "BetterDragDropOperationStarted__DelegateSignature", Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationStarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationStarted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationStarted__DelegateSignature_Statics::_Script_BetterDragSystem_eventBetterDragDropOperationStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationStarted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationStarted__DelegateSignature_Statics::_Script_BetterDragSystem_eventBetterDragDropOperationStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationStarted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationStarted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBetterDragDropOperationStarted_DelegateWrapper(const FMulticastScriptDelegate& BetterDragDropOperationStarted, UBetterDragDropOperation* DragDropOperation)
{
	struct _Script_BetterDragSystem_eventBetterDragDropOperationStarted_Parms
	{
		UBetterDragDropOperation* DragDropOperation;
	};
	_Script_BetterDragSystem_eventBetterDragDropOperationStarted_Parms Parms;
	Parms.DragDropOperation=DragDropOperation;
	BetterDragDropOperationStarted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FBetterDragDropOperationStarted *****************************************

// ********** Begin Delegate FBetterDragDropOperationEnded *****************************************
struct Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationEnded__DelegateSignature_Statics
{
	struct _Script_BetterDragSystem_eventBetterDragDropOperationEnded_Parms
	{
		UBetterDragDropOperation* DragDropOperation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BetterDragDropSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DragDropOperation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationEnded__DelegateSignature_Statics::NewProp_DragDropOperation = { "DragDropOperation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BetterDragSystem_eventBetterDragDropOperationEnded_Parms, DragDropOperation), Z_Construct_UClass_UBetterDragDropOperation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationEnded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationEnded__DelegateSignature_Statics::NewProp_DragDropOperation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationEnded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationEnded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_BetterDragSystem, nullptr, "BetterDragDropOperationEnded__DelegateSignature", Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationEnded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationEnded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationEnded__DelegateSignature_Statics::_Script_BetterDragSystem_eventBetterDragDropOperationEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationEnded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationEnded__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationEnded__DelegateSignature_Statics::_Script_BetterDragSystem_eventBetterDragDropOperationEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationEnded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationEnded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBetterDragDropOperationEnded_DelegateWrapper(const FMulticastScriptDelegate& BetterDragDropOperationEnded, UBetterDragDropOperation* DragDropOperation)
{
	struct _Script_BetterDragSystem_eventBetterDragDropOperationEnded_Parms
	{
		UBetterDragDropOperation* DragDropOperation;
	};
	_Script_BetterDragSystem_eventBetterDragDropOperationEnded_Parms Parms;
	Parms.DragDropOperation=DragDropOperation;
	BetterDragDropOperationEnded.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FBetterDragDropOperationEnded *******************************************

// ********** Begin Class UBetterDragDropSubsystem Function DetectBetterDrag ***********************
struct Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDrag_Statics
{
	struct BetterDragDropSubsystem_eventDetectBetterDrag_Parms
	{
		UUserWidget* InWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DefaultToSelf", "InWidget" },
		{ "HidePin", "InWidget" },
		{ "ModuleRelativePath", "Public/BetterDragDropSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDrag_Statics::NewProp_InWidget = { "InWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropSubsystem_eventDetectBetterDrag_Parms, InWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InWidget_MetaData), NewProp_InWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDrag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDrag_Statics::NewProp_InWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDrag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDrag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropSubsystem, nullptr, "DetectBetterDrag", Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDrag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDrag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDrag_Statics::BetterDragDropSubsystem_eventDetectBetterDrag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDrag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDrag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDrag_Statics::BetterDragDropSubsystem_eventDetectBetterDrag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDrag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDrag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDragDropSubsystem::execDetectBetterDrag)
{
	P_GET_OBJECT(UUserWidget,Z_Param_InWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DetectBetterDrag(Z_Param_InWidget);
	P_NATIVE_END;
}
// ********** End Class UBetterDragDropSubsystem Function DetectBetterDrag *************************

// ********** Begin Class UBetterDragDropSubsystem Function DetectBetterDragIfPressed **************
struct Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDragIfPressed_Statics
{
	struct BetterDragDropSubsystem_eventDetectBetterDragIfPressed_Parms
	{
		UUserWidget* InWidget;
		FKeyEvent KeyEvent;
		TArray<FKey> DragKeys;
		FEventReply ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DefaultToSelf", "InWidget" },
		{ "HidePin", "InWidget" },
		{ "ModuleRelativePath", "Public/BetterDragDropSubsystem.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDragIfPressed_Statics::NewProp_InWidget = { "InWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropSubsystem_eventDetectBetterDragIfPressed_Parms, InWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InWidget_MetaData), NewProp_InWidget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDragIfPressed_Statics::NewProp_KeyEvent = { "KeyEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropSubsystem_eventDetectBetterDragIfPressed_Parms, KeyEvent), Z_Construct_UScriptStruct_FKeyEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyEvent_MetaData), NewProp_KeyEvent_MetaData) }; // 918628646
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDragIfPressed_Statics::NewProp_DragKeys_Inner = { "DragKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 3982742631
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDragIfPressed_Statics::NewProp_DragKeys = { "DragKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropSubsystem_eventDetectBetterDragIfPressed_Parms, DragKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragKeys_MetaData), NewProp_DragKeys_MetaData) }; // 3982742631
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDragIfPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropSubsystem_eventDetectBetterDragIfPressed_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 1503038592
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDragIfPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDragIfPressed_Statics::NewProp_InWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDragIfPressed_Statics::NewProp_KeyEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDragIfPressed_Statics::NewProp_DragKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDragIfPressed_Statics::NewProp_DragKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDragIfPressed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDragIfPressed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDragIfPressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropSubsystem, nullptr, "DetectBetterDragIfPressed", Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDragIfPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDragIfPressed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDragIfPressed_Statics::BetterDragDropSubsystem_eventDetectBetterDragIfPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDragIfPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDragIfPressed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDragIfPressed_Statics::BetterDragDropSubsystem_eventDetectBetterDragIfPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDragIfPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDragIfPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDragDropSubsystem::execDetectBetterDragIfPressed)
{
	P_GET_OBJECT(UUserWidget,Z_Param_InWidget);
	P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_KeyEvent);
	P_GET_TARRAY_REF(FKey,Z_Param_Out_DragKeys);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEventReply*)Z_Param__Result=P_THIS->DetectBetterDragIfPressed(Z_Param_InWidget,Z_Param_Out_KeyEvent,Z_Param_Out_DragKeys);
	P_NATIVE_END;
}
// ********** End Class UBetterDragDropSubsystem Function DetectBetterDragIfPressed ****************

// ********** Begin Class UBetterDragDropSubsystem Function EnterReceiver **************************
struct Z_Construct_UFunction_UBetterDragDropSubsystem_EnterReceiver_Statics
{
	struct BetterDragDropSubsystem_eventEnterReceiver_Parms
	{
		UUserWidget* InDropReceiver;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BetterDragDropSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDropReceiver_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InDropReceiver;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragDropSubsystem_EnterReceiver_Statics::NewProp_InDropReceiver = { "InDropReceiver", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropSubsystem_eventEnterReceiver_Parms, InDropReceiver), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDropReceiver_MetaData), NewProp_InDropReceiver_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterDragDropSubsystem_EnterReceiver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropSubsystem_EnterReceiver_Statics::NewProp_InDropReceiver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropSubsystem_EnterReceiver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropSubsystem_EnterReceiver_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropSubsystem, nullptr, "EnterReceiver", Z_Construct_UFunction_UBetterDragDropSubsystem_EnterReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropSubsystem_EnterReceiver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterDragDropSubsystem_EnterReceiver_Statics::BetterDragDropSubsystem_eventEnterReceiver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropSubsystem_EnterReceiver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropSubsystem_EnterReceiver_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterDragDropSubsystem_EnterReceiver_Statics::BetterDragDropSubsystem_eventEnterReceiver_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterDragDropSubsystem_EnterReceiver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropSubsystem_EnterReceiver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDragDropSubsystem::execEnterReceiver)
{
	P_GET_OBJECT(UUserWidget,Z_Param_InDropReceiver);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnterReceiver(Z_Param_InDropReceiver);
	P_NATIVE_END;
}
// ********** End Class UBetterDragDropSubsystem Function EnterReceiver ****************************

// ********** Begin Class UBetterDragDropSubsystem Function GetBetterDragDropOperation *************
struct Z_Construct_UFunction_UBetterDragDropSubsystem_GetBetterDragDropOperation_Statics
{
	struct BetterDragDropSubsystem_eventGetBetterDragDropOperation_Parms
	{
		UBetterDragDropOperation* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BetterDragDropSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterDragDropSubsystem_GetBetterDragDropOperation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterDragDropSubsystem_eventGetBetterDragDropOperation_Parms, ReturnValue), Z_Construct_UClass_UBetterDragDropOperation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterDragDropSubsystem_GetBetterDragDropOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropSubsystem_GetBetterDragDropOperation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropSubsystem_GetBetterDragDropOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropSubsystem_GetBetterDragDropOperation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropSubsystem, nullptr, "GetBetterDragDropOperation", Z_Construct_UFunction_UBetterDragDropSubsystem_GetBetterDragDropOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropSubsystem_GetBetterDragDropOperation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterDragDropSubsystem_GetBetterDragDropOperation_Statics::BetterDragDropSubsystem_eventGetBetterDragDropOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropSubsystem_GetBetterDragDropOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropSubsystem_GetBetterDragDropOperation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterDragDropSubsystem_GetBetterDragDropOperation_Statics::BetterDragDropSubsystem_eventGetBetterDragDropOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterDragDropSubsystem_GetBetterDragDropOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropSubsystem_GetBetterDragDropOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDragDropSubsystem::execGetBetterDragDropOperation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBetterDragDropOperation**)Z_Param__Result=P_THIS->GetBetterDragDropOperation();
	P_NATIVE_END;
}
// ********** End Class UBetterDragDropSubsystem Function GetBetterDragDropOperation ***************

// ********** Begin Class UBetterDragDropSubsystem Function IsBetterDragDropping *******************
struct Z_Construct_UFunction_UBetterDragDropSubsystem_IsBetterDragDropping_Statics
{
	struct BetterDragDropSubsystem_eventIsBetterDragDropping_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BetterDragDropSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBetterDragDropSubsystem_IsBetterDragDropping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BetterDragDropSubsystem_eventIsBetterDragDropping_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBetterDragDropSubsystem_IsBetterDragDropping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BetterDragDropSubsystem_eventIsBetterDragDropping_Parms), &Z_Construct_UFunction_UBetterDragDropSubsystem_IsBetterDragDropping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterDragDropSubsystem_IsBetterDragDropping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropSubsystem_IsBetterDragDropping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropSubsystem_IsBetterDragDropping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropSubsystem_IsBetterDragDropping_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropSubsystem, nullptr, "IsBetterDragDropping", Z_Construct_UFunction_UBetterDragDropSubsystem_IsBetterDragDropping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropSubsystem_IsBetterDragDropping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterDragDropSubsystem_IsBetterDragDropping_Statics::BetterDragDropSubsystem_eventIsBetterDragDropping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropSubsystem_IsBetterDragDropping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropSubsystem_IsBetterDragDropping_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterDragDropSubsystem_IsBetterDragDropping_Statics::BetterDragDropSubsystem_eventIsBetterDragDropping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterDragDropSubsystem_IsBetterDragDropping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropSubsystem_IsBetterDragDropping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDragDropSubsystem::execIsBetterDragDropping)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsBetterDragDropping();
	P_NATIVE_END;
}
// ********** End Class UBetterDragDropSubsystem Function IsBetterDragDropping *********************

// ********** Begin Class UBetterDragDropSubsystem Function LeaveReceiver **************************
struct Z_Construct_UFunction_UBetterDragDropSubsystem_LeaveReceiver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BetterDragDropSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropSubsystem_LeaveReceiver_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropSubsystem, nullptr, "LeaveReceiver", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropSubsystem_LeaveReceiver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropSubsystem_LeaveReceiver_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBetterDragDropSubsystem_LeaveReceiver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropSubsystem_LeaveReceiver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDragDropSubsystem::execLeaveReceiver)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LeaveReceiver();
	P_NATIVE_END;
}
// ********** End Class UBetterDragDropSubsystem Function LeaveReceiver ****************************

// ********** Begin Class UBetterDragDropSubsystem Function TryEndDrag *****************************
struct Z_Construct_UFunction_UBetterDragDropSubsystem_TryEndDrag_Statics
{
	struct BetterDragDropSubsystem_eventTryEndDrag_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BetterDragDropSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBetterDragDropSubsystem_TryEndDrag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BetterDragDropSubsystem_eventTryEndDrag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBetterDragDropSubsystem_TryEndDrag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BetterDragDropSubsystem_eventTryEndDrag_Parms), &Z_Construct_UFunction_UBetterDragDropSubsystem_TryEndDrag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterDragDropSubsystem_TryEndDrag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterDragDropSubsystem_TryEndDrag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropSubsystem_TryEndDrag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterDragDropSubsystem_TryEndDrag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterDragDropSubsystem, nullptr, "TryEndDrag", Z_Construct_UFunction_UBetterDragDropSubsystem_TryEndDrag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropSubsystem_TryEndDrag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterDragDropSubsystem_TryEndDrag_Statics::BetterDragDropSubsystem_eventTryEndDrag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterDragDropSubsystem_TryEndDrag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterDragDropSubsystem_TryEndDrag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterDragDropSubsystem_TryEndDrag_Statics::BetterDragDropSubsystem_eventTryEndDrag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterDragDropSubsystem_TryEndDrag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterDragDropSubsystem_TryEndDrag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterDragDropSubsystem::execTryEndDrag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryEndDrag();
	P_NATIVE_END;
}
// ********** End Class UBetterDragDropSubsystem Function TryEndDrag *******************************

// ********** Begin Class UBetterDragDropSubsystem *************************************************
void UBetterDragDropSubsystem::StaticRegisterNativesUBetterDragDropSubsystem()
{
	UClass* Class = UBetterDragDropSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DetectBetterDrag", &UBetterDragDropSubsystem::execDetectBetterDrag },
		{ "DetectBetterDragIfPressed", &UBetterDragDropSubsystem::execDetectBetterDragIfPressed },
		{ "EnterReceiver", &UBetterDragDropSubsystem::execEnterReceiver },
		{ "GetBetterDragDropOperation", &UBetterDragDropSubsystem::execGetBetterDragDropOperation },
		{ "IsBetterDragDropping", &UBetterDragDropSubsystem::execIsBetterDragDropping },
		{ "LeaveReceiver", &UBetterDragDropSubsystem::execLeaveReceiver },
		{ "TryEndDrag", &UBetterDragDropSubsystem::execTryEndDrag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBetterDragDropSubsystem;
UClass* UBetterDragDropSubsystem::GetPrivateStaticClass()
{
	using TClass = UBetterDragDropSubsystem;
	if (!Z_Registration_Info_UClass_UBetterDragDropSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BetterDragDropSubsystem"),
			Z_Registration_Info_UClass_UBetterDragDropSubsystem.InnerSingleton,
			StaticRegisterNativesUBetterDragDropSubsystem,
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
	return Z_Registration_Info_UClass_UBetterDragDropSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UBetterDragDropSubsystem_NoRegister()
{
	return UBetterDragDropSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBetterDragDropSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BetterDragDropSubsystem.h" },
		{ "ModuleRelativePath", "Public/BetterDragDropSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDragDropOperationStarted_MetaData[] = {
		{ "ModuleRelativePath", "Public/BetterDragDropSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDragDropOperationEnded_MetaData[] = {
		{ "ModuleRelativePath", "Public/BetterDragDropSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentOperation_MetaData[] = {
		{ "ModuleRelativePath", "Public/BetterDragDropSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDragDropOperationStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDragDropOperationEnded;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentOperation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDrag, "DetectBetterDrag" }, // 902203589
		{ &Z_Construct_UFunction_UBetterDragDropSubsystem_DetectBetterDragIfPressed, "DetectBetterDragIfPressed" }, // 1654889264
		{ &Z_Construct_UFunction_UBetterDragDropSubsystem_EnterReceiver, "EnterReceiver" }, // 1602886667
		{ &Z_Construct_UFunction_UBetterDragDropSubsystem_GetBetterDragDropOperation, "GetBetterDragDropOperation" }, // 526115825
		{ &Z_Construct_UFunction_UBetterDragDropSubsystem_IsBetterDragDropping, "IsBetterDragDropping" }, // 66002319
		{ &Z_Construct_UFunction_UBetterDragDropSubsystem_LeaveReceiver, "LeaveReceiver" }, // 3437533232
		{ &Z_Construct_UFunction_UBetterDragDropSubsystem_TryEndDrag, "TryEndDrag" }, // 4181426384
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBetterDragDropSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBetterDragDropSubsystem_Statics::NewProp_OnDragDropOperationStarted = { "OnDragDropOperationStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBetterDragDropSubsystem, OnDragDropOperationStarted), Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDragDropOperationStarted_MetaData), NewProp_OnDragDropOperationStarted_MetaData) }; // 3375335851
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBetterDragDropSubsystem_Statics::NewProp_OnDragDropOperationEnded = { "OnDragDropOperationEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBetterDragDropSubsystem, OnDragDropOperationEnded), Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationEnded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDragDropOperationEnded_MetaData), NewProp_OnDragDropOperationEnded_MetaData) }; // 3079851652
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBetterDragDropSubsystem_Statics::NewProp_CurrentOperation = { "CurrentOperation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBetterDragDropSubsystem, CurrentOperation), Z_Construct_UClass_UBetterDragDropOperation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentOperation_MetaData), NewProp_CurrentOperation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBetterDragDropSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterDragDropSubsystem_Statics::NewProp_OnDragDropOperationStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterDragDropSubsystem_Statics::NewProp_OnDragDropOperationEnded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterDragDropSubsystem_Statics::NewProp_CurrentOperation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterDragDropSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBetterDragDropSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_BetterDragSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterDragDropSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBetterDragDropSubsystem_Statics::ClassParams = {
	&UBetterDragDropSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBetterDragDropSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBetterDragDropSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterDragDropSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UBetterDragDropSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBetterDragDropSubsystem()
{
	if (!Z_Registration_Info_UClass_UBetterDragDropSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBetterDragDropSubsystem.OuterSingleton, Z_Construct_UClass_UBetterDragDropSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBetterDragDropSubsystem.OuterSingleton;
}
UBetterDragDropSubsystem::UBetterDragDropSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBetterDragDropSubsystem);
UBetterDragDropSubsystem::~UBetterDragDropSubsystem() {}
// ********** End Class UBetterDragDropSubsystem ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropSubsystem_h__Script_BetterDragSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBetterDragDropSubsystem, UBetterDragDropSubsystem::StaticClass, TEXT("UBetterDragDropSubsystem"), &Z_Registration_Info_UClass_UBetterDragDropSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBetterDragDropSubsystem), 3712433587U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropSubsystem_h__Script_BetterDragSystem_2079480037(TEXT("/Script/BetterDragSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropSubsystem_h__Script_BetterDragSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterDragSystem_Source_BetterDragSystem_Public_BetterDragDropSubsystem_h__Script_BetterDragSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
