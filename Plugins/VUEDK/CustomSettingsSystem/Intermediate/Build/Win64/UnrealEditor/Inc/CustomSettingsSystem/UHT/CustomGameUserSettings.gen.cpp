// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomGameUserSettings.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCustomGameUserSettings() {}

// ********** Begin Cross Module References ********************************************************
CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UCSSSettings_NoRegister();
CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UCustomGameUserSettings();
CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UCustomGameUserSettings_NoRegister();
CUSTOMSETTINGSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomOptionChanged__DelegateSignature();
CUSTOMSETTINGSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsApplied__DelegateSignature();
CUSTOMSETTINGSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToCurrent__DelegateSignature();
CUSTOMSETTINGSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToDefaults__DelegateSignature();
CUSTOMSETTINGSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToFile__DelegateSignature();
CUSTOMSETTINGSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsUINeedsUpdate__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UGameUserSettings();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_CustomSettingsSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnCustomOptionChanged ************************************************
struct Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomOptionChanged__DelegateSignature_Statics
{
	struct _Script_CustomSettingsSystem_eventOnCustomOptionChanged_Parms
	{
		FGameplayTag Tag;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomOptionChanged__DelegateSignature_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CustomSettingsSystem_eventOnCustomOptionChanged_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 133831994
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomOptionChanged__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CustomSettingsSystem_eventOnCustomOptionChanged_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomOptionChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomOptionChanged__DelegateSignature_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomOptionChanged__DelegateSignature_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomOptionChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomOptionChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CustomSettingsSystem, nullptr, "OnCustomOptionChanged__DelegateSignature", Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomOptionChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomOptionChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomOptionChanged__DelegateSignature_Statics::_Script_CustomSettingsSystem_eventOnCustomOptionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomOptionChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomOptionChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomOptionChanged__DelegateSignature_Statics::_Script_CustomSettingsSystem_eventOnCustomOptionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomOptionChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomOptionChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCustomOptionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCustomOptionChanged, FGameplayTag const& Tag, float Value)
{
	struct _Script_CustomSettingsSystem_eventOnCustomOptionChanged_Parms
	{
		FGameplayTag Tag;
		float Value;
	};
	_Script_CustomSettingsSystem_eventOnCustomOptionChanged_Parms Parms;
	Parms.Tag=Tag;
	Parms.Value=Value;
	OnCustomOptionChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnCustomOptionChanged **************************************************

// ********** Begin Delegate FOnCustomSettingsApplied **********************************************
struct Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsApplied__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsApplied__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CustomSettingsSystem, nullptr, "OnCustomSettingsApplied__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsApplied__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsApplied__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsApplied__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsApplied__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCustomSettingsApplied_DelegateWrapper(const FMulticastScriptDelegate& OnCustomSettingsApplied)
{
	OnCustomSettingsApplied.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnCustomSettingsApplied ************************************************

// ********** Begin Delegate FOnCustomSettingsResetToDefaults **************************************
struct Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToDefaults__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToDefaults__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CustomSettingsSystem, nullptr, "OnCustomSettingsResetToDefaults__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToDefaults__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToDefaults__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToDefaults__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToDefaults__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCustomSettingsResetToDefaults_DelegateWrapper(const FMulticastScriptDelegate& OnCustomSettingsResetToDefaults)
{
	OnCustomSettingsResetToDefaults.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnCustomSettingsResetToDefaults ****************************************

// ********** Begin Delegate FOnCustomSettingsResetToCurrent ***************************************
struct Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToCurrent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToCurrent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CustomSettingsSystem, nullptr, "OnCustomSettingsResetToCurrent__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToCurrent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToCurrent__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToCurrent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToCurrent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCustomSettingsResetToCurrent_DelegateWrapper(const FMulticastScriptDelegate& OnCustomSettingsResetToCurrent)
{
	OnCustomSettingsResetToCurrent.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnCustomSettingsResetToCurrent *****************************************

// ********** Begin Delegate FOnCustomSettingsResetToFile ******************************************
struct Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToFile__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToFile__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CustomSettingsSystem, nullptr, "OnCustomSettingsResetToFile__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToFile__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToFile__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToFile__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToFile__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCustomSettingsResetToFile_DelegateWrapper(const FMulticastScriptDelegate& OnCustomSettingsResetToFile)
{
	OnCustomSettingsResetToFile.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnCustomSettingsResetToFile ********************************************

// ********** Begin Delegate FOnCustomSettingsUINeedsUpdate ****************************************
struct Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsUINeedsUpdate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsUINeedsUpdate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CustomSettingsSystem, nullptr, "OnCustomSettingsUINeedsUpdate__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsUINeedsUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsUINeedsUpdate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsUINeedsUpdate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsUINeedsUpdate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCustomSettingsUINeedsUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnCustomSettingsUINeedsUpdate)
{
	OnCustomSettingsUINeedsUpdate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnCustomSettingsUINeedsUpdate ******************************************

// ********** Begin Class UCustomGameUserSettings Function ApplyAllSettings ************************
struct Z_Construct_UFunction_UCustomGameUserSettings_ApplyAllSettings_Statics
{
	struct CustomGameUserSettings_eventApplyAllSettings_Parms
	{
		bool bCheckForCommandLineOverrides;
		bool bApplyResolutionSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CustomGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckForCommandLineOverrides_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyResolutionSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bCheckForCommandLineOverrides_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckForCommandLineOverrides;
	static void NewProp_bApplyResolutionSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyResolutionSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCustomGameUserSettings_ApplyAllSettings_Statics::NewProp_bCheckForCommandLineOverrides_SetBit(void* Obj)
{
	((CustomGameUserSettings_eventApplyAllSettings_Parms*)Obj)->bCheckForCommandLineOverrides = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomGameUserSettings_ApplyAllSettings_Statics::NewProp_bCheckForCommandLineOverrides = { "bCheckForCommandLineOverrides", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CustomGameUserSettings_eventApplyAllSettings_Parms), &Z_Construct_UFunction_UCustomGameUserSettings_ApplyAllSettings_Statics::NewProp_bCheckForCommandLineOverrides_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckForCommandLineOverrides_MetaData), NewProp_bCheckForCommandLineOverrides_MetaData) };
void Z_Construct_UFunction_UCustomGameUserSettings_ApplyAllSettings_Statics::NewProp_bApplyResolutionSettings_SetBit(void* Obj)
{
	((CustomGameUserSettings_eventApplyAllSettings_Parms*)Obj)->bApplyResolutionSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomGameUserSettings_ApplyAllSettings_Statics::NewProp_bApplyResolutionSettings = { "bApplyResolutionSettings", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CustomGameUserSettings_eventApplyAllSettings_Parms), &Z_Construct_UFunction_UCustomGameUserSettings_ApplyAllSettings_Statics::NewProp_bApplyResolutionSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyResolutionSettings_MetaData), NewProp_bApplyResolutionSettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGameUserSettings_ApplyAllSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameUserSettings_ApplyAllSettings_Statics::NewProp_bCheckForCommandLineOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameUserSettings_ApplyAllSettings_Statics::NewProp_bApplyResolutionSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_ApplyAllSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGameUserSettings_ApplyAllSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCustomGameUserSettings, nullptr, "ApplyAllSettings", Z_Construct_UFunction_UCustomGameUserSettings_ApplyAllSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_ApplyAllSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomGameUserSettings_ApplyAllSettings_Statics::CustomGameUserSettings_eventApplyAllSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_ApplyAllSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomGameUserSettings_ApplyAllSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCustomGameUserSettings_ApplyAllSettings_Statics::CustomGameUserSettings_eventApplyAllSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomGameUserSettings_ApplyAllSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGameUserSettings_ApplyAllSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomGameUserSettings::execApplyAllSettings)
{
	P_GET_UBOOL(Z_Param_bCheckForCommandLineOverrides);
	P_GET_UBOOL(Z_Param_bApplyResolutionSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyAllSettings(Z_Param_bCheckForCommandLineOverrides,Z_Param_bApplyResolutionSettings);
	P_NATIVE_END;
}
// ********** End Class UCustomGameUserSettings Function ApplyAllSettings **************************

// ********** Begin Class UCustomGameUserSettings Function GetCustomOptionMaxValue *****************
struct Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMaxValue_Statics
{
	struct CustomGameUserSettings_eventGetCustomOptionMaxValue_Parms
	{
		FGameplayTag Tag;
		float OutValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CustomGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMaxValue_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomGameUserSettings_eventGetCustomOptionMaxValue_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 133831994
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMaxValue_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomGameUserSettings_eventGetCustomOptionMaxValue_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMaxValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMaxValue_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMaxValue_Statics::NewProp_OutValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMaxValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMaxValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCustomGameUserSettings, nullptr, "GetCustomOptionMaxValue", Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMaxValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMaxValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMaxValue_Statics::CustomGameUserSettings_eventGetCustomOptionMaxValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMaxValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMaxValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMaxValue_Statics::CustomGameUserSettings_eventGetCustomOptionMaxValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMaxValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMaxValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomGameUserSettings::execGetCustomOptionMaxValue)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCustomOptionMaxValue(Z_Param_Tag,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UCustomGameUserSettings Function GetCustomOptionMaxValue *******************

// ********** Begin Class UCustomGameUserSettings Function GetCustomOptionMinValue *****************
struct Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMinValue_Statics
{
	struct CustomGameUserSettings_eventGetCustomOptionMinValue_Parms
	{
		FGameplayTag Tag;
		float OutValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CustomGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMinValue_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomGameUserSettings_eventGetCustomOptionMinValue_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 133831994
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMinValue_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomGameUserSettings_eventGetCustomOptionMinValue_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMinValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMinValue_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMinValue_Statics::NewProp_OutValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMinValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMinValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCustomGameUserSettings, nullptr, "GetCustomOptionMinValue", Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMinValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMinValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMinValue_Statics::CustomGameUserSettings_eventGetCustomOptionMinValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMinValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMinValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMinValue_Statics::CustomGameUserSettings_eventGetCustomOptionMinValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMinValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMinValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomGameUserSettings::execGetCustomOptionMinValue)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCustomOptionMinValue(Z_Param_Tag,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UCustomGameUserSettings Function GetCustomOptionMinValue *******************

// ********** Begin Class UCustomGameUserSettings Function ResetToFileSettings *********************
struct Z_Construct_UFunction_UCustomGameUserSettings_ResetToFileSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CustomGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGameUserSettings_ResetToFileSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCustomGameUserSettings, nullptr, "ResetToFileSettings", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_ResetToFileSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomGameUserSettings_ResetToFileSettings_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCustomGameUserSettings_ResetToFileSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGameUserSettings_ResetToFileSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomGameUserSettings::execResetToFileSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetToFileSettings();
	P_NATIVE_END;
}
// ********** End Class UCustomGameUserSettings Function ResetToFileSettings ***********************

// ********** Begin Class UCustomGameUserSettings Function SetAllCustomOptionsToDefaults ***********
struct Z_Construct_UFunction_UCustomGameUserSettings_SetAllCustomOptionsToDefaults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CustomGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGameUserSettings_SetAllCustomOptionsToDefaults_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCustomGameUserSettings, nullptr, "SetAllCustomOptionsToDefaults", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_SetAllCustomOptionsToDefaults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomGameUserSettings_SetAllCustomOptionsToDefaults_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCustomGameUserSettings_SetAllCustomOptionsToDefaults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGameUserSettings_SetAllCustomOptionsToDefaults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomGameUserSettings::execSetAllCustomOptionsToDefaults)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAllCustomOptionsToDefaults();
	P_NATIVE_END;
}
// ********** End Class UCustomGameUserSettings Function SetAllCustomOptionsToDefaults *************

// ********** Begin Class UCustomGameUserSettings Function SetAllToDefaults ************************
struct Z_Construct_UFunction_UCustomGameUserSettings_SetAllToDefaults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CustomGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGameUserSettings_SetAllToDefaults_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCustomGameUserSettings, nullptr, "SetAllToDefaults", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_SetAllToDefaults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomGameUserSettings_SetAllToDefaults_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCustomGameUserSettings_SetAllToDefaults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGameUserSettings_SetAllToDefaults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomGameUserSettings::execSetAllToDefaults)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAllToDefaults();
	P_NATIVE_END;
}
// ********** End Class UCustomGameUserSettings Function SetAllToDefaults **************************

// ********** Begin Class UCustomGameUserSettings Function SetCustomOption *************************
struct Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOption_Statics
{
	struct CustomGameUserSettings_eventSetCustomOption_Parms
	{
		FGameplayTag Tag;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CustomGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOption_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomGameUserSettings_eventSetCustomOption_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 133831994
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOption_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomGameUserSettings_eventSetCustomOption_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOption_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOption_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOption_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCustomGameUserSettings, nullptr, "SetCustomOption", Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOption_Statics::CustomGameUserSettings_eventSetCustomOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOption_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOption_Statics::CustomGameUserSettings_eventSetCustomOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomGameUserSettings::execSetCustomOption)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCustomOption(Z_Param_Tag,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UCustomGameUserSettings Function SetCustomOption ***************************

// ********** Begin Class UCustomGameUserSettings Function SetCustomOptionsToDefaults **************
struct Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOptionsToDefaults_Statics
{
	struct CustomGameUserSettings_eventSetCustomOptionsToDefaults_Parms
	{
		TArray<FGameplayTag> Tags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CustomGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOptionsToDefaults_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOptionsToDefaults_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomGameUserSettings_eventSetCustomOptionsToDefaults_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOptionsToDefaults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOptionsToDefaults_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOptionsToDefaults_Statics::NewProp_Tags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOptionsToDefaults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOptionsToDefaults_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCustomGameUserSettings, nullptr, "SetCustomOptionsToDefaults", Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOptionsToDefaults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOptionsToDefaults_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOptionsToDefaults_Statics::CustomGameUserSettings_eventSetCustomOptionsToDefaults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOptionsToDefaults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOptionsToDefaults_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOptionsToDefaults_Statics::CustomGameUserSettings_eventSetCustomOptionsToDefaults_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOptionsToDefaults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOptionsToDefaults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomGameUserSettings::execSetCustomOptionsToDefaults)
{
	P_GET_TARRAY(FGameplayTag,Z_Param_Tags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCustomOptionsToDefaults(Z_Param_Tags);
	P_NATIVE_END;
}
// ********** End Class UCustomGameUserSettings Function SetCustomOptionsToDefaults ****************

// ********** Begin Class UCustomGameUserSettings Function TryGetCustomOption **********************
struct Z_Construct_UFunction_UCustomGameUserSettings_TryGetCustomOption_Statics
{
	struct CustomGameUserSettings_eventTryGetCustomOption_Parms
	{
		FGameplayTag Tag;
		float OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CustomGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomGameUserSettings_TryGetCustomOption_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomGameUserSettings_eventTryGetCustomOption_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 133831994
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomGameUserSettings_TryGetCustomOption_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomGameUserSettings_eventTryGetCustomOption_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCustomGameUserSettings_TryGetCustomOption_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CustomGameUserSettings_eventTryGetCustomOption_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomGameUserSettings_TryGetCustomOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CustomGameUserSettings_eventTryGetCustomOption_Parms), &Z_Construct_UFunction_UCustomGameUserSettings_TryGetCustomOption_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGameUserSettings_TryGetCustomOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameUserSettings_TryGetCustomOption_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameUserSettings_TryGetCustomOption_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameUserSettings_TryGetCustomOption_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_TryGetCustomOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGameUserSettings_TryGetCustomOption_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCustomGameUserSettings, nullptr, "TryGetCustomOption", Z_Construct_UFunction_UCustomGameUserSettings_TryGetCustomOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_TryGetCustomOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomGameUserSettings_TryGetCustomOption_Statics::CustomGameUserSettings_eventTryGetCustomOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameUserSettings_TryGetCustomOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomGameUserSettings_TryGetCustomOption_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCustomGameUserSettings_TryGetCustomOption_Statics::CustomGameUserSettings_eventTryGetCustomOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomGameUserSettings_TryGetCustomOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGameUserSettings_TryGetCustomOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomGameUserSettings::execTryGetCustomOption)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryGetCustomOption(Z_Param_Tag,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UCustomGameUserSettings Function TryGetCustomOption ************************

// ********** Begin Class UCustomGameUserSettings **************************************************
void UCustomGameUserSettings::StaticRegisterNativesUCustomGameUserSettings()
{
	UClass* Class = UCustomGameUserSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyAllSettings", &UCustomGameUserSettings::execApplyAllSettings },
		{ "GetCustomOptionMaxValue", &UCustomGameUserSettings::execGetCustomOptionMaxValue },
		{ "GetCustomOptionMinValue", &UCustomGameUserSettings::execGetCustomOptionMinValue },
		{ "ResetToFileSettings", &UCustomGameUserSettings::execResetToFileSettings },
		{ "SetAllCustomOptionsToDefaults", &UCustomGameUserSettings::execSetAllCustomOptionsToDefaults },
		{ "SetAllToDefaults", &UCustomGameUserSettings::execSetAllToDefaults },
		{ "SetCustomOption", &UCustomGameUserSettings::execSetCustomOption },
		{ "SetCustomOptionsToDefaults", &UCustomGameUserSettings::execSetCustomOptionsToDefaults },
		{ "TryGetCustomOption", &UCustomGameUserSettings::execTryGetCustomOption },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCustomGameUserSettings;
UClass* UCustomGameUserSettings::GetPrivateStaticClass()
{
	using TClass = UCustomGameUserSettings;
	if (!Z_Registration_Info_UClass_UCustomGameUserSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CustomGameUserSettings"),
			Z_Registration_Info_UClass_UCustomGameUserSettings.InnerSingleton,
			StaticRegisterNativesUCustomGameUserSettings,
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
	return Z_Registration_Info_UClass_UCustomGameUserSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UCustomGameUserSettings_NoRegister()
{
	return UCustomGameUserSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCustomGameUserSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CustomGameUserSettings.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/CustomGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCustomOptionChanged_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/CustomGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCustomSettingsApplied_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/CustomGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnResetAllToDefaults_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/CustomGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnResetVideoToDefaults_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/CustomGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnResetCustomOptionsToDefaults_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/CustomGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCustomSettingsResetToCurrent_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/CustomGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCustomSettingsResetToFile_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/CustomGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCustomSettingsUINeedsUpdate_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/CustomGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSettingsMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CSSSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCustomOptionChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCustomSettingsApplied;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResetAllToDefaults;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResetVideoToDefaults;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResetCustomOptionsToDefaults;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCustomSettingsResetToCurrent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCustomSettingsResetToFile;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCustomSettingsUINeedsUpdate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentSettingsMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentSettingsMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CurrentSettingsMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CSSSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomGameUserSettings_ApplyAllSettings, "ApplyAllSettings" }, // 3809326175
		{ &Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMaxValue, "GetCustomOptionMaxValue" }, // 1393258372
		{ &Z_Construct_UFunction_UCustomGameUserSettings_GetCustomOptionMinValue, "GetCustomOptionMinValue" }, // 2981923782
		{ &Z_Construct_UFunction_UCustomGameUserSettings_ResetToFileSettings, "ResetToFileSettings" }, // 4106691106
		{ &Z_Construct_UFunction_UCustomGameUserSettings_SetAllCustomOptionsToDefaults, "SetAllCustomOptionsToDefaults" }, // 2873663694
		{ &Z_Construct_UFunction_UCustomGameUserSettings_SetAllToDefaults, "SetAllToDefaults" }, // 697421231
		{ &Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOption, "SetCustomOption" }, // 2235431202
		{ &Z_Construct_UFunction_UCustomGameUserSettings_SetCustomOptionsToDefaults, "SetCustomOptionsToDefaults" }, // 3955390219
		{ &Z_Construct_UFunction_UCustomGameUserSettings_TryGetCustomOption, "TryGetCustomOption" }, // 719060546
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomGameUserSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCustomGameUserSettings_Statics::NewProp_OnCustomOptionChanged = { "OnCustomOptionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomGameUserSettings, OnCustomOptionChanged), Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomOptionChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCustomOptionChanged_MetaData), NewProp_OnCustomOptionChanged_MetaData) }; // 363124492
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCustomGameUserSettings_Statics::NewProp_OnCustomSettingsApplied = { "OnCustomSettingsApplied", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomGameUserSettings, OnCustomSettingsApplied), Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsApplied__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCustomSettingsApplied_MetaData), NewProp_OnCustomSettingsApplied_MetaData) }; // 3805812718
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCustomGameUserSettings_Statics::NewProp_OnResetAllToDefaults = { "OnResetAllToDefaults", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomGameUserSettings, OnResetAllToDefaults), Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToDefaults__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnResetAllToDefaults_MetaData), NewProp_OnResetAllToDefaults_MetaData) }; // 557890229
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCustomGameUserSettings_Statics::NewProp_OnResetVideoToDefaults = { "OnResetVideoToDefaults", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomGameUserSettings, OnResetVideoToDefaults), Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToCurrent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnResetVideoToDefaults_MetaData), NewProp_OnResetVideoToDefaults_MetaData) }; // 793553536
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCustomGameUserSettings_Statics::NewProp_OnResetCustomOptionsToDefaults = { "OnResetCustomOptionsToDefaults", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomGameUserSettings, OnResetCustomOptionsToDefaults), Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToCurrent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnResetCustomOptionsToDefaults_MetaData), NewProp_OnResetCustomOptionsToDefaults_MetaData) }; // 793553536
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCustomGameUserSettings_Statics::NewProp_OnCustomSettingsResetToCurrent = { "OnCustomSettingsResetToCurrent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomGameUserSettings, OnCustomSettingsResetToCurrent), Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToCurrent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCustomSettingsResetToCurrent_MetaData), NewProp_OnCustomSettingsResetToCurrent_MetaData) }; // 793553536
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCustomGameUserSettings_Statics::NewProp_OnCustomSettingsResetToFile = { "OnCustomSettingsResetToFile", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomGameUserSettings, OnCustomSettingsResetToFile), Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToFile__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCustomSettingsResetToFile_MetaData), NewProp_OnCustomSettingsResetToFile_MetaData) }; // 3565399929
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCustomGameUserSettings_Statics::NewProp_OnCustomSettingsUINeedsUpdate = { "OnCustomSettingsUINeedsUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomGameUserSettings, OnCustomSettingsUINeedsUpdate), Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsUINeedsUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCustomSettingsUINeedsUpdate_MetaData), NewProp_OnCustomSettingsUINeedsUpdate_MetaData) }; // 1920538896
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomGameUserSettings_Statics::NewProp_CurrentSettingsMap_ValueProp = { "CurrentSettingsMap", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomGameUserSettings_Statics::NewProp_CurrentSettingsMap_Key_KeyProp = { "CurrentSettingsMap_Key", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCustomGameUserSettings_Statics::NewProp_CurrentSettingsMap = { "CurrentSettingsMap", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomGameUserSettings, CurrentSettingsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSettingsMap_MetaData), NewProp_CurrentSettingsMap_MetaData) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomGameUserSettings_Statics::NewProp_CSSSettings = { "CSSSettings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomGameUserSettings, CSSSettings), Z_Construct_UClass_UCSSSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CSSSettings_MetaData), NewProp_CSSSettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomGameUserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomGameUserSettings_Statics::NewProp_OnCustomOptionChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomGameUserSettings_Statics::NewProp_OnCustomSettingsApplied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomGameUserSettings_Statics::NewProp_OnResetAllToDefaults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomGameUserSettings_Statics::NewProp_OnResetVideoToDefaults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomGameUserSettings_Statics::NewProp_OnResetCustomOptionsToDefaults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomGameUserSettings_Statics::NewProp_OnCustomSettingsResetToCurrent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomGameUserSettings_Statics::NewProp_OnCustomSettingsResetToFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomGameUserSettings_Statics::NewProp_OnCustomSettingsUINeedsUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomGameUserSettings_Statics::NewProp_CurrentSettingsMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomGameUserSettings_Statics::NewProp_CurrentSettingsMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomGameUserSettings_Statics::NewProp_CurrentSettingsMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomGameUserSettings_Statics::NewProp_CSSSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameUserSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCustomGameUserSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameUserSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_CustomSettingsSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameUserSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomGameUserSettings_Statics::ClassParams = {
	&UCustomGameUserSettings::StaticClass,
	"GameUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCustomGameUserSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameUserSettings_Statics::PropPointers),
	0,
	0x409000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameUserSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomGameUserSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomGameUserSettings()
{
	if (!Z_Registration_Info_UClass_UCustomGameUserSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomGameUserSettings.OuterSingleton, Z_Construct_UClass_UCustomGameUserSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomGameUserSettings.OuterSingleton;
}
UCustomGameUserSettings::UCustomGameUserSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomGameUserSettings);
UCustomGameUserSettings::~UCustomGameUserSettings() {}
// ********** End Class UCustomGameUserSettings ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CustomGameUserSettings_h__Script_CustomSettingsSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomGameUserSettings, UCustomGameUserSettings::StaticClass, TEXT("UCustomGameUserSettings"), &Z_Registration_Info_UClass_UCustomGameUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomGameUserSettings), 3874363548U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CustomGameUserSettings_h__Script_CustomSettingsSystem_205140495(TEXT("/Script/CustomSettingsSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CustomGameUserSettings_h__Script_CustomSettingsSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CustomGameUserSettings_h__Script_CustomSettingsSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
