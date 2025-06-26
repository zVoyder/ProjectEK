// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/BetterWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBetterWidget() {}

// ********** Begin Cross Module References ********************************************************
BETTERUI_API UClass* Z_Construct_UClass_UBetterFocusableWidget_NoRegister();
BETTERUI_API UClass* Z_Construct_UClass_UBetterSelectableWidget_NoRegister();
BETTERUI_API UClass* Z_Construct_UClass_UBetterWidget();
BETTERUI_API UClass* Z_Construct_UClass_UBetterWidget_NoRegister();
BETTERUI_API UFunction* Z_Construct_UDelegateFunction_BetterUI_OnDeselected__DelegateSignature();
BETTERUI_API UFunction* Z_Construct_UDelegateFunction_BetterUI_OnSelected__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_BetterUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnSelected ***********************************************************
struct Z_Construct_UDelegateFunction_BetterUI_OnSelected__DelegateSignature_Statics
{
	struct _Script_BetterUI_eventOnSelected_Parms
	{
		UBetterWidget* Widget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/BetterWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_BetterUI_OnSelected__DelegateSignature_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BetterUI_eventOnSelected_Parms, Widget), Z_Construct_UClass_UBetterWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BetterUI_OnSelected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BetterUI_OnSelected__DelegateSignature_Statics::NewProp_Widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BetterUI_OnSelected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_BetterUI_OnSelected__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_BetterUI, nullptr, "OnSelected__DelegateSignature", Z_Construct_UDelegateFunction_BetterUI_OnSelected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BetterUI_OnSelected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BetterUI_OnSelected__DelegateSignature_Statics::_Script_BetterUI_eventOnSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BetterUI_OnSelected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BetterUI_OnSelected__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_BetterUI_OnSelected__DelegateSignature_Statics::_Script_BetterUI_eventOnSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BetterUI_OnSelected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BetterUI_OnSelected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSelected_DelegateWrapper(const FMulticastScriptDelegate& OnSelected, UBetterWidget* Widget)
{
	struct _Script_BetterUI_eventOnSelected_Parms
	{
		UBetterWidget* Widget;
	};
	_Script_BetterUI_eventOnSelected_Parms Parms;
	Parms.Widget=Widget;
	OnSelected.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSelected *************************************************************

// ********** Begin Delegate FOnDeselected *********************************************************
struct Z_Construct_UDelegateFunction_BetterUI_OnDeselected__DelegateSignature_Statics
{
	struct _Script_BetterUI_eventOnDeselected_Parms
	{
		UBetterWidget* Widget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/BetterWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_BetterUI_OnDeselected__DelegateSignature_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BetterUI_eventOnDeselected_Parms, Widget), Z_Construct_UClass_UBetterWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BetterUI_OnDeselected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BetterUI_OnDeselected__DelegateSignature_Statics::NewProp_Widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BetterUI_OnDeselected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_BetterUI_OnDeselected__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_BetterUI, nullptr, "OnDeselected__DelegateSignature", Z_Construct_UDelegateFunction_BetterUI_OnDeselected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BetterUI_OnDeselected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BetterUI_OnDeselected__DelegateSignature_Statics::_Script_BetterUI_eventOnDeselected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BetterUI_OnDeselected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BetterUI_OnDeselected__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_BetterUI_OnDeselected__DelegateSignature_Statics::_Script_BetterUI_eventOnDeselected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BetterUI_OnDeselected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BetterUI_OnDeselected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDeselected_DelegateWrapper(const FMulticastScriptDelegate& OnDeselected, UBetterWidget* Widget)
{
	struct _Script_BetterUI_eventOnDeselected_Parms
	{
		UBetterWidget* Widget;
	};
	_Script_BetterUI_eventOnDeselected_Parms Parms;
	Parms.Widget=Widget;
	OnDeselected.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnDeselected ***********************************************************

// ********** Begin Class UBetterWidget Function CanFocus ******************************************
struct BetterWidget_eventCanFocus_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	BetterWidget_eventCanFocus_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UBetterWidget_CanFocus = FName(TEXT("CanFocus"));
bool UBetterWidget::CanFocus() const
{
	UFunction* Func = FindFunctionChecked(NAME_UBetterWidget_CanFocus);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BetterWidget_eventCanFocus_Parms Parms;
		const_cast<UBetterWidget*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UBetterWidget*>(this)->CanFocus_Implementation();
	}
}
struct Z_Construct_UFunction_UBetterWidget_CanFocus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/BetterWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBetterWidget_CanFocus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BetterWidget_eventCanFocus_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBetterWidget_CanFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BetterWidget_eventCanFocus_Parms), &Z_Construct_UFunction_UBetterWidget_CanFocus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterWidget_CanFocus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterWidget_CanFocus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterWidget_CanFocus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterWidget_CanFocus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterWidget, nullptr, "CanFocus", Z_Construct_UFunction_UBetterWidget_CanFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterWidget_CanFocus_Statics::PropPointers), sizeof(BetterWidget_eventCanFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterWidget_CanFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterWidget_CanFocus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BetterWidget_eventCanFocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterWidget_CanFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterWidget_CanFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterWidget::execCanFocus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanFocus_Implementation();
	P_NATIVE_END;
}
// ********** End Class UBetterWidget Function CanFocus ********************************************

// ********** Begin Class UBetterWidget Function CanUnfocus ****************************************
struct BetterWidget_eventCanUnfocus_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	BetterWidget_eventCanUnfocus_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UBetterWidget_CanUnfocus = FName(TEXT("CanUnfocus"));
bool UBetterWidget::CanUnfocus() const
{
	UFunction* Func = FindFunctionChecked(NAME_UBetterWidget_CanUnfocus);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BetterWidget_eventCanUnfocus_Parms Parms;
		const_cast<UBetterWidget*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UBetterWidget*>(this)->CanUnfocus_Implementation();
	}
}
struct Z_Construct_UFunction_UBetterWidget_CanUnfocus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/BetterWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBetterWidget_CanUnfocus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BetterWidget_eventCanUnfocus_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBetterWidget_CanUnfocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BetterWidget_eventCanUnfocus_Parms), &Z_Construct_UFunction_UBetterWidget_CanUnfocus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterWidget_CanUnfocus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterWidget_CanUnfocus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterWidget_CanUnfocus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterWidget_CanUnfocus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterWidget, nullptr, "CanUnfocus", Z_Construct_UFunction_UBetterWidget_CanUnfocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterWidget_CanUnfocus_Statics::PropPointers), sizeof(BetterWidget_eventCanUnfocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterWidget_CanUnfocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterWidget_CanUnfocus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BetterWidget_eventCanUnfocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterWidget_CanUnfocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterWidget_CanUnfocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterWidget::execCanUnfocus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanUnfocus_Implementation();
	P_NATIVE_END;
}
// ********** End Class UBetterWidget Function CanUnfocus ******************************************

// ********** Begin Class UBetterWidget Function IsBetterWidgetSelected ****************************
struct Z_Construct_UFunction_UBetterWidget_IsBetterWidgetSelected_Statics
{
	struct BetterWidget_eventIsBetterWidgetSelected_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/BetterWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBetterWidget_IsBetterWidgetSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BetterWidget_eventIsBetterWidgetSelected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBetterWidget_IsBetterWidgetSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BetterWidget_eventIsBetterWidgetSelected_Parms), &Z_Construct_UFunction_UBetterWidget_IsBetterWidgetSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterWidget_IsBetterWidgetSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterWidget_IsBetterWidgetSelected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterWidget_IsBetterWidgetSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterWidget_IsBetterWidgetSelected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterWidget, nullptr, "IsBetterWidgetSelected", Z_Construct_UFunction_UBetterWidget_IsBetterWidgetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterWidget_IsBetterWidgetSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterWidget_IsBetterWidgetSelected_Statics::BetterWidget_eventIsBetterWidgetSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterWidget_IsBetterWidgetSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterWidget_IsBetterWidgetSelected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterWidget_IsBetterWidgetSelected_Statics::BetterWidget_eventIsBetterWidgetSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterWidget_IsBetterWidgetSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterWidget_IsBetterWidgetSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterWidget::execIsBetterWidgetSelected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsBetterWidgetSelected();
	P_NATIVE_END;
}
// ********** End Class UBetterWidget Function IsBetterWidgetSelected ******************************

// ********** Begin Class UBetterWidget Function OnDeselectWidget **********************************
static FName NAME_UBetterWidget_OnDeselectWidget = FName(TEXT("OnDeselectWidget"));
void UBetterWidget::OnDeselectWidget()
{
	UFunction* Func = FindFunctionChecked(NAME_UBetterWidget_OnDeselectWidget);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnDeselectWidget_Implementation();
	}
}
struct Z_Construct_UFunction_UBetterWidget_OnDeselectWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/BetterWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterWidget_OnDeselectWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterWidget, nullptr, "OnDeselectWidget", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterWidget_OnDeselectWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterWidget_OnDeselectWidget_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBetterWidget_OnDeselectWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterWidget_OnDeselectWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterWidget::execOnDeselectWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDeselectWidget_Implementation();
	P_NATIVE_END;
}
// ********** End Class UBetterWidget Function OnDeselectWidget ************************************

// ********** Begin Class UBetterWidget Function OnSelectWidget ************************************
static FName NAME_UBetterWidget_OnSelectWidget = FName(TEXT("OnSelectWidget"));
void UBetterWidget::OnSelectWidget()
{
	UFunction* Func = FindFunctionChecked(NAME_UBetterWidget_OnSelectWidget);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnSelectWidget_Implementation();
	}
}
struct Z_Construct_UFunction_UBetterWidget_OnSelectWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/BetterWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterWidget_OnSelectWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterWidget, nullptr, "OnSelectWidget", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterWidget_OnSelectWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterWidget_OnSelectWidget_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBetterWidget_OnSelectWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterWidget_OnSelectWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterWidget::execOnSelectWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSelectWidget_Implementation();
	P_NATIVE_END;
}
// ********** End Class UBetterWidget Function OnSelectWidget **************************************

// ********** Begin Class UBetterWidget Function SetFocusDesiredWidget *****************************
struct Z_Construct_UFunction_UBetterWidget_SetFocusDesiredWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/BetterWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterWidget_SetFocusDesiredWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterWidget, nullptr, "SetFocusDesiredWidget", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterWidget_SetFocusDesiredWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterWidget_SetFocusDesiredWidget_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBetterWidget_SetFocusDesiredWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterWidget_SetFocusDesiredWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterWidget::execSetFocusDesiredWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFocusDesiredWidget();
	P_NATIVE_END;
}
// ********** End Class UBetterWidget Function SetFocusDesiredWidget *******************************

// ********** Begin Class UBetterWidget Function Unfocus *******************************************
struct Z_Construct_UFunction_UBetterWidget_Unfocus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/BetterWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterWidget_Unfocus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterWidget, nullptr, "Unfocus", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterWidget_Unfocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterWidget_Unfocus_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBetterWidget_Unfocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterWidget_Unfocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterWidget::execUnfocus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Unfocus();
	P_NATIVE_END;
}
// ********** End Class UBetterWidget Function Unfocus *********************************************

// ********** Begin Class UBetterWidget ************************************************************
void UBetterWidget::StaticRegisterNativesUBetterWidget()
{
	UClass* Class = UBetterWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanFocus", &UBetterWidget::execCanFocus },
		{ "CanUnfocus", &UBetterWidget::execCanUnfocus },
		{ "IsBetterWidgetSelected", &UBetterWidget::execIsBetterWidgetSelected },
		{ "OnDeselectWidget", &UBetterWidget::execOnDeselectWidget },
		{ "OnSelectWidget", &UBetterWidget::execOnSelectWidget },
		{ "SetFocusDesiredWidget", &UBetterWidget::execSetFocusDesiredWidget },
		{ "Unfocus", &UBetterWidget::execUnfocus },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBetterWidget;
UClass* UBetterWidget::GetPrivateStaticClass()
{
	using TClass = UBetterWidget;
	if (!Z_Registration_Info_UClass_UBetterWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BetterWidget"),
			Z_Registration_Info_UClass_UBetterWidget.InnerSingleton,
			StaticRegisterNativesUBetterWidget,
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
	return Z_Registration_Info_UClass_UBetterWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UBetterWidget_NoRegister()
{
	return UBetterWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBetterWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/BetterWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/BetterWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSelected_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Widgets/BetterWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDeselected_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Widgets/BetterWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMouseEnterFocuses_MetaData[] = {
		{ "Category", "Better UI" },
		{ "ModuleRelativePath", "Public/Widgets/BetterWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMouseLeaveUnfocuses_MetaData[] = {
		{ "Category", "Better UI" },
		{ "ModuleRelativePath", "Public/Widgets/BetterWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelectOnAddFocus_MetaData[] = {
		{ "Category", "Better UI" },
		{ "ModuleRelativePath", "Public/Widgets/BetterWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeselectOnRemoveFocus_MetaData[] = {
		{ "Category", "Better UI" },
		{ "ModuleRelativePath", "Public/Widgets/BetterWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeselected;
	static void NewProp_bMouseEnterFocuses_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMouseEnterFocuses;
	static void NewProp_bMouseLeaveUnfocuses_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMouseLeaveUnfocuses;
	static void NewProp_bSelectOnAddFocus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectOnAddFocus;
	static void NewProp_bDeselectOnRemoveFocus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeselectOnRemoveFocus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBetterWidget_CanFocus, "CanFocus" }, // 1575667601
		{ &Z_Construct_UFunction_UBetterWidget_CanUnfocus, "CanUnfocus" }, // 4242929198
		{ &Z_Construct_UFunction_UBetterWidget_IsBetterWidgetSelected, "IsBetterWidgetSelected" }, // 846457565
		{ &Z_Construct_UFunction_UBetterWidget_OnDeselectWidget, "OnDeselectWidget" }, // 3867976687
		{ &Z_Construct_UFunction_UBetterWidget_OnSelectWidget, "OnSelectWidget" }, // 1238261093
		{ &Z_Construct_UFunction_UBetterWidget_SetFocusDesiredWidget, "SetFocusDesiredWidget" }, // 1769125039
		{ &Z_Construct_UFunction_UBetterWidget_Unfocus, "Unfocus" }, // 3191859851
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBetterWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBetterWidget_Statics::NewProp_OnSelected = { "OnSelected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBetterWidget, OnSelected), Z_Construct_UDelegateFunction_BetterUI_OnSelected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSelected_MetaData), NewProp_OnSelected_MetaData) }; // 3631673012
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBetterWidget_Statics::NewProp_OnDeselected = { "OnDeselected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBetterWidget, OnDeselected), Z_Construct_UDelegateFunction_BetterUI_OnDeselected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDeselected_MetaData), NewProp_OnDeselected_MetaData) }; // 593124470
void Z_Construct_UClass_UBetterWidget_Statics::NewProp_bMouseEnterFocuses_SetBit(void* Obj)
{
	((UBetterWidget*)Obj)->bMouseEnterFocuses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBetterWidget_Statics::NewProp_bMouseEnterFocuses = { "bMouseEnterFocuses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBetterWidget), &Z_Construct_UClass_UBetterWidget_Statics::NewProp_bMouseEnterFocuses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMouseEnterFocuses_MetaData), NewProp_bMouseEnterFocuses_MetaData) };
void Z_Construct_UClass_UBetterWidget_Statics::NewProp_bMouseLeaveUnfocuses_SetBit(void* Obj)
{
	((UBetterWidget*)Obj)->bMouseLeaveUnfocuses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBetterWidget_Statics::NewProp_bMouseLeaveUnfocuses = { "bMouseLeaveUnfocuses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBetterWidget), &Z_Construct_UClass_UBetterWidget_Statics::NewProp_bMouseLeaveUnfocuses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMouseLeaveUnfocuses_MetaData), NewProp_bMouseLeaveUnfocuses_MetaData) };
void Z_Construct_UClass_UBetterWidget_Statics::NewProp_bSelectOnAddFocus_SetBit(void* Obj)
{
	((UBetterWidget*)Obj)->bSelectOnAddFocus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBetterWidget_Statics::NewProp_bSelectOnAddFocus = { "bSelectOnAddFocus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBetterWidget), &Z_Construct_UClass_UBetterWidget_Statics::NewProp_bSelectOnAddFocus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelectOnAddFocus_MetaData), NewProp_bSelectOnAddFocus_MetaData) };
void Z_Construct_UClass_UBetterWidget_Statics::NewProp_bDeselectOnRemoveFocus_SetBit(void* Obj)
{
	((UBetterWidget*)Obj)->bDeselectOnRemoveFocus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBetterWidget_Statics::NewProp_bDeselectOnRemoveFocus = { "bDeselectOnRemoveFocus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBetterWidget), &Z_Construct_UClass_UBetterWidget_Statics::NewProp_bDeselectOnRemoveFocus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeselectOnRemoveFocus_MetaData), NewProp_bDeselectOnRemoveFocus_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBetterWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterWidget_Statics::NewProp_OnSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterWidget_Statics::NewProp_OnDeselected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterWidget_Statics::NewProp_bMouseEnterFocuses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterWidget_Statics::NewProp_bMouseLeaveUnfocuses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterWidget_Statics::NewProp_bSelectOnAddFocus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBetterWidget_Statics::NewProp_bDeselectOnRemoveFocus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBetterWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BetterUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBetterWidget_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UBetterFocusableWidget_NoRegister, (int32)VTABLE_OFFSET(UBetterWidget, IBetterFocusableWidget), false },  // 2136985605
	{ Z_Construct_UClass_UBetterSelectableWidget_NoRegister, (int32)VTABLE_OFFSET(UBetterWidget, IBetterSelectableWidget), false },  // 3989435975
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBetterWidget_Statics::ClassParams = {
	&UBetterWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBetterWidget_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBetterWidget_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBetterWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBetterWidget()
{
	if (!Z_Registration_Info_UClass_UBetterWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBetterWidget.OuterSingleton, Z_Construct_UClass_UBetterWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBetterWidget.OuterSingleton;
}
UBetterWidget::UBetterWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBetterWidget);
UBetterWidget::~UBetterWidget() {}
// ********** End Class UBetterWidget **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_BetterWidget_h__Script_BetterUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBetterWidget, UBetterWidget::StaticClass, TEXT("UBetterWidget"), &Z_Registration_Info_UClass_UBetterWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBetterWidget), 1696282212U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_BetterWidget_h__Script_BetterUI_294116396(TEXT("/Script/BetterUI"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_BetterWidget_h__Script_BetterUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Widgets_BetterWidget_h__Script_BetterUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
