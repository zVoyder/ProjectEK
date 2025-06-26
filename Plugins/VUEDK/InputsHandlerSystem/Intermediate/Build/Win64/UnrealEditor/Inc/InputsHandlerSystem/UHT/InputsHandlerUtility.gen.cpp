// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utility/InputsHandlerUtility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInputsHandlerUtility() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister();
INPUTSHANDLERSYSTEM_API UClass* Z_Construct_UClass_UInputsHandlerUtility();
INPUTSHANDLERSYSTEM_API UClass* Z_Construct_UClass_UInputsHandlerUtility_NoRegister();
UPackage* Z_Construct_UPackage__Script_InputsHandlerSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInputsHandlerUtility Function GetEnhancedInputUserSettings **************
struct Z_Construct_UFunction_UInputsHandlerUtility_GetEnhancedInputUserSettings_Statics
{
	struct InputsHandlerUtility_eventGetEnhancedInputUserSettings_Parms
	{
		UEnhancedInputUserSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utility/InputsHandlerUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputsHandlerUtility_GetEnhancedInputUserSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputsHandlerUtility_eventGetEnhancedInputUserSettings_Parms, ReturnValue), Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputsHandlerUtility_GetEnhancedInputUserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerUtility_GetEnhancedInputUserSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerUtility_GetEnhancedInputUserSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputsHandlerUtility_GetEnhancedInputUserSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputsHandlerUtility, nullptr, "GetEnhancedInputUserSettings", Z_Construct_UFunction_UInputsHandlerUtility_GetEnhancedInputUserSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerUtility_GetEnhancedInputUserSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputsHandlerUtility_GetEnhancedInputUserSettings_Statics::InputsHandlerUtility_eventGetEnhancedInputUserSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerUtility_GetEnhancedInputUserSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputsHandlerUtility_GetEnhancedInputUserSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInputsHandlerUtility_GetEnhancedInputUserSettings_Statics::InputsHandlerUtility_eventGetEnhancedInputUserSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputsHandlerUtility_GetEnhancedInputUserSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputsHandlerUtility_GetEnhancedInputUserSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputsHandlerUtility::execGetEnhancedInputUserSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEnhancedInputUserSettings**)Z_Param__Result=UInputsHandlerUtility::GetEnhancedInputUserSettings();
	P_NATIVE_END;
}
// ********** End Class UInputsHandlerUtility Function GetEnhancedInputUserSettings ****************

// ********** Begin Class UInputsHandlerUtility Function IsUsingGamepad ****************************
struct Z_Construct_UFunction_UInputsHandlerUtility_IsUsingGamepad_Statics
{
	struct InputsHandlerUtility_eventIsUsingGamepad_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utility/InputsHandlerUtility.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInputsHandlerUtility_IsUsingGamepad_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InputsHandlerUtility_eventIsUsingGamepad_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputsHandlerUtility_IsUsingGamepad_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputsHandlerUtility_eventIsUsingGamepad_Parms), &Z_Construct_UFunction_UInputsHandlerUtility_IsUsingGamepad_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputsHandlerUtility_IsUsingGamepad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputsHandlerUtility_IsUsingGamepad_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerUtility_IsUsingGamepad_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputsHandlerUtility_IsUsingGamepad_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputsHandlerUtility, nullptr, "IsUsingGamepad", Z_Construct_UFunction_UInputsHandlerUtility_IsUsingGamepad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerUtility_IsUsingGamepad_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputsHandlerUtility_IsUsingGamepad_Statics::InputsHandlerUtility_eventIsUsingGamepad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerUtility_IsUsingGamepad_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputsHandlerUtility_IsUsingGamepad_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInputsHandlerUtility_IsUsingGamepad_Statics::InputsHandlerUtility_eventIsUsingGamepad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputsHandlerUtility_IsUsingGamepad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputsHandlerUtility_IsUsingGamepad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputsHandlerUtility::execIsUsingGamepad)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInputsHandlerUtility::IsUsingGamepad();
	P_NATIVE_END;
}
// ********** End Class UInputsHandlerUtility Function IsUsingGamepad ******************************

// ********** Begin Class UInputsHandlerUtility Function SetModeGameplay ***************************
struct Z_Construct_UFunction_UInputsHandlerUtility_SetModeGameplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utility/InputsHandlerUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputsHandlerUtility_SetModeGameplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputsHandlerUtility, nullptr, "SetModeGameplay", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerUtility_SetModeGameplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputsHandlerUtility_SetModeGameplay_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInputsHandlerUtility_SetModeGameplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputsHandlerUtility_SetModeGameplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputsHandlerUtility::execSetModeGameplay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UInputsHandlerUtility::SetModeGameplay();
	P_NATIVE_END;
}
// ********** End Class UInputsHandlerUtility Function SetModeGameplay *****************************

// ********** Begin Class UInputsHandlerUtility Function SetModeUI *********************************
struct Z_Construct_UFunction_UInputsHandlerUtility_SetModeUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utility/InputsHandlerUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputsHandlerUtility_SetModeUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputsHandlerUtility, nullptr, "SetModeUI", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputsHandlerUtility_SetModeUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputsHandlerUtility_SetModeUI_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInputsHandlerUtility_SetModeUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputsHandlerUtility_SetModeUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputsHandlerUtility::execSetModeUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UInputsHandlerUtility::SetModeUI();
	P_NATIVE_END;
}
// ********** End Class UInputsHandlerUtility Function SetModeUI ***********************************

// ********** Begin Class UInputsHandlerUtility ****************************************************
void UInputsHandlerUtility::StaticRegisterNativesUInputsHandlerUtility()
{
	UClass* Class = UInputsHandlerUtility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEnhancedInputUserSettings", &UInputsHandlerUtility::execGetEnhancedInputUserSettings },
		{ "IsUsingGamepad", &UInputsHandlerUtility::execIsUsingGamepad },
		{ "SetModeGameplay", &UInputsHandlerUtility::execSetModeGameplay },
		{ "SetModeUI", &UInputsHandlerUtility::execSetModeUI },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInputsHandlerUtility;
UClass* UInputsHandlerUtility::GetPrivateStaticClass()
{
	using TClass = UInputsHandlerUtility;
	if (!Z_Registration_Info_UClass_UInputsHandlerUtility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InputsHandlerUtility"),
			Z_Registration_Info_UClass_UInputsHandlerUtility.InnerSingleton,
			StaticRegisterNativesUInputsHandlerUtility,
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
	return Z_Registration_Info_UClass_UInputsHandlerUtility.InnerSingleton;
}
UClass* Z_Construct_UClass_UInputsHandlerUtility_NoRegister()
{
	return UInputsHandlerUtility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInputsHandlerUtility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Utility/InputsHandlerUtility.h" },
		{ "ModuleRelativePath", "Public/Utility/InputsHandlerUtility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputsHandlerUtility_GetEnhancedInputUserSettings, "GetEnhancedInputUserSettings" }, // 889182771
		{ &Z_Construct_UFunction_UInputsHandlerUtility_IsUsingGamepad, "IsUsingGamepad" }, // 3949779013
		{ &Z_Construct_UFunction_UInputsHandlerUtility_SetModeGameplay, "SetModeGameplay" }, // 2620413307
		{ &Z_Construct_UFunction_UInputsHandlerUtility_SetModeUI, "SetModeUI" }, // 2552025872
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputsHandlerUtility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInputsHandlerUtility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_InputsHandlerSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputsHandlerUtility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputsHandlerUtility_Statics::ClassParams = {
	&UInputsHandlerUtility::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputsHandlerUtility_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputsHandlerUtility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputsHandlerUtility()
{
	if (!Z_Registration_Info_UClass_UInputsHandlerUtility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputsHandlerUtility.OuterSingleton, Z_Construct_UClass_UInputsHandlerUtility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputsHandlerUtility.OuterSingleton;
}
UInputsHandlerUtility::UInputsHandlerUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputsHandlerUtility);
UInputsHandlerUtility::~UInputsHandlerUtility() {}
// ********** End Class UInputsHandlerUtility ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Utility_InputsHandlerUtility_h__Script_InputsHandlerSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputsHandlerUtility, UInputsHandlerUtility::StaticClass, TEXT("UInputsHandlerUtility"), &Z_Registration_Info_UClass_UInputsHandlerUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputsHandlerUtility), 2611881936U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Utility_InputsHandlerUtility_h__Script_InputsHandlerSystem_2867812234(TEXT("/Script/InputsHandlerSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Utility_InputsHandlerUtility_h__Script_InputsHandlerSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Utility_InputsHandlerUtility_h__Script_InputsHandlerSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
