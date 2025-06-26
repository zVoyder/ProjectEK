// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrosshairSubsystem.h"
#include "Engine/LocalPlayer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCrosshairSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
CROSSHAIRSYSTEM_API UClass* Z_Construct_UClass_UCrosshairSubsystem();
CROSSHAIRSYSTEM_API UClass* Z_Construct_UClass_UCrosshairSubsystem_NoRegister();
CROSSHAIRSYSTEM_API UClass* Z_Construct_UClass_UCrosshairSystemSettings_NoRegister();
CROSSHAIRSYSTEM_API UClass* Z_Construct_UClass_UCrosshairWidget_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_CrosshairSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCrosshairSubsystem Function CloseCrosshairInViewport ********************
struct Z_Construct_UFunction_UCrosshairSubsystem_CloseCrosshairInViewport_Statics
{
	struct CrosshairSubsystem_eventCloseCrosshairInViewport_Parms
	{
		bool bRemoveFromViewport;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bRemoveFromViewport", "false" },
		{ "ModuleRelativePath", "Public/CrosshairSubsystem.h" },
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
void Z_Construct_UFunction_UCrosshairSubsystem_CloseCrosshairInViewport_Statics::NewProp_bRemoveFromViewport_SetBit(void* Obj)
{
	((CrosshairSubsystem_eventCloseCrosshairInViewport_Parms*)Obj)->bRemoveFromViewport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrosshairSubsystem_CloseCrosshairInViewport_Statics::NewProp_bRemoveFromViewport = { "bRemoveFromViewport", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrosshairSubsystem_eventCloseCrosshairInViewport_Parms), &Z_Construct_UFunction_UCrosshairSubsystem_CloseCrosshairInViewport_Statics::NewProp_bRemoveFromViewport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveFromViewport_MetaData), NewProp_bRemoveFromViewport_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrosshairSubsystem_CloseCrosshairInViewport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrosshairSubsystem_CloseCrosshairInViewport_Statics::NewProp_bRemoveFromViewport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairSubsystem_CloseCrosshairInViewport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrosshairSubsystem_CloseCrosshairInViewport_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCrosshairSubsystem, nullptr, "CloseCrosshairInViewport", Z_Construct_UFunction_UCrosshairSubsystem_CloseCrosshairInViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairSubsystem_CloseCrosshairInViewport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrosshairSubsystem_CloseCrosshairInViewport_Statics::CrosshairSubsystem_eventCloseCrosshairInViewport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairSubsystem_CloseCrosshairInViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrosshairSubsystem_CloseCrosshairInViewport_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCrosshairSubsystem_CloseCrosshairInViewport_Statics::CrosshairSubsystem_eventCloseCrosshairInViewport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrosshairSubsystem_CloseCrosshairInViewport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrosshairSubsystem_CloseCrosshairInViewport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrosshairSubsystem::execCloseCrosshairInViewport)
{
	P_GET_UBOOL(Z_Param_bRemoveFromViewport);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseCrosshairInViewport(Z_Param_bRemoveFromViewport);
	P_NATIVE_END;
}
// ********** End Class UCrosshairSubsystem Function CloseCrosshairInViewport **********************

// ********** Begin Class UCrosshairSubsystem Function GetCurrentCrosshairWidget *******************
struct Z_Construct_UFunction_UCrosshairSubsystem_GetCurrentCrosshairWidget_Statics
{
	struct CrosshairSubsystem_eventGetCurrentCrosshairWidget_Parms
	{
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrosshairSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrosshairSubsystem_GetCurrentCrosshairWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrosshairSubsystem_eventGetCurrentCrosshairWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrosshairSubsystem_GetCurrentCrosshairWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrosshairSubsystem_GetCurrentCrosshairWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairSubsystem_GetCurrentCrosshairWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrosshairSubsystem_GetCurrentCrosshairWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCrosshairSubsystem, nullptr, "GetCurrentCrosshairWidget", Z_Construct_UFunction_UCrosshairSubsystem_GetCurrentCrosshairWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairSubsystem_GetCurrentCrosshairWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrosshairSubsystem_GetCurrentCrosshairWidget_Statics::CrosshairSubsystem_eventGetCurrentCrosshairWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairSubsystem_GetCurrentCrosshairWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrosshairSubsystem_GetCurrentCrosshairWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCrosshairSubsystem_GetCurrentCrosshairWidget_Statics::CrosshairSubsystem_eventGetCurrentCrosshairWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrosshairSubsystem_GetCurrentCrosshairWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrosshairSubsystem_GetCurrentCrosshairWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrosshairSubsystem::execGetCurrentCrosshairWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->GetCurrentCrosshairWidget();
	P_NATIVE_END;
}
// ********** End Class UCrosshairSubsystem Function GetCurrentCrosshairWidget *********************

// ********** Begin Class UCrosshairSubsystem Function HideCrosshair *******************************
struct Z_Construct_UFunction_UCrosshairSubsystem_HideCrosshair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrosshairSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrosshairSubsystem_HideCrosshair_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCrosshairSubsystem, nullptr, "HideCrosshair", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairSubsystem_HideCrosshair_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrosshairSubsystem_HideCrosshair_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCrosshairSubsystem_HideCrosshair()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrosshairSubsystem_HideCrosshair_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrosshairSubsystem::execHideCrosshair)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideCrosshair();
	P_NATIVE_END;
}
// ********** End Class UCrosshairSubsystem Function HideCrosshair *********************************

// ********** Begin Class UCrosshairSubsystem Function IsCrosshairVisible **************************
struct Z_Construct_UFunction_UCrosshairSubsystem_IsCrosshairVisible_Statics
{
	struct CrosshairSubsystem_eventIsCrosshairVisible_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrosshairSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCrosshairSubsystem_IsCrosshairVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CrosshairSubsystem_eventIsCrosshairVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrosshairSubsystem_IsCrosshairVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrosshairSubsystem_eventIsCrosshairVisible_Parms), &Z_Construct_UFunction_UCrosshairSubsystem_IsCrosshairVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrosshairSubsystem_IsCrosshairVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrosshairSubsystem_IsCrosshairVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairSubsystem_IsCrosshairVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrosshairSubsystem_IsCrosshairVisible_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCrosshairSubsystem, nullptr, "IsCrosshairVisible", Z_Construct_UFunction_UCrosshairSubsystem_IsCrosshairVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairSubsystem_IsCrosshairVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrosshairSubsystem_IsCrosshairVisible_Statics::CrosshairSubsystem_eventIsCrosshairVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairSubsystem_IsCrosshairVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrosshairSubsystem_IsCrosshairVisible_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCrosshairSubsystem_IsCrosshairVisible_Statics::CrosshairSubsystem_eventIsCrosshairVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrosshairSubsystem_IsCrosshairVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrosshairSubsystem_IsCrosshairVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrosshairSubsystem::execIsCrosshairVisible)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCrosshairVisible();
	P_NATIVE_END;
}
// ********** End Class UCrosshairSubsystem Function IsCrosshairVisible ****************************

// ********** Begin Class UCrosshairSubsystem Function IsSwitchingCrosshairs ***********************
struct Z_Construct_UFunction_UCrosshairSubsystem_IsSwitchingCrosshairs_Statics
{
	struct CrosshairSubsystem_eventIsSwitchingCrosshairs_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrosshairSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCrosshairSubsystem_IsSwitchingCrosshairs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CrosshairSubsystem_eventIsSwitchingCrosshairs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrosshairSubsystem_IsSwitchingCrosshairs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrosshairSubsystem_eventIsSwitchingCrosshairs_Parms), &Z_Construct_UFunction_UCrosshairSubsystem_IsSwitchingCrosshairs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrosshairSubsystem_IsSwitchingCrosshairs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrosshairSubsystem_IsSwitchingCrosshairs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairSubsystem_IsSwitchingCrosshairs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrosshairSubsystem_IsSwitchingCrosshairs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCrosshairSubsystem, nullptr, "IsSwitchingCrosshairs", Z_Construct_UFunction_UCrosshairSubsystem_IsSwitchingCrosshairs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairSubsystem_IsSwitchingCrosshairs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrosshairSubsystem_IsSwitchingCrosshairs_Statics::CrosshairSubsystem_eventIsSwitchingCrosshairs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairSubsystem_IsSwitchingCrosshairs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrosshairSubsystem_IsSwitchingCrosshairs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCrosshairSubsystem_IsSwitchingCrosshairs_Statics::CrosshairSubsystem_eventIsSwitchingCrosshairs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrosshairSubsystem_IsSwitchingCrosshairs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrosshairSubsystem_IsSwitchingCrosshairs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrosshairSubsystem::execIsSwitchingCrosshairs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSwitchingCrosshairs();
	P_NATIVE_END;
}
// ********** End Class UCrosshairSubsystem Function IsSwitchingCrosshairs *************************

// ********** Begin Class UCrosshairSubsystem Function OnCompleteSwitchCrosshairs ******************
struct Z_Construct_UFunction_UCrosshairSubsystem_OnCompleteSwitchCrosshairs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrosshairSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrosshairSubsystem_OnCompleteSwitchCrosshairs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCrosshairSubsystem, nullptr, "OnCompleteSwitchCrosshairs", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairSubsystem_OnCompleteSwitchCrosshairs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrosshairSubsystem_OnCompleteSwitchCrosshairs_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCrosshairSubsystem_OnCompleteSwitchCrosshairs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrosshairSubsystem_OnCompleteSwitchCrosshairs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrosshairSubsystem::execOnCompleteSwitchCrosshairs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCompleteSwitchCrosshairs();
	P_NATIVE_END;
}
// ********** End Class UCrosshairSubsystem Function OnCompleteSwitchCrosshairs ********************

// ********** Begin Class UCrosshairSubsystem Function OnSwitchCrosshairs **************************
struct Z_Construct_UFunction_UCrosshairSubsystem_OnSwitchCrosshairs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrosshairSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrosshairSubsystem_OnSwitchCrosshairs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCrosshairSubsystem, nullptr, "OnSwitchCrosshairs", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairSubsystem_OnSwitchCrosshairs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrosshairSubsystem_OnSwitchCrosshairs_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCrosshairSubsystem_OnSwitchCrosshairs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrosshairSubsystem_OnSwitchCrosshairs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrosshairSubsystem::execOnSwitchCrosshairs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSwitchCrosshairs();
	P_NATIVE_END;
}
// ********** End Class UCrosshairSubsystem Function OnSwitchCrosshairs ****************************

// ********** Begin Class UCrosshairSubsystem Function OpenCrosshairInViewport *********************
struct Z_Construct_UFunction_UCrosshairSubsystem_OpenCrosshairInViewport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrosshairSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrosshairSubsystem_OpenCrosshairInViewport_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCrosshairSubsystem, nullptr, "OpenCrosshairInViewport", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairSubsystem_OpenCrosshairInViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrosshairSubsystem_OpenCrosshairInViewport_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCrosshairSubsystem_OpenCrosshairInViewport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrosshairSubsystem_OpenCrosshairInViewport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrosshairSubsystem::execOpenCrosshairInViewport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenCrosshairInViewport();
	P_NATIVE_END;
}
// ********** End Class UCrosshairSubsystem Function OpenCrosshairInViewport ***********************

// ********** Begin Class UCrosshairSubsystem Function RemoveCrosshairFromViewport *****************
struct Z_Construct_UFunction_UCrosshairSubsystem_RemoveCrosshairFromViewport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrosshairSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrosshairSubsystem_RemoveCrosshairFromViewport_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCrosshairSubsystem, nullptr, "RemoveCrosshairFromViewport", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairSubsystem_RemoveCrosshairFromViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrosshairSubsystem_RemoveCrosshairFromViewport_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCrosshairSubsystem_RemoveCrosshairFromViewport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrosshairSubsystem_RemoveCrosshairFromViewport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrosshairSubsystem::execRemoveCrosshairFromViewport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveCrosshairFromViewport();
	P_NATIVE_END;
}
// ********** End Class UCrosshairSubsystem Function RemoveCrosshairFromViewport *******************

// ********** Begin Class UCrosshairSubsystem Function SetCrosshairInViewport **********************
struct Z_Construct_UFunction_UCrosshairSubsystem_SetCrosshairInViewport_Statics
{
	struct CrosshairSubsystem_eventSetCrosshairInViewport_Parms
	{
		const TSubclassOf<UCrosshairWidget> CrosshairWidgetClass;
		UObject* Payload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_Payload", "None" },
		{ "ModuleRelativePath", "Public/CrosshairSubsystem.h" },
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
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCrosshairSubsystem_SetCrosshairInViewport_Statics::NewProp_CrosshairWidgetClass = { "CrosshairWidgetClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrosshairSubsystem_eventSetCrosshairInViewport_Parms, CrosshairWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCrosshairWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosshairWidgetClass_MetaData), NewProp_CrosshairWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrosshairSubsystem_SetCrosshairInViewport_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrosshairSubsystem_eventSetCrosshairInViewport_Parms, Payload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrosshairSubsystem_SetCrosshairInViewport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrosshairSubsystem_SetCrosshairInViewport_Statics::NewProp_CrosshairWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrosshairSubsystem_SetCrosshairInViewport_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairSubsystem_SetCrosshairInViewport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrosshairSubsystem_SetCrosshairInViewport_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCrosshairSubsystem, nullptr, "SetCrosshairInViewport", Z_Construct_UFunction_UCrosshairSubsystem_SetCrosshairInViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairSubsystem_SetCrosshairInViewport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrosshairSubsystem_SetCrosshairInViewport_Statics::CrosshairSubsystem_eventSetCrosshairInViewport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairSubsystem_SetCrosshairInViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrosshairSubsystem_SetCrosshairInViewport_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCrosshairSubsystem_SetCrosshairInViewport_Statics::CrosshairSubsystem_eventSetCrosshairInViewport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrosshairSubsystem_SetCrosshairInViewport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrosshairSubsystem_SetCrosshairInViewport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrosshairSubsystem::execSetCrosshairInViewport)
{
	P_GET_OBJECT(UClass,Z_Param_CrosshairWidgetClass);
	P_GET_OBJECT(UObject,Z_Param_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCrosshairInViewport(Z_Param_CrosshairWidgetClass,Z_Param_Payload);
	P_NATIVE_END;
}
// ********** End Class UCrosshairSubsystem Function SetCrosshairInViewport ************************

// ********** Begin Class UCrosshairSubsystem Function SetDefaultCrosshairInViewport ***************
struct Z_Construct_UFunction_UCrosshairSubsystem_SetDefaultCrosshairInViewport_Statics
{
	struct CrosshairSubsystem_eventSetDefaultCrosshairInViewport_Parms
	{
		UObject* Payload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_Payload", "None" },
		{ "ModuleRelativePath", "Public/CrosshairSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrosshairSubsystem_SetDefaultCrosshairInViewport_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrosshairSubsystem_eventSetDefaultCrosshairInViewport_Parms, Payload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrosshairSubsystem_SetDefaultCrosshairInViewport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrosshairSubsystem_SetDefaultCrosshairInViewport_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairSubsystem_SetDefaultCrosshairInViewport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrosshairSubsystem_SetDefaultCrosshairInViewport_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCrosshairSubsystem, nullptr, "SetDefaultCrosshairInViewport", Z_Construct_UFunction_UCrosshairSubsystem_SetDefaultCrosshairInViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairSubsystem_SetDefaultCrosshairInViewport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrosshairSubsystem_SetDefaultCrosshairInViewport_Statics::CrosshairSubsystem_eventSetDefaultCrosshairInViewport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairSubsystem_SetDefaultCrosshairInViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrosshairSubsystem_SetDefaultCrosshairInViewport_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCrosshairSubsystem_SetDefaultCrosshairInViewport_Statics::CrosshairSubsystem_eventSetDefaultCrosshairInViewport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrosshairSubsystem_SetDefaultCrosshairInViewport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrosshairSubsystem_SetDefaultCrosshairInViewport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrosshairSubsystem::execSetDefaultCrosshairInViewport)
{
	P_GET_OBJECT(UObject,Z_Param_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefaultCrosshairInViewport(Z_Param_Payload);
	P_NATIVE_END;
}
// ********** End Class UCrosshairSubsystem Function SetDefaultCrosshairInViewport *****************

// ********** Begin Class UCrosshairSubsystem Function ShowCrosshair *******************************
struct Z_Construct_UFunction_UCrosshairSubsystem_ShowCrosshair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrosshairSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrosshairSubsystem_ShowCrosshair_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCrosshairSubsystem, nullptr, "ShowCrosshair", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrosshairSubsystem_ShowCrosshair_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrosshairSubsystem_ShowCrosshair_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCrosshairSubsystem_ShowCrosshair()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrosshairSubsystem_ShowCrosshair_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCrosshairSubsystem::execShowCrosshair)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowCrosshair();
	P_NATIVE_END;
}
// ********** End Class UCrosshairSubsystem Function ShowCrosshair *********************************

// ********** Begin Class UCrosshairSubsystem ******************************************************
void UCrosshairSubsystem::StaticRegisterNativesUCrosshairSubsystem()
{
	UClass* Class = UCrosshairSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CloseCrosshairInViewport", &UCrosshairSubsystem::execCloseCrosshairInViewport },
		{ "GetCurrentCrosshairWidget", &UCrosshairSubsystem::execGetCurrentCrosshairWidget },
		{ "HideCrosshair", &UCrosshairSubsystem::execHideCrosshair },
		{ "IsCrosshairVisible", &UCrosshairSubsystem::execIsCrosshairVisible },
		{ "IsSwitchingCrosshairs", &UCrosshairSubsystem::execIsSwitchingCrosshairs },
		{ "OnCompleteSwitchCrosshairs", &UCrosshairSubsystem::execOnCompleteSwitchCrosshairs },
		{ "OnSwitchCrosshairs", &UCrosshairSubsystem::execOnSwitchCrosshairs },
		{ "OpenCrosshairInViewport", &UCrosshairSubsystem::execOpenCrosshairInViewport },
		{ "RemoveCrosshairFromViewport", &UCrosshairSubsystem::execRemoveCrosshairFromViewport },
		{ "SetCrosshairInViewport", &UCrosshairSubsystem::execSetCrosshairInViewport },
		{ "SetDefaultCrosshairInViewport", &UCrosshairSubsystem::execSetDefaultCrosshairInViewport },
		{ "ShowCrosshair", &UCrosshairSubsystem::execShowCrosshair },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCrosshairSubsystem;
UClass* UCrosshairSubsystem::GetPrivateStaticClass()
{
	using TClass = UCrosshairSubsystem;
	if (!Z_Registration_Info_UClass_UCrosshairSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CrosshairSubsystem"),
			Z_Registration_Info_UClass_UCrosshairSubsystem.InnerSingleton,
			StaticRegisterNativesUCrosshairSubsystem,
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
	return Z_Registration_Info_UClass_UCrosshairSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UCrosshairSubsystem_NoRegister()
{
	return UCrosshairSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCrosshairSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CrosshairSubsystem.h" },
		{ "ModuleRelativePath", "Public/CrosshairSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCrosshairWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CrosshairSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCrosshairWidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrosshairSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCrosshairWidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrosshairSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCrosshairPayload_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrosshairSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrosshairSubsystem.h" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCrosshairWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CurrentCrosshairWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultCrosshairWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCrosshairPayload;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCrosshairSubsystem_CloseCrosshairInViewport, "CloseCrosshairInViewport" }, // 867029465
		{ &Z_Construct_UFunction_UCrosshairSubsystem_GetCurrentCrosshairWidget, "GetCurrentCrosshairWidget" }, // 2248231382
		{ &Z_Construct_UFunction_UCrosshairSubsystem_HideCrosshair, "HideCrosshair" }, // 1679108467
		{ &Z_Construct_UFunction_UCrosshairSubsystem_IsCrosshairVisible, "IsCrosshairVisible" }, // 3987753347
		{ &Z_Construct_UFunction_UCrosshairSubsystem_IsSwitchingCrosshairs, "IsSwitchingCrosshairs" }, // 3222888114
		{ &Z_Construct_UFunction_UCrosshairSubsystem_OnCompleteSwitchCrosshairs, "OnCompleteSwitchCrosshairs" }, // 3612255146
		{ &Z_Construct_UFunction_UCrosshairSubsystem_OnSwitchCrosshairs, "OnSwitchCrosshairs" }, // 2012485685
		{ &Z_Construct_UFunction_UCrosshairSubsystem_OpenCrosshairInViewport, "OpenCrosshairInViewport" }, // 460360071
		{ &Z_Construct_UFunction_UCrosshairSubsystem_RemoveCrosshairFromViewport, "RemoveCrosshairFromViewport" }, // 2022396420
		{ &Z_Construct_UFunction_UCrosshairSubsystem_SetCrosshairInViewport, "SetCrosshairInViewport" }, // 2997466723
		{ &Z_Construct_UFunction_UCrosshairSubsystem_SetDefaultCrosshairInViewport, "SetDefaultCrosshairInViewport" }, // 1098347526
		{ &Z_Construct_UFunction_UCrosshairSubsystem_ShowCrosshair, "ShowCrosshair" }, // 1533568368
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrosshairSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCrosshairSubsystem_Statics::NewProp_CurrentCrosshairWidget = { "CurrentCrosshairWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrosshairSubsystem, CurrentCrosshairWidget), Z_Construct_UClass_UCrosshairWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCrosshairWidget_MetaData), NewProp_CurrentCrosshairWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCrosshairSubsystem_Statics::NewProp_CurrentCrosshairWidgetClass = { "CurrentCrosshairWidgetClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrosshairSubsystem, CurrentCrosshairWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCrosshairWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCrosshairWidgetClass_MetaData), NewProp_CurrentCrosshairWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCrosshairSubsystem_Statics::NewProp_DefaultCrosshairWidgetClass = { "DefaultCrosshairWidgetClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrosshairSubsystem, DefaultCrosshairWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCrosshairWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCrosshairWidgetClass_MetaData), NewProp_DefaultCrosshairWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCrosshairSubsystem_Statics::NewProp_CurrentCrosshairPayload = { "CurrentCrosshairPayload", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrosshairSubsystem, CurrentCrosshairPayload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCrosshairPayload_MetaData), NewProp_CurrentCrosshairPayload_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCrosshairSubsystem_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrosshairSubsystem, Settings), Z_Construct_UClass_UCrosshairSystemSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrosshairSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrosshairSubsystem_Statics::NewProp_CurrentCrosshairWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrosshairSubsystem_Statics::NewProp_CurrentCrosshairWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrosshairSubsystem_Statics::NewProp_DefaultCrosshairWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrosshairSubsystem_Statics::NewProp_CurrentCrosshairPayload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrosshairSubsystem_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrosshairSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCrosshairSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_CrosshairSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrosshairSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrosshairSubsystem_Statics::ClassParams = {
	&UCrosshairSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCrosshairSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCrosshairSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrosshairSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UCrosshairSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCrosshairSubsystem()
{
	if (!Z_Registration_Info_UClass_UCrosshairSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrosshairSubsystem.OuterSingleton, Z_Construct_UClass_UCrosshairSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCrosshairSubsystem.OuterSingleton;
}
UCrosshairSubsystem::UCrosshairSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCrosshairSubsystem);
UCrosshairSubsystem::~UCrosshairSubsystem() {}
// ********** End Class UCrosshairSubsystem ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairSubsystem_h__Script_CrosshairSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCrosshairSubsystem, UCrosshairSubsystem::StaticClass, TEXT("UCrosshairSubsystem"), &Z_Registration_Info_UClass_UCrosshairSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrosshairSubsystem), 1843977784U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairSubsystem_h__Script_CrosshairSystem_154610388(TEXT("/Script/CrosshairSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairSubsystem_h__Script_CrosshairSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairSubsystem_h__Script_CrosshairSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
