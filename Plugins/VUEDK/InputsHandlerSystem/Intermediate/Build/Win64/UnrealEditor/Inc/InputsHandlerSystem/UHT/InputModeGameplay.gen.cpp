// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/InputModeGameplay.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInputModeGameplay() {}

// ********** Begin Cross Module References ********************************************************
INPUTSHANDLERSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInputModeGameplay();
UPackage* Z_Construct_UPackage__Script_InputsHandlerSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FInputModeGameplay ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInputModeGameplay;
class UScriptStruct* FInputModeGameplay::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInputModeGameplay.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInputModeGameplay.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputModeGameplay, (UObject*)Z_Construct_UPackage__Script_InputsHandlerSystem(), TEXT("InputModeGameplay"));
	}
	return Z_Registration_Info_UScriptStruct_FInputModeGameplay.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInputModeGameplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/InputModeGameplay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowMouseCursor_MetaData[] = {
		{ "Category", "Input Mode" },
		{ "ModuleRelativePath", "Public/Data/InputModeGameplay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlushInputs_MetaData[] = {
		{ "Category", "Input Mode" },
		{ "ModuleRelativePath", "Public/Data/InputModeGameplay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConsumeCaptureMouseDown_MetaData[] = {
		{ "Category", "Input Mode" },
		{ "ModuleRelativePath", "Public/Data/InputModeGameplay.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShowMouseCursor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowMouseCursor;
	static void NewProp_bFlushInputs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlushInputs;
	static void NewProp_bConsumeCaptureMouseDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsumeCaptureMouseDown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputModeGameplay>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FInputModeGameplay_Statics::NewProp_bShowMouseCursor_SetBit(void* Obj)
{
	((FInputModeGameplay*)Obj)->bShowMouseCursor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputModeGameplay_Statics::NewProp_bShowMouseCursor = { "bShowMouseCursor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputModeGameplay), &Z_Construct_UScriptStruct_FInputModeGameplay_Statics::NewProp_bShowMouseCursor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowMouseCursor_MetaData), NewProp_bShowMouseCursor_MetaData) };
void Z_Construct_UScriptStruct_FInputModeGameplay_Statics::NewProp_bFlushInputs_SetBit(void* Obj)
{
	((FInputModeGameplay*)Obj)->bFlushInputs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputModeGameplay_Statics::NewProp_bFlushInputs = { "bFlushInputs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputModeGameplay), &Z_Construct_UScriptStruct_FInputModeGameplay_Statics::NewProp_bFlushInputs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlushInputs_MetaData), NewProp_bFlushInputs_MetaData) };
void Z_Construct_UScriptStruct_FInputModeGameplay_Statics::NewProp_bConsumeCaptureMouseDown_SetBit(void* Obj)
{
	((FInputModeGameplay*)Obj)->bConsumeCaptureMouseDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputModeGameplay_Statics::NewProp_bConsumeCaptureMouseDown = { "bConsumeCaptureMouseDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputModeGameplay), &Z_Construct_UScriptStruct_FInputModeGameplay_Statics::NewProp_bConsumeCaptureMouseDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConsumeCaptureMouseDown_MetaData), NewProp_bConsumeCaptureMouseDown_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputModeGameplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputModeGameplay_Statics::NewProp_bShowMouseCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputModeGameplay_Statics::NewProp_bFlushInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputModeGameplay_Statics::NewProp_bConsumeCaptureMouseDown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputModeGameplay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputModeGameplay_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InputsHandlerSystem,
	nullptr,
	&NewStructOps,
	"InputModeGameplay",
	Z_Construct_UScriptStruct_FInputModeGameplay_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputModeGameplay_Statics::PropPointers),
	sizeof(FInputModeGameplay),
	alignof(FInputModeGameplay),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputModeGameplay_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputModeGameplay_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputModeGameplay()
{
	if (!Z_Registration_Info_UScriptStruct_FInputModeGameplay.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInputModeGameplay.InnerSingleton, Z_Construct_UScriptStruct_FInputModeGameplay_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInputModeGameplay.InnerSingleton;
}
// ********** End ScriptStruct FInputModeGameplay **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Data_InputModeGameplay_h__Script_InputsHandlerSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInputModeGameplay::StaticStruct, Z_Construct_UScriptStruct_FInputModeGameplay_Statics::NewStructOps, TEXT("InputModeGameplay"), &Z_Registration_Info_UScriptStruct_FInputModeGameplay, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputModeGameplay), 3892960342U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Data_InputModeGameplay_h__Script_InputsHandlerSystem_3004641984(TEXT("/Script/InputsHandlerSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Data_InputModeGameplay_h__Script_InputsHandlerSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Data_InputModeGameplay_h__Script_InputsHandlerSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
