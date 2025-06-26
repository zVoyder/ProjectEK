// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Operations/BetterSwitchOperation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBetterSwitchOperation() {}

// ********** Begin Cross Module References ********************************************************
BETTERUI_API UClass* Z_Construct_UClass_UBetterSwitchOperation();
BETTERUI_API UClass* Z_Construct_UClass_UBetterSwitchOperation_NoRegister();
BETTERUI_API UClass* Z_Construct_UClass_UBetterWidget_NoRegister();
BETTERUI_API UFunction* Z_Construct_UDelegateFunction_BetterUI_OnWidgetSwitched__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
UPackage* Z_Construct_UPackage__Script_BetterUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnWidgetSwitched *****************************************************
struct Z_Construct_UDelegateFunction_BetterUI_OnWidgetSwitched__DelegateSignature_Statics
{
	struct _Script_BetterUI_eventOnWidgetSwitched_Parms
	{
		int32 OldIndex;
		int32 NewIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Operations/BetterSwitchOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BetterUI_OnWidgetSwitched__DelegateSignature_Statics::NewProp_OldIndex = { "OldIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BetterUI_eventOnWidgetSwitched_Parms, OldIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BetterUI_OnWidgetSwitched__DelegateSignature_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BetterUI_eventOnWidgetSwitched_Parms, NewIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BetterUI_OnWidgetSwitched__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BetterUI_OnWidgetSwitched__DelegateSignature_Statics::NewProp_OldIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BetterUI_OnWidgetSwitched__DelegateSignature_Statics::NewProp_NewIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BetterUI_OnWidgetSwitched__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_BetterUI_OnWidgetSwitched__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_BetterUI, nullptr, "OnWidgetSwitched__DelegateSignature", Z_Construct_UDelegateFunction_BetterUI_OnWidgetSwitched__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BetterUI_OnWidgetSwitched__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BetterUI_OnWidgetSwitched__DelegateSignature_Statics::_Script_BetterUI_eventOnWidgetSwitched_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BetterUI_OnWidgetSwitched__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BetterUI_OnWidgetSwitched__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_BetterUI_OnWidgetSwitched__DelegateSignature_Statics::_Script_BetterUI_eventOnWidgetSwitched_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BetterUI_OnWidgetSwitched__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BetterUI_OnWidgetSwitched__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnWidgetSwitched_DelegateWrapper(const FMulticastScriptDelegate& OnWidgetSwitched, int32 OldIndex, int32 NewIndex)
{
	struct _Script_BetterUI_eventOnWidgetSwitched_Parms
	{
		int32 OldIndex;
		int32 NewIndex;
	};
	_Script_BetterUI_eventOnWidgetSwitched_Parms Parms;
	Parms.OldIndex=OldIndex;
	Parms.NewIndex=NewIndex;
	OnWidgetSwitched.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnWidgetSwitched *******************************************************

// ********** Begin Class UBetterSwitchOperation Function ActivateNextWidget ***********************
struct Z_Construct_UFunction_UBetterSwitchOperation_ActivateNextWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Operations/BetterSwitchOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterSwitchOperation_ActivateNextWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterSwitchOperation, nullptr, "ActivateNextWidget", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterSwitchOperation_ActivateNextWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterSwitchOperation_ActivateNextWidget_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBetterSwitchOperation_ActivateNextWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterSwitchOperation_ActivateNextWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterSwitchOperation::execActivateNextWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateNextWidget();
	P_NATIVE_END;
}
// ********** End Class UBetterSwitchOperation Function ActivateNextWidget *************************

// ********** Begin Class UBetterSwitchOperation Function ActivatePreviousWidget *******************
struct Z_Construct_UFunction_UBetterSwitchOperation_ActivatePreviousWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Operations/BetterSwitchOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterSwitchOperation_ActivatePreviousWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterSwitchOperation, nullptr, "ActivatePreviousWidget", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterSwitchOperation_ActivatePreviousWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterSwitchOperation_ActivatePreviousWidget_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBetterSwitchOperation_ActivatePreviousWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterSwitchOperation_ActivatePreviousWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterSwitchOperation::execActivatePreviousWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivatePreviousWidget();
	P_NATIVE_END;
}
// ********** End Class UBetterSwitchOperation Function ActivatePreviousWidget *********************

// ********** Begin Class UBetterSwitchOperation Function GetActiveWidgetIndex *********************
struct Z_Construct_UFunction_UBetterSwitchOperation_GetActiveWidgetIndex_Statics
{
	struct BetterSwitchOperation_eventGetActiveWidgetIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Operations/BetterSwitchOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBetterSwitchOperation_GetActiveWidgetIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterSwitchOperation_eventGetActiveWidgetIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterSwitchOperation_GetActiveWidgetIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterSwitchOperation_GetActiveWidgetIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterSwitchOperation_GetActiveWidgetIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterSwitchOperation_GetActiveWidgetIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterSwitchOperation, nullptr, "GetActiveWidgetIndex", Z_Construct_UFunction_UBetterSwitchOperation_GetActiveWidgetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterSwitchOperation_GetActiveWidgetIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterSwitchOperation_GetActiveWidgetIndex_Statics::BetterSwitchOperation_eventGetActiveWidgetIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterSwitchOperation_GetActiveWidgetIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterSwitchOperation_GetActiveWidgetIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterSwitchOperation_GetActiveWidgetIndex_Statics::BetterSwitchOperation_eventGetActiveWidgetIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterSwitchOperation_GetActiveWidgetIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterSwitchOperation_GetActiveWidgetIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterSwitchOperation::execGetActiveWidgetIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetActiveWidgetIndex();
	P_NATIVE_END;
}
// ********** End Class UBetterSwitchOperation Function GetActiveWidgetIndex ***********************

// ********** Begin Class UBetterSwitchOperation Function GetSelectableActiveWidget ****************
struct Z_Construct_UFunction_UBetterSwitchOperation_GetSelectableActiveWidget_Statics
{
	struct BetterSwitchOperation_eventGetSelectableActiveWidget_Parms
	{
		UBetterWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Operations/BetterSwitchOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterSwitchOperation_GetSelectableActiveWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterSwitchOperation_eventGetSelectableActiveWidget_Parms, ReturnValue), Z_Construct_UClass_UBetterWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterSwitchOperation_GetSelectableActiveWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterSwitchOperation_GetSelectableActiveWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterSwitchOperation_GetSelectableActiveWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterSwitchOperation_GetSelectableActiveWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterSwitchOperation, nullptr, "GetSelectableActiveWidget", Z_Construct_UFunction_UBetterSwitchOperation_GetSelectableActiveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterSwitchOperation_GetSelectableActiveWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterSwitchOperation_GetSelectableActiveWidget_Statics::BetterSwitchOperation_eventGetSelectableActiveWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterSwitchOperation_GetSelectableActiveWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterSwitchOperation_GetSelectableActiveWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterSwitchOperation_GetSelectableActiveWidget_Statics::BetterSwitchOperation_eventGetSelectableActiveWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterSwitchOperation_GetSelectableActiveWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterSwitchOperation_GetSelectableActiveWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterSwitchOperation::execGetSelectableActiveWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBetterWidget**)Z_Param__Result=P_THIS->GetSelectableActiveWidget();
	P_NATIVE_END;
}
// ********** End Class UBetterSwitchOperation Function GetSelectableActiveWidget ******************

// ********** Begin Class UBetterSwitchOperation Function GetSwitcherActiveWidget ******************
struct Z_Construct_UFunction_UBetterSwitchOperation_GetSwitcherActiveWidget_Statics
{
	struct BetterSwitchOperation_eventGetSwitcherActiveWidget_Parms
	{
		UWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Operations/BetterSwitchOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterSwitchOperation_GetSwitcherActiveWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterSwitchOperation_eventGetSwitcherActiveWidget_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterSwitchOperation_GetSwitcherActiveWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterSwitchOperation_GetSwitcherActiveWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterSwitchOperation_GetSwitcherActiveWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterSwitchOperation_GetSwitcherActiveWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterSwitchOperation, nullptr, "GetSwitcherActiveWidget", Z_Construct_UFunction_UBetterSwitchOperation_GetSwitcherActiveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterSwitchOperation_GetSwitcherActiveWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterSwitchOperation_GetSwitcherActiveWidget_Statics::BetterSwitchOperation_eventGetSwitcherActiveWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterSwitchOperation_GetSwitcherActiveWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterSwitchOperation_GetSwitcherActiveWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterSwitchOperation_GetSwitcherActiveWidget_Statics::BetterSwitchOperation_eventGetSwitcherActiveWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterSwitchOperation_GetSwitcherActiveWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterSwitchOperation_GetSwitcherActiveWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterSwitchOperation::execGetSwitcherActiveWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWidget**)Z_Param__Result=P_THIS->GetSwitcherActiveWidget();
	P_NATIVE_END;
}
// ********** End Class UBetterSwitchOperation Function GetSwitcherActiveWidget ********************

// ********** Begin Class UBetterSwitchOperation Function OnOwnerWidgetDestruct ********************
struct Z_Construct_UFunction_UBetterSwitchOperation_OnOwnerWidgetDestruct_Statics
{
	struct BetterSwitchOperation_eventOnOwnerWidgetDestruct_Parms
	{
		UUserWidget* UserWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Operations/BetterSwitchOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterSwitchOperation_OnOwnerWidgetDestruct_Statics::NewProp_UserWidget = { "UserWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterSwitchOperation_eventOnOwnerWidgetDestruct_Parms, UserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserWidget_MetaData), NewProp_UserWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterSwitchOperation_OnOwnerWidgetDestruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterSwitchOperation_OnOwnerWidgetDestruct_Statics::NewProp_UserWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterSwitchOperation_OnOwnerWidgetDestruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterSwitchOperation_OnOwnerWidgetDestruct_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterSwitchOperation, nullptr, "OnOwnerWidgetDestruct", Z_Construct_UFunction_UBetterSwitchOperation_OnOwnerWidgetDestruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterSwitchOperation_OnOwnerWidgetDestruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterSwitchOperation_OnOwnerWidgetDestruct_Statics::BetterSwitchOperation_eventOnOwnerWidgetDestruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterSwitchOperation_OnOwnerWidgetDestruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterSwitchOperation_OnOwnerWidgetDestruct_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterSwitchOperation_OnOwnerWidgetDestruct_Statics::BetterSwitchOperation_eventOnOwnerWidgetDestruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterSwitchOperation_OnOwnerWidgetDestruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterSwitchOperation_OnOwnerWidgetDestruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterSwitchOperation::execOnOwnerWidgetDestruct)
{
	P_GET_OBJECT(UUserWidget,Z_Param_UserWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOwnerWidgetDestruct(Z_Param_UserWidget);
	P_NATIVE_END;
}
// ********** End Class UBetterSwitchOperation Function OnOwnerWidgetDestruct **********************

// ********** Begin Class UBetterSwitchOperation Function OnWidgetSelected *************************
struct Z_Construct_UFunction_UBetterSwitchOperation_OnWidgetSelected_Statics
{
	struct BetterSwitchOperation_eventOnWidgetSelected_Parms
	{
		UBetterWidget* Widget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Operations/BetterSwitchOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterSwitchOperation_OnWidgetSelected_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterSwitchOperation_eventOnWidgetSelected_Parms, Widget), Z_Construct_UClass_UBetterWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterSwitchOperation_OnWidgetSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterSwitchOperation_OnWidgetSelected_Statics::NewProp_Widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterSwitchOperation_OnWidgetSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterSwitchOperation_OnWidgetSelected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterSwitchOperation, nullptr, "OnWidgetSelected", Z_Construct_UFunction_UBetterSwitchOperation_OnWidgetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterSwitchOperation_OnWidgetSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterSwitchOperation_OnWidgetSelected_Statics::BetterSwitchOperation_eventOnWidgetSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterSwitchOperation_OnWidgetSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterSwitchOperation_OnWidgetSelected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterSwitchOperation_OnWidgetSelected_Statics::BetterSwitchOperation_eventOnWidgetSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterSwitchOperation_OnWidgetSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterSwitchOperation_OnWidgetSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterSwitchOperation::execOnWidgetSelected)
{
	P_GET_OBJECT(UBetterWidget,Z_Param_Widget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWidgetSelected(Z_Param_Widget);
	P_NATIVE_END;
}
// ********** End Class UBetterSwitchOperation Function OnWidgetSelected ***************************

// ********** Begin Class UBetterSwitchOperation Function SetActiveWidgetIndex *********************
struct Z_Construct_UFunction_UBetterSwitchOperation_SetActiveWidgetIndex_Statics
{
	struct BetterSwitchOperation_eventSetActiveWidgetIndex_Parms
	{
		int32 InIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Operations/BetterSwitchOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBetterSwitchOperation_SetActiveWidgetIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterSwitchOperation_eventSetActiveWidgetIndex_Parms, InIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InIndex_MetaData), NewProp_InIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterSwitchOperation_SetActiveWidgetIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterSwitchOperation_SetActiveWidgetIndex_Statics::NewProp_InIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterSwitchOperation_SetActiveWidgetIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterSwitchOperation_SetActiveWidgetIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterSwitchOperation, nullptr, "SetActiveWidgetIndex", Z_Construct_UFunction_UBetterSwitchOperation_SetActiveWidgetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterSwitchOperation_SetActiveWidgetIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterSwitchOperation_SetActiveWidgetIndex_Statics::BetterSwitchOperation_eventSetActiveWidgetIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterSwitchOperation_SetActiveWidgetIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterSwitchOperation_SetActiveWidgetIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterSwitchOperation_SetActiveWidgetIndex_Statics::BetterSwitchOperation_eventSetActiveWidgetIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterSwitchOperation_SetActiveWidgetIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterSwitchOperation_SetActiveWidgetIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterSwitchOperation::execSetActiveWidgetIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActiveWidgetIndex(Z_Param_InIndex);
	P_NATIVE_END;
}
// ********** End Class UBetterSwitchOperation Function SetActiveWidgetIndex ***********************

// ********** Begin Class UBetterSwitchOperation ***************************************************
void UBetterSwitchOperation::StaticRegisterNativesUBetterSwitchOperation()
{
	UClass* Class = UBetterSwitchOperation::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateNextWidget", &UBetterSwitchOperation::execActivateNextWidget },
		{ "ActivatePreviousWidget", &UBetterSwitchOperation::execActivatePreviousWidget },
		{ "GetActiveWidgetIndex", &UBetterSwitchOperation::execGetActiveWidgetIndex },
		{ "GetSelectableActiveWidget", &UBetterSwitchOperation::execGetSelectableActiveWidget },
		{ "GetSwitcherActiveWidget", &UBetterSwitchOperation::execGetSwitcherActiveWidget },
		{ "OnOwnerWidgetDestruct", &UBetterSwitchOperation::execOnOwnerWidgetDestruct },
		{ "OnWidgetSelected", &UBetterSwitchOperation::execOnWidgetSelected },
		{ "SetActiveWidgetIndex", &UBetterSwitchOperation::execSetActiveWidgetIndex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBetterSwitchOperation;
UClass* UBetterSwitchOperation::GetPrivateStaticClass()
{
	using TClass = UBetterSwitchOperation;
	if (!Z_Registration_Info_UClass_UBetterSwitchOperation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BetterSwitchOperation"),
			Z_Registration_Info_UClass_UBetterSwitchOperation.InnerSingleton,
			StaticRegisterNativesUBetterSwitchOperation,
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
	return Z_Registration_Info_UClass_UBetterSwitchOperation.InnerSingleton;
}
UClass* Z_Construct_UClass_UBetterSwitchOperation_NoRegister()
{
	return UBetterSwitchOperation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBetterSwitchOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Operations/BetterSwitchOperation.h" },
		{ "ModuleRelativePath", "Public/Operations/BetterSwitchOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWidgetSwitched_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Operations/BetterSwitchOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Operations/BetterSwitchOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Switcher_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Operations/BetterSwitchOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectableWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Operations/BetterSwitchOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectableActiveWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Operations/BetterSwitchOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWidgetSwitched;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Switcher;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectableWidgets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectableWidgets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectableActiveWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBetterSwitchOperation_ActivateNextWidget, "ActivateNextWidget" }, // 2208020802
		{ &Z_Construct_UFunction_UBetterSwitchOperation_ActivatePreviousWidget, "ActivatePreviousWidget" }, // 3062709793
		{ &Z_Construct_UFunction_UBetterSwitchOperation_GetActiveWidgetIndex, "GetActiveWidgetIndex" }, // 9211045
		{ &Z_Construct_UFunction_UBetterSwitchOperation_GetSelectableActiveWidget, "GetSelectableActiveWidget" }, // 859251135
		{ &Z_Construct_UFunction_UBetterSwitchOperation_GetSwitcherActiveWidget, "GetSwitcherActiveWidget" }, // 2745997801
		{ &Z_Construct_UFunction_UBetterSwitchOperation_OnOwnerWidgetDestruct, "OnOwnerWidgetDestruct" }, // 1825933343
		{ &Z_Construct_UFunction_UBetterSwitchOperation_OnWidgetSelected, "OnWidgetSelected" }, // 3386668051
		{ &Z_Construct_UFunction_UBetterSwitchOperation_SetActiveWidgetIndex, "SetActiveWidgetIndex" }, // 2404229625
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBetterSwitchOperation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBetterSwitchOperation_Statics::NewProp_OnWidgetSwitched = { "OnWidgetSwitched", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBetterSwitchOperation, OnWidgetSwitched), Z_Construct_UDelegateFunction_BetterUI_OnWidgetSwitched__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWidgetSwitched_MetaData), NewProp_OnWidgetSwitched_MetaData) }; // 3671836488
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBetterSwitchOperation_Statics::NewProp_OwnerWidget = { "OwnerWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBetterSwitchOperation, OwnerWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerWidget_MetaData), NewProp_OwnerWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBetterSwitchOperation_Statics::NewProp_Switcher = { "Switcher", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBetterSwitchOperation, Switcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Switcher_MetaData), NewProp_Switcher_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBetterSwitchOperation_Statics::NewProp_SelectableWidgets_Inner = { "SelectableWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBetterWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBetterSwitchOperation_Statics::NewProp_SelectableWidgets = { "SelectableWidgets", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBetterSwitchOperation, SelectableWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectableWidgets_MetaData), NewProp_SelectableWidgets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBetterSwitchOperation_Statics::NewProp_SelectableActiveWidget = { "SelectableActiveWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBetterSwitchOperation, SelectableActiveWidget), Z_Construct_UClass_UBetterWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectableActiveWidget_MetaData), NewProp_SelectableActiveWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBetterSwitchOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterSwitchOperation_Statics::NewProp_OnWidgetSwitched,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterSwitchOperation_Statics::NewProp_OwnerWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterSwitchOperation_Statics::NewProp_Switcher,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterSwitchOperation_Statics::NewProp_SelectableWidgets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterSwitchOperation_Statics::NewProp_SelectableWidgets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterSwitchOperation_Statics::NewProp_SelectableActiveWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterSwitchOperation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBetterSwitchOperation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BetterUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterSwitchOperation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBetterSwitchOperation_Statics::ClassParams = {
	&UBetterSwitchOperation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBetterSwitchOperation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBetterSwitchOperation_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterSwitchOperation_Statics::Class_MetaDataParams), Z_Construct_UClass_UBetterSwitchOperation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBetterSwitchOperation()
{
	if (!Z_Registration_Info_UClass_UBetterSwitchOperation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBetterSwitchOperation.OuterSingleton, Z_Construct_UClass_UBetterSwitchOperation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBetterSwitchOperation.OuterSingleton;
}
UBetterSwitchOperation::UBetterSwitchOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBetterSwitchOperation);
UBetterSwitchOperation::~UBetterSwitchOperation() {}
// ********** End Class UBetterSwitchOperation *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Operations_BetterSwitchOperation_h__Script_BetterUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBetterSwitchOperation, UBetterSwitchOperation::StaticClass, TEXT("UBetterSwitchOperation"), &Z_Registration_Info_UClass_UBetterSwitchOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBetterSwitchOperation), 4165280134U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Operations_BetterSwitchOperation_h__Script_BetterUI_288717699(TEXT("/Script/BetterUI"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Operations_BetterSwitchOperation_h__Script_BetterUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Operations_BetterSwitchOperation_h__Script_BetterUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
