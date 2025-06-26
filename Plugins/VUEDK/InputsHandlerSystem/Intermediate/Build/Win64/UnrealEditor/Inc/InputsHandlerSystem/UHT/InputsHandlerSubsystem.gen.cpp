// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputsHandlerSubsystem.h"
#include "Engine/LocalPlayer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInputsHandlerSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInputDeviceId();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformUserId();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceSubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
INPUTSHANDLERSYSTEM_API UClass* Z_Construct_UClass_UInputsHandlerSubsystem();
INPUTSHANDLERSYSTEM_API UClass* Z_Construct_UClass_UInputsHandlerSubsystem_NoRegister();
INPUTSHANDLERSYSTEM_API UClass* Z_Construct_UClass_UInputsHandlerSystemSettings_NoRegister();
INPUTSHANDLERSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InputsHandlerSystem_OnGampleayMappingContextSet__DelegateSignature();
INPUTSHANDLERSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InputsHandlerSystem_OnUIMappingContextSet__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_InputsHandlerSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnGampleayMappingContextSet ******************************************
struct Z_Construct_UDelegateFunction_InputsHandlerSystem_OnGampleayMappingContextSet__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InputsHandlerSystem_OnGampleayMappingContextSet__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InputsHandlerSystem, nullptr, "OnGampleayMappingContextSet__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InputsHandlerSystem_OnGampleayMappingContextSet__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InputsHandlerSystem_OnGampleayMappingContextSet__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_InputsHandlerSystem_OnGampleayMappingContextSet__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InputsHandlerSystem_OnGampleayMappingContextSet__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGampleayMappingContextSet_DelegateWrapper(const FMulticastScriptDelegate& OnGampleayMappingContextSet)
{
	OnGampleayMappingContextSet.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnGampleayMappingContextSet ********************************************

// ********** Begin Delegate FOnUIMappingContextSet ************************************************
struct Z_Construct_UDelegateFunction_InputsHandlerSystem_OnUIMappingContextSet__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InputsHandlerSystem_OnUIMappingContextSet__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InputsHandlerSystem, nullptr, "OnUIMappingContextSet__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InputsHandlerSystem_OnUIMappingContextSet__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InputsHandlerSystem_OnUIMappingContextSet__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_InputsHandlerSystem_OnUIMappingContextSet__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InputsHandlerSystem_OnUIMappingContextSet__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUIMappingContextSet_DelegateWrapper(const FMulticastScriptDelegate& OnUIMappingContextSet)
{
	OnUIMappingContextSet.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnUIMappingContextSet **************************************************

// ********** Begin Class UInputsHandlerSubsystem Function AddCommonMappingContext *****************
struct Z_Construct_UFunction_UInputsHandlerSubsystem_AddCommonMappingContext_Statics
{
	struct InputsHandlerSubsystem_eventAddCommonMappingContext_Parms
	{
		UInputMappingContext* MappingContext;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputsHandlerSubsystem_AddCommonMappingContext_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputsHandlerSubsystem_eventAddCommonMappingContext_Parms, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputsHandlerSubsystem_AddCommonMappingContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerSubsystem_AddCommonMappingContext_Statics::NewProp_MappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_AddCommonMappingContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputsHandlerSubsystem_AddCommonMappingContext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputsHandlerSubsystem, nullptr, "AddCommonMappingContext", Z_Construct_UFunction_UInputsHandlerSubsystem_AddCommonMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_AddCommonMappingContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_AddCommonMappingContext_Statics::InputsHandlerSubsystem_eventAddCommonMappingContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_AddCommonMappingContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputsHandlerSubsystem_AddCommonMappingContext_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_AddCommonMappingContext_Statics::InputsHandlerSubsystem_eventAddCommonMappingContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputsHandlerSubsystem_AddCommonMappingContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputsHandlerSubsystem_AddCommonMappingContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputsHandlerSubsystem::execAddCommonMappingContext)
{
	P_GET_OBJECT(UInputMappingContext,Z_Param_MappingContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCommonMappingContext(Z_Param_MappingContext);
	P_NATIVE_END;
}
// ********** End Class UInputsHandlerSubsystem Function AddCommonMappingContext *******************

// ********** Begin Class UInputsHandlerSubsystem Function AddExcludedMappingContext ***************
struct Z_Construct_UFunction_UInputsHandlerSubsystem_AddExcludedMappingContext_Statics
{
	struct InputsHandlerSubsystem_eventAddExcludedMappingContext_Parms
	{
		UInputMappingContext* MappingContext;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputsHandlerSubsystem_AddExcludedMappingContext_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputsHandlerSubsystem_eventAddExcludedMappingContext_Parms, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputsHandlerSubsystem_AddExcludedMappingContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerSubsystem_AddExcludedMappingContext_Statics::NewProp_MappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_AddExcludedMappingContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputsHandlerSubsystem_AddExcludedMappingContext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputsHandlerSubsystem, nullptr, "AddExcludedMappingContext", Z_Construct_UFunction_UInputsHandlerSubsystem_AddExcludedMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_AddExcludedMappingContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_AddExcludedMappingContext_Statics::InputsHandlerSubsystem_eventAddExcludedMappingContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_AddExcludedMappingContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputsHandlerSubsystem_AddExcludedMappingContext_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_AddExcludedMappingContext_Statics::InputsHandlerSubsystem_eventAddExcludedMappingContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputsHandlerSubsystem_AddExcludedMappingContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputsHandlerSubsystem_AddExcludedMappingContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputsHandlerSubsystem::execAddExcludedMappingContext)
{
	P_GET_OBJECT(UInputMappingContext,Z_Param_MappingContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddExcludedMappingContext(Z_Param_MappingContext);
	P_NATIVE_END;
}
// ********** End Class UInputsHandlerSubsystem Function AddExcludedMappingContext *****************

// ********** Begin Class UInputsHandlerSubsystem Function AddGameplayMappingContext ***************
struct Z_Construct_UFunction_UInputsHandlerSubsystem_AddGameplayMappingContext_Statics
{
	struct InputsHandlerSubsystem_eventAddGameplayMappingContext_Parms
	{
		UInputMappingContext* MappingContext;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputsHandlerSubsystem_AddGameplayMappingContext_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputsHandlerSubsystem_eventAddGameplayMappingContext_Parms, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputsHandlerSubsystem_AddGameplayMappingContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerSubsystem_AddGameplayMappingContext_Statics::NewProp_MappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_AddGameplayMappingContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputsHandlerSubsystem_AddGameplayMappingContext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputsHandlerSubsystem, nullptr, "AddGameplayMappingContext", Z_Construct_UFunction_UInputsHandlerSubsystem_AddGameplayMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_AddGameplayMappingContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_AddGameplayMappingContext_Statics::InputsHandlerSubsystem_eventAddGameplayMappingContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_AddGameplayMappingContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputsHandlerSubsystem_AddGameplayMappingContext_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_AddGameplayMappingContext_Statics::InputsHandlerSubsystem_eventAddGameplayMappingContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputsHandlerSubsystem_AddGameplayMappingContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputsHandlerSubsystem_AddGameplayMappingContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputsHandlerSubsystem::execAddGameplayMappingContext)
{
	P_GET_OBJECT(UInputMappingContext,Z_Param_MappingContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddGameplayMappingContext(Z_Param_MappingContext);
	P_NATIVE_END;
}
// ********** End Class UInputsHandlerSubsystem Function AddGameplayMappingContext *****************

// ********** Begin Class UInputsHandlerSubsystem Function AddUIMappingContext *********************
struct Z_Construct_UFunction_UInputsHandlerSubsystem_AddUIMappingContext_Statics
{
	struct InputsHandlerSubsystem_eventAddUIMappingContext_Parms
	{
		UInputMappingContext* MappingContext;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputsHandlerSubsystem_AddUIMappingContext_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputsHandlerSubsystem_eventAddUIMappingContext_Parms, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputsHandlerSubsystem_AddUIMappingContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerSubsystem_AddUIMappingContext_Statics::NewProp_MappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_AddUIMappingContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputsHandlerSubsystem_AddUIMappingContext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputsHandlerSubsystem, nullptr, "AddUIMappingContext", Z_Construct_UFunction_UInputsHandlerSubsystem_AddUIMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_AddUIMappingContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_AddUIMappingContext_Statics::InputsHandlerSubsystem_eventAddUIMappingContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_AddUIMappingContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputsHandlerSubsystem_AddUIMappingContext_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_AddUIMappingContext_Statics::InputsHandlerSubsystem_eventAddUIMappingContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputsHandlerSubsystem_AddUIMappingContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputsHandlerSubsystem_AddUIMappingContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputsHandlerSubsystem::execAddUIMappingContext)
{
	P_GET_OBJECT(UInputMappingContext,Z_Param_MappingContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddUIMappingContext(Z_Param_MappingContext);
	P_NATIVE_END;
}
// ********** End Class UInputsHandlerSubsystem Function AddUIMappingContext ***********************

// ********** Begin Class UInputsHandlerSubsystem Function CheckUsingGamepad ***********************
struct Z_Construct_UFunction_UInputsHandlerSubsystem_CheckUsingGamepad_Statics
{
	struct FInputDeviceId
	{
		int32 InternalId;
	};

	struct FPlatformUserId
	{
		int32 InternalId;
	};

	struct InputsHandlerSubsystem_eventCheckUsingGamepad_Parms
	{
		FPlatformUserId UserId;
		FInputDeviceId DeviceId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputsHandlerSubsystem_CheckUsingGamepad_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputsHandlerSubsystem_eventCheckUsingGamepad_Parms, UserId), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputsHandlerSubsystem_CheckUsingGamepad_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputsHandlerSubsystem_eventCheckUsingGamepad_Parms, DeviceId), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceId_MetaData), NewProp_DeviceId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputsHandlerSubsystem_CheckUsingGamepad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerSubsystem_CheckUsingGamepad_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerSubsystem_CheckUsingGamepad_Statics::NewProp_DeviceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_CheckUsingGamepad_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputsHandlerSubsystem_CheckUsingGamepad_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputsHandlerSubsystem, nullptr, "CheckUsingGamepad", Z_Construct_UFunction_UInputsHandlerSubsystem_CheckUsingGamepad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_CheckUsingGamepad_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_CheckUsingGamepad_Statics::InputsHandlerSubsystem_eventCheckUsingGamepad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_CheckUsingGamepad_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputsHandlerSubsystem_CheckUsingGamepad_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_CheckUsingGamepad_Statics::InputsHandlerSubsystem_eventCheckUsingGamepad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputsHandlerSubsystem_CheckUsingGamepad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputsHandlerSubsystem_CheckUsingGamepad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputsHandlerSubsystem::execCheckUsingGamepad)
{
	P_GET_STRUCT(FPlatformUserId,Z_Param_UserId);
	P_GET_STRUCT(FInputDeviceId,Z_Param_DeviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckUsingGamepad(Z_Param_UserId,Z_Param_DeviceId);
	P_NATIVE_END;
}
// ********** End Class UInputsHandlerSubsystem Function CheckUsingGamepad *************************

// ********** Begin Class UInputsHandlerSubsystem Function GetAllMappingContexts *******************
struct Z_Construct_UFunction_UInputsHandlerSubsystem_GetAllMappingContexts_Statics
{
	struct InputsHandlerSubsystem_eventGetAllMappingContexts_Parms
	{
		TArray<UInputMappingContext*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputsHandlerSubsystem_GetAllMappingContexts_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputsHandlerSubsystem_GetAllMappingContexts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputsHandlerSubsystem_eventGetAllMappingContexts_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputsHandlerSubsystem_GetAllMappingContexts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerSubsystem_GetAllMappingContexts_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerSubsystem_GetAllMappingContexts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_GetAllMappingContexts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputsHandlerSubsystem_GetAllMappingContexts_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputsHandlerSubsystem, nullptr, "GetAllMappingContexts", Z_Construct_UFunction_UInputsHandlerSubsystem_GetAllMappingContexts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_GetAllMappingContexts_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_GetAllMappingContexts_Statics::InputsHandlerSubsystem_eventGetAllMappingContexts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_GetAllMappingContexts_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputsHandlerSubsystem_GetAllMappingContexts_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_GetAllMappingContexts_Statics::InputsHandlerSubsystem_eventGetAllMappingContexts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputsHandlerSubsystem_GetAllMappingContexts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputsHandlerSubsystem_GetAllMappingContexts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputsHandlerSubsystem::execGetAllMappingContexts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UInputMappingContext*>*)Z_Param__Result=P_THIS->GetAllMappingContexts();
	P_NATIVE_END;
}
// ********** End Class UInputsHandlerSubsystem Function GetAllMappingContexts *********************

// ********** Begin Class UInputsHandlerSubsystem Function GetCommonMappingContexts ****************
struct Z_Construct_UFunction_UInputsHandlerSubsystem_GetCommonMappingContexts_Statics
{
	struct InputsHandlerSubsystem_eventGetCommonMappingContexts_Parms
	{
		TArray<UInputMappingContext*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputsHandlerSubsystem_GetCommonMappingContexts_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputsHandlerSubsystem_GetCommonMappingContexts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputsHandlerSubsystem_eventGetCommonMappingContexts_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputsHandlerSubsystem_GetCommonMappingContexts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerSubsystem_GetCommonMappingContexts_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerSubsystem_GetCommonMappingContexts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_GetCommonMappingContexts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputsHandlerSubsystem_GetCommonMappingContexts_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputsHandlerSubsystem, nullptr, "GetCommonMappingContexts", Z_Construct_UFunction_UInputsHandlerSubsystem_GetCommonMappingContexts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_GetCommonMappingContexts_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_GetCommonMappingContexts_Statics::InputsHandlerSubsystem_eventGetCommonMappingContexts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_GetCommonMappingContexts_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputsHandlerSubsystem_GetCommonMappingContexts_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_GetCommonMappingContexts_Statics::InputsHandlerSubsystem_eventGetCommonMappingContexts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputsHandlerSubsystem_GetCommonMappingContexts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputsHandlerSubsystem_GetCommonMappingContexts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputsHandlerSubsystem::execGetCommonMappingContexts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UInputMappingContext*>*)Z_Param__Result=P_THIS->GetCommonMappingContexts();
	P_NATIVE_END;
}
// ********** End Class UInputsHandlerSubsystem Function GetCommonMappingContexts ******************

// ********** Begin Class UInputsHandlerSubsystem Function GetEnhancedInputUserSettings ************
struct Z_Construct_UFunction_UInputsHandlerSubsystem_GetEnhancedInputUserSettings_Statics
{
	struct InputsHandlerSubsystem_eventGetEnhancedInputUserSettings_Parms
	{
		UEnhancedInputUserSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputsHandlerSubsystem_GetEnhancedInputUserSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputsHandlerSubsystem_eventGetEnhancedInputUserSettings_Parms, ReturnValue), Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputsHandlerSubsystem_GetEnhancedInputUserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerSubsystem_GetEnhancedInputUserSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_GetEnhancedInputUserSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputsHandlerSubsystem_GetEnhancedInputUserSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputsHandlerSubsystem, nullptr, "GetEnhancedInputUserSettings", Z_Construct_UFunction_UInputsHandlerSubsystem_GetEnhancedInputUserSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_GetEnhancedInputUserSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_GetEnhancedInputUserSettings_Statics::InputsHandlerSubsystem_eventGetEnhancedInputUserSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_GetEnhancedInputUserSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputsHandlerSubsystem_GetEnhancedInputUserSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_GetEnhancedInputUserSettings_Statics::InputsHandlerSubsystem_eventGetEnhancedInputUserSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputsHandlerSubsystem_GetEnhancedInputUserSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputsHandlerSubsystem_GetEnhancedInputUserSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputsHandlerSubsystem::execGetEnhancedInputUserSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEnhancedInputUserSettings**)Z_Param__Result=P_THIS->GetEnhancedInputUserSettings();
	P_NATIVE_END;
}
// ********** End Class UInputsHandlerSubsystem Function GetEnhancedInputUserSettings **************

// ********** Begin Class UInputsHandlerSubsystem Function GetGameplayMappingContext ***************
struct Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContext_Statics
{
	struct InputsHandlerSubsystem_eventGetGameplayMappingContext_Parms
	{
		int32 Index;
		UInputMappingContext* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContext_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputsHandlerSubsystem_eventGetGameplayMappingContext_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputsHandlerSubsystem_eventGetGameplayMappingContext_Parms, ReturnValue), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContext_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputsHandlerSubsystem, nullptr, "GetGameplayMappingContext", Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContext_Statics::InputsHandlerSubsystem_eventGetGameplayMappingContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContext_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContext_Statics::InputsHandlerSubsystem_eventGetGameplayMappingContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputsHandlerSubsystem::execGetGameplayMappingContext)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInputMappingContext**)Z_Param__Result=P_THIS->GetGameplayMappingContext(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UInputsHandlerSubsystem Function GetGameplayMappingContext *****************

// ********** Begin Class UInputsHandlerSubsystem Function GetGameplayMappingContexts **************
struct Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContexts_Statics
{
	struct InputsHandlerSubsystem_eventGetGameplayMappingContexts_Parms
	{
		TArray<UInputMappingContext*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContexts_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContexts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputsHandlerSubsystem_eventGetGameplayMappingContexts_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContexts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContexts_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContexts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContexts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContexts_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputsHandlerSubsystem, nullptr, "GetGameplayMappingContexts", Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContexts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContexts_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContexts_Statics::InputsHandlerSubsystem_eventGetGameplayMappingContexts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContexts_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContexts_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContexts_Statics::InputsHandlerSubsystem_eventGetGameplayMappingContexts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContexts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContexts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputsHandlerSubsystem::execGetGameplayMappingContexts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UInputMappingContext*>*)Z_Param__Result=P_THIS->GetGameplayMappingContexts();
	P_NATIVE_END;
}
// ********** End Class UInputsHandlerSubsystem Function GetGameplayMappingContexts ****************

// ********** Begin Class UInputsHandlerSubsystem Function GetNormalizedMousePosition **************
struct Z_Construct_UFunction_UInputsHandlerSubsystem_GetNormalizedMousePosition_Statics
{
	struct InputsHandlerSubsystem_eventGetNormalizedMousePosition_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputsHandlerSubsystem_GetNormalizedMousePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputsHandlerSubsystem_eventGetNormalizedMousePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputsHandlerSubsystem_GetNormalizedMousePosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerSubsystem_GetNormalizedMousePosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_GetNormalizedMousePosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputsHandlerSubsystem_GetNormalizedMousePosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputsHandlerSubsystem, nullptr, "GetNormalizedMousePosition", Z_Construct_UFunction_UInputsHandlerSubsystem_GetNormalizedMousePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_GetNormalizedMousePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_GetNormalizedMousePosition_Statics::InputsHandlerSubsystem_eventGetNormalizedMousePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_GetNormalizedMousePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputsHandlerSubsystem_GetNormalizedMousePosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_GetNormalizedMousePosition_Statics::InputsHandlerSubsystem_eventGetNormalizedMousePosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputsHandlerSubsystem_GetNormalizedMousePosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputsHandlerSubsystem_GetNormalizedMousePosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputsHandlerSubsystem::execGetNormalizedMousePosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetNormalizedMousePosition();
	P_NATIVE_END;
}
// ********** End Class UInputsHandlerSubsystem Function GetNormalizedMousePosition ****************

// ********** Begin Class UInputsHandlerSubsystem Function GetUIMappingContext *********************
struct Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContext_Statics
{
	struct InputsHandlerSubsystem_eventGetUIMappingContext_Parms
	{
		int32 Index;
		UInputMappingContext* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContext_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputsHandlerSubsystem_eventGetUIMappingContext_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputsHandlerSubsystem_eventGetUIMappingContext_Parms, ReturnValue), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContext_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputsHandlerSubsystem, nullptr, "GetUIMappingContext", Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContext_Statics::InputsHandlerSubsystem_eventGetUIMappingContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContext_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContext_Statics::InputsHandlerSubsystem_eventGetUIMappingContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputsHandlerSubsystem::execGetUIMappingContext)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInputMappingContext**)Z_Param__Result=P_THIS->GetUIMappingContext(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UInputsHandlerSubsystem Function GetUIMappingContext ***********************

// ********** Begin Class UInputsHandlerSubsystem Function GetUIMappingContexts ********************
struct Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContexts_Statics
{
	struct InputsHandlerSubsystem_eventGetUIMappingContexts_Parms
	{
		TArray<UInputMappingContext*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContexts_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContexts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputsHandlerSubsystem_eventGetUIMappingContexts_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContexts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContexts_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContexts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContexts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContexts_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputsHandlerSubsystem, nullptr, "GetUIMappingContexts", Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContexts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContexts_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContexts_Statics::InputsHandlerSubsystem_eventGetUIMappingContexts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContexts_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContexts_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContexts_Statics::InputsHandlerSubsystem_eventGetUIMappingContexts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContexts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContexts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputsHandlerSubsystem::execGetUIMappingContexts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UInputMappingContext*>*)Z_Param__Result=P_THIS->GetUIMappingContexts();
	P_NATIVE_END;
}
// ********** End Class UInputsHandlerSubsystem Function GetUIMappingContexts **********************

// ********** Begin Class UInputsHandlerSubsystem Function IsInputModeGameplay *********************
struct Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeGameplay_Statics
{
	struct InputsHandlerSubsystem_eventIsInputModeGameplay_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeGameplay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InputsHandlerSubsystem_eventIsInputModeGameplay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeGameplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputsHandlerSubsystem_eventIsInputModeGameplay_Parms), &Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeGameplay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeGameplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeGameplay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeGameplay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeGameplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputsHandlerSubsystem, nullptr, "IsInputModeGameplay", Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeGameplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeGameplay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeGameplay_Statics::InputsHandlerSubsystem_eventIsInputModeGameplay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeGameplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeGameplay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeGameplay_Statics::InputsHandlerSubsystem_eventIsInputModeGameplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeGameplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeGameplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputsHandlerSubsystem::execIsInputModeGameplay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInputModeGameplay();
	P_NATIVE_END;
}
// ********** End Class UInputsHandlerSubsystem Function IsInputModeGameplay ***********************

// ********** Begin Class UInputsHandlerSubsystem Function IsInputModeUI ***************************
struct Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeUI_Statics
{
	struct InputsHandlerSubsystem_eventIsInputModeUI_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InputsHandlerSubsystem_eventIsInputModeUI_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputsHandlerSubsystem_eventIsInputModeUI_Parms), &Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeUI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputsHandlerSubsystem, nullptr, "IsInputModeUI", Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeUI_Statics::InputsHandlerSubsystem_eventIsInputModeUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeUI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeUI_Statics::InputsHandlerSubsystem_eventIsInputModeUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputsHandlerSubsystem::execIsInputModeUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInputModeUI();
	P_NATIVE_END;
}
// ********** End Class UInputsHandlerSubsystem Function IsInputModeUI *****************************

// ********** Begin Class UInputsHandlerSubsystem Function IsUsingGamepad **************************
struct Z_Construct_UFunction_UInputsHandlerSubsystem_IsUsingGamepad_Statics
{
	struct InputsHandlerSubsystem_eventIsUsingGamepad_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInputsHandlerSubsystem_IsUsingGamepad_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InputsHandlerSubsystem_eventIsUsingGamepad_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputsHandlerSubsystem_IsUsingGamepad_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputsHandlerSubsystem_eventIsUsingGamepad_Parms), &Z_Construct_UFunction_UInputsHandlerSubsystem_IsUsingGamepad_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputsHandlerSubsystem_IsUsingGamepad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerSubsystem_IsUsingGamepad_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_IsUsingGamepad_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputsHandlerSubsystem_IsUsingGamepad_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputsHandlerSubsystem, nullptr, "IsUsingGamepad", Z_Construct_UFunction_UInputsHandlerSubsystem_IsUsingGamepad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_IsUsingGamepad_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_IsUsingGamepad_Statics::InputsHandlerSubsystem_eventIsUsingGamepad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_IsUsingGamepad_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputsHandlerSubsystem_IsUsingGamepad_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_IsUsingGamepad_Statics::InputsHandlerSubsystem_eventIsUsingGamepad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputsHandlerSubsystem_IsUsingGamepad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputsHandlerSubsystem_IsUsingGamepad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputsHandlerSubsystem::execIsUsingGamepad)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsUsingGamepad();
	P_NATIVE_END;
}
// ********** End Class UInputsHandlerSubsystem Function IsUsingGamepad ****************************

// ********** Begin Class UInputsHandlerSubsystem Function RemoveCommonMappingContext **************
struct Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveCommonMappingContext_Statics
{
	struct InputsHandlerSubsystem_eventRemoveCommonMappingContext_Parms
	{
		UInputMappingContext* MappingContext;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveCommonMappingContext_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputsHandlerSubsystem_eventRemoveCommonMappingContext_Parms, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveCommonMappingContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveCommonMappingContext_Statics::NewProp_MappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveCommonMappingContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveCommonMappingContext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputsHandlerSubsystem, nullptr, "RemoveCommonMappingContext", Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveCommonMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveCommonMappingContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveCommonMappingContext_Statics::InputsHandlerSubsystem_eventRemoveCommonMappingContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveCommonMappingContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveCommonMappingContext_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveCommonMappingContext_Statics::InputsHandlerSubsystem_eventRemoveCommonMappingContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveCommonMappingContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveCommonMappingContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputsHandlerSubsystem::execRemoveCommonMappingContext)
{
	P_GET_OBJECT(UInputMappingContext,Z_Param_MappingContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveCommonMappingContext(Z_Param_MappingContext);
	P_NATIVE_END;
}
// ********** End Class UInputsHandlerSubsystem Function RemoveCommonMappingContext ****************

// ********** Begin Class UInputsHandlerSubsystem Function RemoveExcludedMappingContext ************
struct Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveExcludedMappingContext_Statics
{
	struct InputsHandlerSubsystem_eventRemoveExcludedMappingContext_Parms
	{
		UInputMappingContext* MappingContext;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveExcludedMappingContext_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputsHandlerSubsystem_eventRemoveExcludedMappingContext_Parms, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveExcludedMappingContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveExcludedMappingContext_Statics::NewProp_MappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveExcludedMappingContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveExcludedMappingContext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputsHandlerSubsystem, nullptr, "RemoveExcludedMappingContext", Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveExcludedMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveExcludedMappingContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveExcludedMappingContext_Statics::InputsHandlerSubsystem_eventRemoveExcludedMappingContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveExcludedMappingContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveExcludedMappingContext_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveExcludedMappingContext_Statics::InputsHandlerSubsystem_eventRemoveExcludedMappingContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveExcludedMappingContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveExcludedMappingContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputsHandlerSubsystem::execRemoveExcludedMappingContext)
{
	P_GET_OBJECT(UInputMappingContext,Z_Param_MappingContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveExcludedMappingContext(Z_Param_MappingContext);
	P_NATIVE_END;
}
// ********** End Class UInputsHandlerSubsystem Function RemoveExcludedMappingContext **************

// ********** Begin Class UInputsHandlerSubsystem Function RemoveGameplayMappingContext ************
struct Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveGameplayMappingContext_Statics
{
	struct InputsHandlerSubsystem_eventRemoveGameplayMappingContext_Parms
	{
		UInputMappingContext* MappingContext;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveGameplayMappingContext_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputsHandlerSubsystem_eventRemoveGameplayMappingContext_Parms, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveGameplayMappingContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveGameplayMappingContext_Statics::NewProp_MappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveGameplayMappingContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveGameplayMappingContext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputsHandlerSubsystem, nullptr, "RemoveGameplayMappingContext", Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveGameplayMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveGameplayMappingContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveGameplayMappingContext_Statics::InputsHandlerSubsystem_eventRemoveGameplayMappingContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveGameplayMappingContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveGameplayMappingContext_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveGameplayMappingContext_Statics::InputsHandlerSubsystem_eventRemoveGameplayMappingContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveGameplayMappingContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveGameplayMappingContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputsHandlerSubsystem::execRemoveGameplayMappingContext)
{
	P_GET_OBJECT(UInputMappingContext,Z_Param_MappingContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveGameplayMappingContext(Z_Param_MappingContext);
	P_NATIVE_END;
}
// ********** End Class UInputsHandlerSubsystem Function RemoveGameplayMappingContext **************

// ********** Begin Class UInputsHandlerSubsystem Function RemoveUIMappingContext ******************
struct Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveUIMappingContext_Statics
{
	struct InputsHandlerSubsystem_eventRemoveUIMappingContext_Parms
	{
		UInputMappingContext* MappingContext;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveUIMappingContext_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputsHandlerSubsystem_eventRemoveUIMappingContext_Parms, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveUIMappingContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveUIMappingContext_Statics::NewProp_MappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveUIMappingContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveUIMappingContext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputsHandlerSubsystem, nullptr, "RemoveUIMappingContext", Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveUIMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveUIMappingContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveUIMappingContext_Statics::InputsHandlerSubsystem_eventRemoveUIMappingContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveUIMappingContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveUIMappingContext_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveUIMappingContext_Statics::InputsHandlerSubsystem_eventRemoveUIMappingContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveUIMappingContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveUIMappingContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputsHandlerSubsystem::execRemoveUIMappingContext)
{
	P_GET_OBJECT(UInputMappingContext,Z_Param_MappingContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveUIMappingContext(Z_Param_MappingContext);
	P_NATIVE_END;
}
// ********** End Class UInputsHandlerSubsystem Function RemoveUIMappingContext ********************

// ********** Begin Class UInputsHandlerSubsystem Function SetModeGameplay *************************
struct Z_Construct_UFunction_UInputsHandlerSubsystem_SetModeGameplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputsHandlerSubsystem_SetModeGameplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputsHandlerSubsystem, nullptr, "SetModeGameplay", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_SetModeGameplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputsHandlerSubsystem_SetModeGameplay_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInputsHandlerSubsystem_SetModeGameplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputsHandlerSubsystem_SetModeGameplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputsHandlerSubsystem::execSetModeGameplay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetModeGameplay();
	P_NATIVE_END;
}
// ********** End Class UInputsHandlerSubsystem Function SetModeGameplay ***************************

// ********** Begin Class UInputsHandlerSubsystem Function SetModeUI *******************************
struct Z_Construct_UFunction_UInputsHandlerSubsystem_SetModeUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputsHandlerSubsystem_SetModeUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputsHandlerSubsystem, nullptr, "SetModeUI", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerSubsystem_SetModeUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputsHandlerSubsystem_SetModeUI_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInputsHandlerSubsystem_SetModeUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputsHandlerSubsystem_SetModeUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputsHandlerSubsystem::execSetModeUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetModeUI();
	P_NATIVE_END;
}
// ********** End Class UInputsHandlerSubsystem Function SetModeUI *********************************

// ********** Begin Class UInputsHandlerSubsystem **************************************************
void UInputsHandlerSubsystem::StaticRegisterNativesUInputsHandlerSubsystem()
{
	UClass* Class = UInputsHandlerSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCommonMappingContext", &UInputsHandlerSubsystem::execAddCommonMappingContext },
		{ "AddExcludedMappingContext", &UInputsHandlerSubsystem::execAddExcludedMappingContext },
		{ "AddGameplayMappingContext", &UInputsHandlerSubsystem::execAddGameplayMappingContext },
		{ "AddUIMappingContext", &UInputsHandlerSubsystem::execAddUIMappingContext },
		{ "CheckUsingGamepad", &UInputsHandlerSubsystem::execCheckUsingGamepad },
		{ "GetAllMappingContexts", &UInputsHandlerSubsystem::execGetAllMappingContexts },
		{ "GetCommonMappingContexts", &UInputsHandlerSubsystem::execGetCommonMappingContexts },
		{ "GetEnhancedInputUserSettings", &UInputsHandlerSubsystem::execGetEnhancedInputUserSettings },
		{ "GetGameplayMappingContext", &UInputsHandlerSubsystem::execGetGameplayMappingContext },
		{ "GetGameplayMappingContexts", &UInputsHandlerSubsystem::execGetGameplayMappingContexts },
		{ "GetNormalizedMousePosition", &UInputsHandlerSubsystem::execGetNormalizedMousePosition },
		{ "GetUIMappingContext", &UInputsHandlerSubsystem::execGetUIMappingContext },
		{ "GetUIMappingContexts", &UInputsHandlerSubsystem::execGetUIMappingContexts },
		{ "IsInputModeGameplay", &UInputsHandlerSubsystem::execIsInputModeGameplay },
		{ "IsInputModeUI", &UInputsHandlerSubsystem::execIsInputModeUI },
		{ "IsUsingGamepad", &UInputsHandlerSubsystem::execIsUsingGamepad },
		{ "RemoveCommonMappingContext", &UInputsHandlerSubsystem::execRemoveCommonMappingContext },
		{ "RemoveExcludedMappingContext", &UInputsHandlerSubsystem::execRemoveExcludedMappingContext },
		{ "RemoveGameplayMappingContext", &UInputsHandlerSubsystem::execRemoveGameplayMappingContext },
		{ "RemoveUIMappingContext", &UInputsHandlerSubsystem::execRemoveUIMappingContext },
		{ "SetModeGameplay", &UInputsHandlerSubsystem::execSetModeGameplay },
		{ "SetModeUI", &UInputsHandlerSubsystem::execSetModeUI },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInputsHandlerSubsystem;
UClass* UInputsHandlerSubsystem::GetPrivateStaticClass()
{
	using TClass = UInputsHandlerSubsystem;
	if (!Z_Registration_Info_UClass_UInputsHandlerSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InputsHandlerSubsystem"),
			Z_Registration_Info_UClass_UInputsHandlerSubsystem.InnerSingleton,
			StaticRegisterNativesUInputsHandlerSubsystem,
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
	return Z_Registration_Info_UClass_UInputsHandlerSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UInputsHandlerSubsystem_NoRegister()
{
	return UInputsHandlerSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInputsHandlerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InputsHandlerSubsystem.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameplayMappingContextSet_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUIMappingContextSet_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "Category", "InputsHandlerSubsystem" },
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonMappingContexts_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayMappingContexts_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIMappingContexts_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedContexts_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnhancedInputSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputDeviceSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputsHandlerSystemSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputsHandlerSubsystem.h" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameplayMappingContextSet;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUIMappingContextSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CommonMappingContexts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameplayMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayMappingContexts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UIMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UIMappingContexts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExcludedContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedContexts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnhancedInputSubsystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputDeviceSubsystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputsHandlerSystemSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputsHandlerSubsystem_AddCommonMappingContext, "AddCommonMappingContext" }, // 669937628
		{ &Z_Construct_UFunction_UInputsHandlerSubsystem_AddExcludedMappingContext, "AddExcludedMappingContext" }, // 2588453906
		{ &Z_Construct_UFunction_UInputsHandlerSubsystem_AddGameplayMappingContext, "AddGameplayMappingContext" }, // 2748370726
		{ &Z_Construct_UFunction_UInputsHandlerSubsystem_AddUIMappingContext, "AddUIMappingContext" }, // 984934152
		{ &Z_Construct_UFunction_UInputsHandlerSubsystem_CheckUsingGamepad, "CheckUsingGamepad" }, // 2515540884
		{ &Z_Construct_UFunction_UInputsHandlerSubsystem_GetAllMappingContexts, "GetAllMappingContexts" }, // 185908184
		{ &Z_Construct_UFunction_UInputsHandlerSubsystem_GetCommonMappingContexts, "GetCommonMappingContexts" }, // 2874695059
		{ &Z_Construct_UFunction_UInputsHandlerSubsystem_GetEnhancedInputUserSettings, "GetEnhancedInputUserSettings" }, // 3045266620
		{ &Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContext, "GetGameplayMappingContext" }, // 2709426337
		{ &Z_Construct_UFunction_UInputsHandlerSubsystem_GetGameplayMappingContexts, "GetGameplayMappingContexts" }, // 3700287534
		{ &Z_Construct_UFunction_UInputsHandlerSubsystem_GetNormalizedMousePosition, "GetNormalizedMousePosition" }, // 2736860838
		{ &Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContext, "GetUIMappingContext" }, // 1954602616
		{ &Z_Construct_UFunction_UInputsHandlerSubsystem_GetUIMappingContexts, "GetUIMappingContexts" }, // 1648150332
		{ &Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeGameplay, "IsInputModeGameplay" }, // 2754813334
		{ &Z_Construct_UFunction_UInputsHandlerSubsystem_IsInputModeUI, "IsInputModeUI" }, // 3809962323
		{ &Z_Construct_UFunction_UInputsHandlerSubsystem_IsUsingGamepad, "IsUsingGamepad" }, // 1140981206
		{ &Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveCommonMappingContext, "RemoveCommonMappingContext" }, // 2443772647
		{ &Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveExcludedMappingContext, "RemoveExcludedMappingContext" }, // 3920686600
		{ &Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveGameplayMappingContext, "RemoveGameplayMappingContext" }, // 1658806983
		{ &Z_Construct_UFunction_UInputsHandlerSubsystem_RemoveUIMappingContext, "RemoveUIMappingContext" }, // 2629047020
		{ &Z_Construct_UFunction_UInputsHandlerSubsystem_SetModeGameplay, "SetModeGameplay" }, // 1049381663
		{ &Z_Construct_UFunction_UInputsHandlerSubsystem_SetModeUI, "SetModeUI" }, // 3836862611
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputsHandlerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInputsHandlerSubsystem_Statics::NewProp_OnGameplayMappingContextSet = { "OnGameplayMappingContextSet", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputsHandlerSubsystem, OnGameplayMappingContextSet), Z_Construct_UDelegateFunction_InputsHandlerSystem_OnGampleayMappingContextSet__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameplayMappingContextSet_MetaData), NewProp_OnGameplayMappingContextSet_MetaData) }; // 1317782710
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInputsHandlerSubsystem_Statics::NewProp_OnUIMappingContextSet = { "OnUIMappingContextSet", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputsHandlerSubsystem, OnUIMappingContextSet), Z_Construct_UDelegateFunction_InputsHandlerSystem_OnUIMappingContextSet__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUIMappingContextSet_MetaData), NewProp_OnUIMappingContextSet_MetaData) }; // 430907891
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputsHandlerSubsystem_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputsHandlerSubsystem, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputsHandlerSubsystem_Statics::NewProp_CommonMappingContexts_Inner = { "CommonMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputsHandlerSubsystem_Statics::NewProp_CommonMappingContexts = { "CommonMappingContexts", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputsHandlerSubsystem, CommonMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonMappingContexts_MetaData), NewProp_CommonMappingContexts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputsHandlerSubsystem_Statics::NewProp_GameplayMappingContexts_Inner = { "GameplayMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputsHandlerSubsystem_Statics::NewProp_GameplayMappingContexts = { "GameplayMappingContexts", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputsHandlerSubsystem, GameplayMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayMappingContexts_MetaData), NewProp_GameplayMappingContexts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputsHandlerSubsystem_Statics::NewProp_UIMappingContexts_Inner = { "UIMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputsHandlerSubsystem_Statics::NewProp_UIMappingContexts = { "UIMappingContexts", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputsHandlerSubsystem, UIMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIMappingContexts_MetaData), NewProp_UIMappingContexts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputsHandlerSubsystem_Statics::NewProp_ExcludedContexts_Inner = { "ExcludedContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputsHandlerSubsystem_Statics::NewProp_ExcludedContexts = { "ExcludedContexts", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputsHandlerSubsystem, ExcludedContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludedContexts_MetaData), NewProp_ExcludedContexts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputsHandlerSubsystem_Statics::NewProp_EnhancedInputSubsystem = { "EnhancedInputSubsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputsHandlerSubsystem, EnhancedInputSubsystem), Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnhancedInputSubsystem_MetaData), NewProp_EnhancedInputSubsystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputsHandlerSubsystem_Statics::NewProp_InputDeviceSubsystem = { "InputDeviceSubsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputsHandlerSubsystem, InputDeviceSubsystem), Z_Construct_UClass_UInputDeviceSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputDeviceSubsystem_MetaData), NewProp_InputDeviceSubsystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputsHandlerSubsystem_Statics::NewProp_InputsHandlerSystemSettings = { "InputsHandlerSystemSettings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputsHandlerSubsystem, InputsHandlerSystemSettings), Z_Construct_UClass_UInputsHandlerSystemSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputsHandlerSystemSettings_MetaData), NewProp_InputsHandlerSystemSettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputsHandlerSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputsHandlerSubsystem_Statics::NewProp_OnGameplayMappingContextSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputsHandlerSubsystem_Statics::NewProp_OnUIMappingContextSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputsHandlerSubsystem_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputsHandlerSubsystem_Statics::NewProp_CommonMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputsHandlerSubsystem_Statics::NewProp_CommonMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputsHandlerSubsystem_Statics::NewProp_GameplayMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputsHandlerSubsystem_Statics::NewProp_GameplayMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputsHandlerSubsystem_Statics::NewProp_UIMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputsHandlerSubsystem_Statics::NewProp_UIMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputsHandlerSubsystem_Statics::NewProp_ExcludedContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputsHandlerSubsystem_Statics::NewProp_ExcludedContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputsHandlerSubsystem_Statics::NewProp_EnhancedInputSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputsHandlerSubsystem_Statics::NewProp_InputDeviceSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputsHandlerSubsystem_Statics::NewProp_InputsHandlerSystemSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputsHandlerSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputsHandlerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_InputsHandlerSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputsHandlerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputsHandlerSubsystem_Statics::ClassParams = {
	&UInputsHandlerSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInputsHandlerSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputsHandlerSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputsHandlerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputsHandlerSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputsHandlerSubsystem()
{
	if (!Z_Registration_Info_UClass_UInputsHandlerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputsHandlerSubsystem.OuterSingleton, Z_Construct_UClass_UInputsHandlerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputsHandlerSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputsHandlerSubsystem);
UInputsHandlerSubsystem::~UInputsHandlerSubsystem() {}
// ********** End Class UInputsHandlerSubsystem ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_InputsHandlerSubsystem_h__Script_InputsHandlerSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputsHandlerSubsystem, UInputsHandlerSubsystem::StaticClass, TEXT("UInputsHandlerSubsystem"), &Z_Registration_Info_UClass_UInputsHandlerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputsHandlerSubsystem), 305203853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_InputsHandlerSubsystem_h__Script_InputsHandlerSystem_3539313233(TEXT("/Script/InputsHandlerSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_InputsHandlerSubsystem_h__Script_InputsHandlerSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_InputsHandlerSubsystem_h__Script_InputsHandlerSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
