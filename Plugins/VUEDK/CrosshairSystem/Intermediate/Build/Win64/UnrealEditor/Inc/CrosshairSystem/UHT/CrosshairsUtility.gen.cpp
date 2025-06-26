// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utility/CrosshairsUtility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCrosshairsUtility() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
CROSSHAIRSYSTEM_API UClass* Z_Construct_UClass_UCrosshairsUtility();
CROSSHAIRSYSTEM_API UClass* Z_Construct_UClass_UCrosshairsUtility_NoRegister();
CROSSHAIRSYSTEM_API UClass* Z_Construct_UClass_UCrosshairWidget_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_CrosshairSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCrosshairsUtility Function CloseCrosshairInViewport *********************
struct Z_Construct_UFunction_UCrosshairsUtility_CloseCrosshairInViewport_Statics
{
	struct CrosshairsUtility_eventCloseCrosshairInViewport_Parms
	{
		bool bRemoveFromViewport;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Crosshair|Utility" },
		{ "CPP_Default_bRemoveFromViewport", "false" },
		{ "ModuleRelativePath", "Public/Utility/CrosshairsUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveFromViewport_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bRemoveFromViewport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveFromViewport;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCrosshairsUtility_CloseCrosshairInViewport_Statics::NewProp_bRemoveFromViewport_SetBit(void* Obj)
{
	((CrosshairsUtility_eventCloseCrosshairInViewport_Parms*)Obj)->bRemoveFromViewport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrosshairsUtility_CloseCrosshairInViewport_Statics::NewProp_bRemoveFromViewport = { "bRemoveFromViewport", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrosshairsUtility_eventCloseCrosshairInViewport_Parms), &Z_Construct_UFunction_UCrosshairsUtility_CloseCrosshairInViewport_Statics::NewProp_bRemoveFromViewport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveFromViewport_MetaData), NewProp_bRemoveFromViewport_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrosshairsUtility_CloseCrosshairInViewport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrosshairsUtility_CloseCrosshairInViewport_Statics::NewProp_bRemoveFromViewport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairsUtility_CloseCrosshairInViewport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrosshairsUtility_CloseCrosshairInViewport_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCrosshairsUtility, nullptr, "CloseCrosshairInViewport", Z_Construct_UFunction_UCrosshairsUtility_CloseCrosshairInViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairsUtility_CloseCrosshairInViewport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrosshairsUtility_CloseCrosshairInViewport_Statics::CrosshairsUtility_eventCloseCrosshairInViewport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairsUtility_CloseCrosshairInViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrosshairsUtility_CloseCrosshairInViewport_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCrosshairsUtility_CloseCrosshairInViewport_Statics::CrosshairsUtility_eventCloseCrosshairInViewport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrosshairsUtility_CloseCrosshairInViewport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrosshairsUtility_CloseCrosshairInViewport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrosshairsUtility::execCloseCrosshairInViewport)
{
	P_GET_UBOOL(Z_Param_bRemoveFromViewport);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCrosshairsUtility::CloseCrosshairInViewport(Z_Param_bRemoveFromViewport);
	P_NATIVE_END;
}
// ********** End Class UCrosshairsUtility Function CloseCrosshairInViewport ***********************

// ********** Begin Class UCrosshairsUtility Function GetCurrentCrosshairWidget ********************
struct Z_Construct_UFunction_UCrosshairsUtility_GetCurrentCrosshairWidget_Statics
{
	struct CrosshairsUtility_eventGetCurrentCrosshairWidget_Parms
	{
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Crosshair|Utility" },
		{ "ModuleRelativePath", "Public/Utility/CrosshairsUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrosshairsUtility_GetCurrentCrosshairWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrosshairsUtility_eventGetCurrentCrosshairWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrosshairsUtility_GetCurrentCrosshairWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrosshairsUtility_GetCurrentCrosshairWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairsUtility_GetCurrentCrosshairWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrosshairsUtility_GetCurrentCrosshairWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCrosshairsUtility, nullptr, "GetCurrentCrosshairWidget", Z_Construct_UFunction_UCrosshairsUtility_GetCurrentCrosshairWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairsUtility_GetCurrentCrosshairWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrosshairsUtility_GetCurrentCrosshairWidget_Statics::CrosshairsUtility_eventGetCurrentCrosshairWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairsUtility_GetCurrentCrosshairWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrosshairsUtility_GetCurrentCrosshairWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCrosshairsUtility_GetCurrentCrosshairWidget_Statics::CrosshairsUtility_eventGetCurrentCrosshairWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrosshairsUtility_GetCurrentCrosshairWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrosshairsUtility_GetCurrentCrosshairWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrosshairsUtility::execGetCurrentCrosshairWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=UCrosshairsUtility::GetCurrentCrosshairWidget();
	P_NATIVE_END;
}
// ********** End Class UCrosshairsUtility Function GetCurrentCrosshairWidget **********************

// ********** Begin Class UCrosshairsUtility Function HideCrosshair ********************************
struct Z_Construct_UFunction_UCrosshairsUtility_HideCrosshair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Crosshair|Utility" },
		{ "ModuleRelativePath", "Public/Utility/CrosshairsUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrosshairsUtility_HideCrosshair_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCrosshairsUtility, nullptr, "HideCrosshair", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairsUtility_HideCrosshair_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrosshairsUtility_HideCrosshair_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCrosshairsUtility_HideCrosshair()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrosshairsUtility_HideCrosshair_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrosshairsUtility::execHideCrosshair)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UCrosshairsUtility::HideCrosshair();
	P_NATIVE_END;
}
// ********** End Class UCrosshairsUtility Function HideCrosshair **********************************

// ********** Begin Class UCrosshairsUtility Function IsCrosshairVisible ***************************
struct Z_Construct_UFunction_UCrosshairsUtility_IsCrosshairVisible_Statics
{
	struct CrosshairsUtility_eventIsCrosshairVisible_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Crosshair|Utility" },
		{ "ModuleRelativePath", "Public/Utility/CrosshairsUtility.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCrosshairsUtility_IsCrosshairVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CrosshairsUtility_eventIsCrosshairVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrosshairsUtility_IsCrosshairVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrosshairsUtility_eventIsCrosshairVisible_Parms), &Z_Construct_UFunction_UCrosshairsUtility_IsCrosshairVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrosshairsUtility_IsCrosshairVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrosshairsUtility_IsCrosshairVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairsUtility_IsCrosshairVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrosshairsUtility_IsCrosshairVisible_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCrosshairsUtility, nullptr, "IsCrosshairVisible", Z_Construct_UFunction_UCrosshairsUtility_IsCrosshairVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairsUtility_IsCrosshairVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrosshairsUtility_IsCrosshairVisible_Statics::CrosshairsUtility_eventIsCrosshairVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairsUtility_IsCrosshairVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrosshairsUtility_IsCrosshairVisible_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCrosshairsUtility_IsCrosshairVisible_Statics::CrosshairsUtility_eventIsCrosshairVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrosshairsUtility_IsCrosshairVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrosshairsUtility_IsCrosshairVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrosshairsUtility::execIsCrosshairVisible)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UCrosshairsUtility::IsCrosshairVisible();
	P_NATIVE_END;
}
// ********** End Class UCrosshairsUtility Function IsCrosshairVisible *****************************

// ********** Begin Class UCrosshairsUtility Function IsSwitchingCrosshairs ************************
struct Z_Construct_UFunction_UCrosshairsUtility_IsSwitchingCrosshairs_Statics
{
	struct CrosshairsUtility_eventIsSwitchingCrosshairs_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Crosshair|Utility" },
		{ "ModuleRelativePath", "Public/Utility/CrosshairsUtility.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCrosshairsUtility_IsSwitchingCrosshairs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CrosshairsUtility_eventIsSwitchingCrosshairs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrosshairsUtility_IsSwitchingCrosshairs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrosshairsUtility_eventIsSwitchingCrosshairs_Parms), &Z_Construct_UFunction_UCrosshairsUtility_IsSwitchingCrosshairs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrosshairsUtility_IsSwitchingCrosshairs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrosshairsUtility_IsSwitchingCrosshairs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairsUtility_IsSwitchingCrosshairs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrosshairsUtility_IsSwitchingCrosshairs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCrosshairsUtility, nullptr, "IsSwitchingCrosshairs", Z_Construct_UFunction_UCrosshairsUtility_IsSwitchingCrosshairs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairsUtility_IsSwitchingCrosshairs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrosshairsUtility_IsSwitchingCrosshairs_Statics::CrosshairsUtility_eventIsSwitchingCrosshairs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairsUtility_IsSwitchingCrosshairs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrosshairsUtility_IsSwitchingCrosshairs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCrosshairsUtility_IsSwitchingCrosshairs_Statics::CrosshairsUtility_eventIsSwitchingCrosshairs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrosshairsUtility_IsSwitchingCrosshairs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrosshairsUtility_IsSwitchingCrosshairs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrosshairsUtility::execIsSwitchingCrosshairs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UCrosshairsUtility::IsSwitchingCrosshairs();
	P_NATIVE_END;
}
// ********** End Class UCrosshairsUtility Function IsSwitchingCrosshairs **************************

// ********** Begin Class UCrosshairsUtility Function OpenCrosshairInViewport **********************
struct Z_Construct_UFunction_UCrosshairsUtility_OpenCrosshairInViewport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Crosshair|Utility" },
		{ "ModuleRelativePath", "Public/Utility/CrosshairsUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrosshairsUtility_OpenCrosshairInViewport_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCrosshairsUtility, nullptr, "OpenCrosshairInViewport", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairsUtility_OpenCrosshairInViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrosshairsUtility_OpenCrosshairInViewport_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCrosshairsUtility_OpenCrosshairInViewport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrosshairsUtility_OpenCrosshairInViewport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrosshairsUtility::execOpenCrosshairInViewport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UCrosshairsUtility::OpenCrosshairInViewport();
	P_NATIVE_END;
}
// ********** End Class UCrosshairsUtility Function OpenCrosshairInViewport ************************

// ********** Begin Class UCrosshairsUtility Function RemoveCrosshairFromViewport ******************
struct Z_Construct_UFunction_UCrosshairsUtility_RemoveCrosshairFromViewport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Crosshair|Utility" },
		{ "ModuleRelativePath", "Public/Utility/CrosshairsUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrosshairsUtility_RemoveCrosshairFromViewport_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCrosshairsUtility, nullptr, "RemoveCrosshairFromViewport", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairsUtility_RemoveCrosshairFromViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrosshairsUtility_RemoveCrosshairFromViewport_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCrosshairsUtility_RemoveCrosshairFromViewport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrosshairsUtility_RemoveCrosshairFromViewport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrosshairsUtility::execRemoveCrosshairFromViewport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UCrosshairsUtility::RemoveCrosshairFromViewport();
	P_NATIVE_END;
}
// ********** End Class UCrosshairsUtility Function RemoveCrosshairFromViewport ********************

// ********** Begin Class UCrosshairsUtility Function SetCrosshairInViewport ***********************
struct Z_Construct_UFunction_UCrosshairsUtility_SetCrosshairInViewport_Statics
{
	struct CrosshairsUtility_eventSetCrosshairInViewport_Parms
	{
		const TSubclassOf<UCrosshairWidget> CrosshairWidgetClass;
		UObject* Payload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Crosshair|Utility" },
		{ "CPP_Default_Payload", "None" },
		{ "ModuleRelativePath", "Public/Utility/CrosshairsUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairWidgetClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CrosshairWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCrosshairsUtility_SetCrosshairInViewport_Statics::NewProp_CrosshairWidgetClass = { "CrosshairWidgetClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrosshairsUtility_eventSetCrosshairInViewport_Parms, CrosshairWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCrosshairWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosshairWidgetClass_MetaData), NewProp_CrosshairWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrosshairsUtility_SetCrosshairInViewport_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrosshairsUtility_eventSetCrosshairInViewport_Parms, Payload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrosshairsUtility_SetCrosshairInViewport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrosshairsUtility_SetCrosshairInViewport_Statics::NewProp_CrosshairWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrosshairsUtility_SetCrosshairInViewport_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairsUtility_SetCrosshairInViewport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrosshairsUtility_SetCrosshairInViewport_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCrosshairsUtility, nullptr, "SetCrosshairInViewport", Z_Construct_UFunction_UCrosshairsUtility_SetCrosshairInViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairsUtility_SetCrosshairInViewport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrosshairsUtility_SetCrosshairInViewport_Statics::CrosshairsUtility_eventSetCrosshairInViewport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairsUtility_SetCrosshairInViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrosshairsUtility_SetCrosshairInViewport_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCrosshairsUtility_SetCrosshairInViewport_Statics::CrosshairsUtility_eventSetCrosshairInViewport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrosshairsUtility_SetCrosshairInViewport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrosshairsUtility_SetCrosshairInViewport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrosshairsUtility::execSetCrosshairInViewport)
{
	P_GET_OBJECT(UClass,Z_Param_CrosshairWidgetClass);
	P_GET_OBJECT(UObject,Z_Param_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCrosshairsUtility::SetCrosshairInViewport(Z_Param_CrosshairWidgetClass,Z_Param_Payload);
	P_NATIVE_END;
}
// ********** End Class UCrosshairsUtility Function SetCrosshairInViewport *************************

// ********** Begin Class UCrosshairsUtility Function SetDefaultCrosshairInViewport ****************
struct Z_Construct_UFunction_UCrosshairsUtility_SetDefaultCrosshairInViewport_Statics
{
	struct CrosshairsUtility_eventSetDefaultCrosshairInViewport_Parms
	{
		UObject* Payload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Crosshair|Utility" },
		{ "CPP_Default_Payload", "None" },
		{ "ModuleRelativePath", "Public/Utility/CrosshairsUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrosshairsUtility_SetDefaultCrosshairInViewport_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrosshairsUtility_eventSetDefaultCrosshairInViewport_Parms, Payload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrosshairsUtility_SetDefaultCrosshairInViewport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrosshairsUtility_SetDefaultCrosshairInViewport_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairsUtility_SetDefaultCrosshairInViewport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrosshairsUtility_SetDefaultCrosshairInViewport_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCrosshairsUtility, nullptr, "SetDefaultCrosshairInViewport", Z_Construct_UFunction_UCrosshairsUtility_SetDefaultCrosshairInViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairsUtility_SetDefaultCrosshairInViewport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrosshairsUtility_SetDefaultCrosshairInViewport_Statics::CrosshairsUtility_eventSetDefaultCrosshairInViewport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairsUtility_SetDefaultCrosshairInViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrosshairsUtility_SetDefaultCrosshairInViewport_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCrosshairsUtility_SetDefaultCrosshairInViewport_Statics::CrosshairsUtility_eventSetDefaultCrosshairInViewport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrosshairsUtility_SetDefaultCrosshairInViewport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrosshairsUtility_SetDefaultCrosshairInViewport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrosshairsUtility::execSetDefaultCrosshairInViewport)
{
	P_GET_OBJECT(UObject,Z_Param_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCrosshairsUtility::SetDefaultCrosshairInViewport(Z_Param_Payload);
	P_NATIVE_END;
}
// ********** End Class UCrosshairsUtility Function SetDefaultCrosshairInViewport ******************

// ********** Begin Class UCrosshairsUtility Function ShowCrosshair ********************************
struct Z_Construct_UFunction_UCrosshairsUtility_ShowCrosshair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Crosshair|Utility" },
		{ "ModuleRelativePath", "Public/Utility/CrosshairsUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrosshairsUtility_ShowCrosshair_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCrosshairsUtility, nullptr, "ShowCrosshair", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairsUtility_ShowCrosshair_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrosshairsUtility_ShowCrosshair_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCrosshairsUtility_ShowCrosshair()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrosshairsUtility_ShowCrosshair_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrosshairsUtility::execShowCrosshair)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UCrosshairsUtility::ShowCrosshair();
	P_NATIVE_END;
}
// ********** End Class UCrosshairsUtility Function ShowCrosshair **********************************

// ********** Begin Class UCrosshairsUtility *******************************************************
void UCrosshairsUtility::StaticRegisterNativesUCrosshairsUtility()
{
	UClass* Class = UCrosshairsUtility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CloseCrosshairInViewport", &UCrosshairsUtility::execCloseCrosshairInViewport },
		{ "GetCurrentCrosshairWidget", &UCrosshairsUtility::execGetCurrentCrosshairWidget },
		{ "HideCrosshair", &UCrosshairsUtility::execHideCrosshair },
		{ "IsCrosshairVisible", &UCrosshairsUtility::execIsCrosshairVisible },
		{ "IsSwitchingCrosshairs", &UCrosshairsUtility::execIsSwitchingCrosshairs },
		{ "OpenCrosshairInViewport", &UCrosshairsUtility::execOpenCrosshairInViewport },
		{ "RemoveCrosshairFromViewport", &UCrosshairsUtility::execRemoveCrosshairFromViewport },
		{ "SetCrosshairInViewport", &UCrosshairsUtility::execSetCrosshairInViewport },
		{ "SetDefaultCrosshairInViewport", &UCrosshairsUtility::execSetDefaultCrosshairInViewport },
		{ "ShowCrosshair", &UCrosshairsUtility::execShowCrosshair },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCrosshairsUtility;
UClass* UCrosshairsUtility::GetPrivateStaticClass()
{
	using TClass = UCrosshairsUtility;
	if (!Z_Registration_Info_UClass_UCrosshairsUtility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CrosshairsUtility"),
			Z_Registration_Info_UClass_UCrosshairsUtility.InnerSingleton,
			StaticRegisterNativesUCrosshairsUtility,
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
	return Z_Registration_Info_UClass_UCrosshairsUtility.InnerSingleton;
}
UClass* Z_Construct_UClass_UCrosshairsUtility_NoRegister()
{
	return UCrosshairsUtility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCrosshairsUtility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Utility/CrosshairsUtility.h" },
		{ "ModuleRelativePath", "Public/Utility/CrosshairsUtility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCrosshairsUtility_CloseCrosshairInViewport, "CloseCrosshairInViewport" }, // 3710413527
		{ &Z_Construct_UFunction_UCrosshairsUtility_GetCurrentCrosshairWidget, "GetCurrentCrosshairWidget" }, // 3833157972
		{ &Z_Construct_UFunction_UCrosshairsUtility_HideCrosshair, "HideCrosshair" }, // 3250239684
		{ &Z_Construct_UFunction_UCrosshairsUtility_IsCrosshairVisible, "IsCrosshairVisible" }, // 1406739976
		{ &Z_Construct_UFunction_UCrosshairsUtility_IsSwitchingCrosshairs, "IsSwitchingCrosshairs" }, // 4278418292
		{ &Z_Construct_UFunction_UCrosshairsUtility_OpenCrosshairInViewport, "OpenCrosshairInViewport" }, // 3032550261
		{ &Z_Construct_UFunction_UCrosshairsUtility_RemoveCrosshairFromViewport, "RemoveCrosshairFromViewport" }, // 2931647365
		{ &Z_Construct_UFunction_UCrosshairsUtility_SetCrosshairInViewport, "SetCrosshairInViewport" }, // 1183808659
		{ &Z_Construct_UFunction_UCrosshairsUtility_SetDefaultCrosshairInViewport, "SetDefaultCrosshairInViewport" }, // 380836058
		{ &Z_Construct_UFunction_UCrosshairsUtility_ShowCrosshair, "ShowCrosshair" }, // 1069908590
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrosshairsUtility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCrosshairsUtility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_CrosshairSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrosshairsUtility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrosshairsUtility_Statics::ClassParams = {
	&UCrosshairsUtility::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrosshairsUtility_Statics::Class_MetaDataParams), Z_Construct_UClass_UCrosshairsUtility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCrosshairsUtility()
{
	if (!Z_Registration_Info_UClass_UCrosshairsUtility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrosshairsUtility.OuterSingleton, Z_Construct_UClass_UCrosshairsUtility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCrosshairsUtility.OuterSingleton;
}
UCrosshairsUtility::UCrosshairsUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCrosshairsUtility);
UCrosshairsUtility::~UCrosshairsUtility() {}
// ********** End Class UCrosshairsUtility *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Utility_CrosshairsUtility_h__Script_CrosshairSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCrosshairsUtility, UCrosshairsUtility::StaticClass, TEXT("UCrosshairsUtility"), &Z_Registration_Info_UClass_UCrosshairsUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrosshairsUtility), 214190460U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Utility_CrosshairsUtility_h__Script_CrosshairSystem_3954107143(TEXT("/Script/CrosshairSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Utility_CrosshairsUtility_h__Script_CrosshairSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Utility_CrosshairsUtility_h__Script_CrosshairSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
