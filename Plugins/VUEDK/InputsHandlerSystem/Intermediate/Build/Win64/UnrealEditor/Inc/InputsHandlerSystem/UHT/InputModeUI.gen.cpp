// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/InputModeUI.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInputModeUI() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseLockMode();
INPUTSHANDLERSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInputModeUI();
UPackage* Z_Construct_UPackage__Script_InputsHandlerSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FInputModeUI ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInputModeUI;
class UScriptStruct* FInputModeUI::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInputModeUI.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInputModeUI.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputModeUI, (UObject*)Z_Construct_UPackage__Script_InputsHandlerSystem(), TEXT("InputModeUI"));
	}
	return Z_Registration_Info_UScriptStruct_FInputModeUI.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInputModeUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/InputModeUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowMouseCursor_MetaData[] = {
		{ "Category", "Input Mode" },
		{ "ModuleRelativePath", "Public/Data/InputModeUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlushInputs_MetaData[] = {
		{ "Category", "Input Mode" },
		{ "ModuleRelativePath", "Public/Data/InputModeUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideCursorDuringCapture_MetaData[] = {
		{ "Category", "Input Mode" },
		{ "ModuleRelativePath", "Public/Data/InputModeUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCenterMouseOnViewport_MetaData[] = {
		{ "Category", "Input Mode" },
		{ "ModuleRelativePath", "Public/Data/InputModeUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockMouseToViewportBehavior_MetaData[] = {
		{ "Category", "Input Mode" },
		{ "ModuleRelativePath", "Public/Data/InputModeUI.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShowMouseCursor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowMouseCursor;
	static void NewProp_bFlushInputs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlushInputs;
	static void NewProp_bHideCursorDuringCapture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideCursorDuringCapture;
	static void NewProp_bCenterMouseOnViewport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenterMouseOnViewport;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LockMouseToViewportBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LockMouseToViewportBehavior;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputModeUI>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FInputModeUI_Statics::NewProp_bShowMouseCursor_SetBit(void* Obj)
{
	((FInputModeUI*)Obj)->bShowMouseCursor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputModeUI_Statics::NewProp_bShowMouseCursor = { "bShowMouseCursor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputModeUI), &Z_Construct_UScriptStruct_FInputModeUI_Statics::NewProp_bShowMouseCursor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowMouseCursor_MetaData), NewProp_bShowMouseCursor_MetaData) };
void Z_Construct_UScriptStruct_FInputModeUI_Statics::NewProp_bFlushInputs_SetBit(void* Obj)
{
	((FInputModeUI*)Obj)->bFlushInputs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputModeUI_Statics::NewProp_bFlushInputs = { "bFlushInputs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputModeUI), &Z_Construct_UScriptStruct_FInputModeUI_Statics::NewProp_bFlushInputs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlushInputs_MetaData), NewProp_bFlushInputs_MetaData) };
void Z_Construct_UScriptStruct_FInputModeUI_Statics::NewProp_bHideCursorDuringCapture_SetBit(void* Obj)
{
	((FInputModeUI*)Obj)->bHideCursorDuringCapture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputModeUI_Statics::NewProp_bHideCursorDuringCapture = { "bHideCursorDuringCapture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputModeUI), &Z_Construct_UScriptStruct_FInputModeUI_Statics::NewProp_bHideCursorDuringCapture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideCursorDuringCapture_MetaData), NewProp_bHideCursorDuringCapture_MetaData) };
void Z_Construct_UScriptStruct_FInputModeUI_Statics::NewProp_bCenterMouseOnViewport_SetBit(void* Obj)
{
	((FInputModeUI*)Obj)->bCenterMouseOnViewport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputModeUI_Statics::NewProp_bCenterMouseOnViewport = { "bCenterMouseOnViewport", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputModeUI), &Z_Construct_UScriptStruct_FInputModeUI_Statics::NewProp_bCenterMouseOnViewport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCenterMouseOnViewport_MetaData), NewProp_bCenterMouseOnViewport_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInputModeUI_Statics::NewProp_LockMouseToViewportBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInputModeUI_Statics::NewProp_LockMouseToViewportBehavior = { "LockMouseToViewportBehavior", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputModeUI, LockMouseToViewportBehavior), Z_Construct_UEnum_Engine_EMouseLockMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockMouseToViewportBehavior_MetaData), NewProp_LockMouseToViewportBehavior_MetaData) }; // 2166499711
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputModeUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputModeUI_Statics::NewProp_bShowMouseCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputModeUI_Statics::NewProp_bFlushInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputModeUI_Statics::NewProp_bHideCursorDuringCapture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputModeUI_Statics::NewProp_bCenterMouseOnViewport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputModeUI_Statics::NewProp_LockMouseToViewportBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputModeUI_Statics::NewProp_LockMouseToViewportBehavior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputModeUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputModeUI_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InputsHandlerSystem,
	nullptr,
	&NewStructOps,
	"InputModeUI",
	Z_Construct_UScriptStruct_FInputModeUI_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputModeUI_Statics::PropPointers),
	sizeof(FInputModeUI),
	alignof(FInputModeUI),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputModeUI_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputModeUI_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputModeUI()
{
	if (!Z_Registration_Info_UScriptStruct_FInputModeUI.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInputModeUI.InnerSingleton, Z_Construct_UScriptStruct_FInputModeUI_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInputModeUI.InnerSingleton;
}
// ********** End ScriptStruct FInputModeUI ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Data_InputModeUI_h__Script_InputsHandlerSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInputModeUI::StaticStruct, Z_Construct_UScriptStruct_FInputModeUI_Statics::NewStructOps, TEXT("InputModeUI"), &Z_Registration_Info_UScriptStruct_FInputModeUI, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputModeUI), 538002330U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Data_InputModeUI_h__Script_InputsHandlerSystem_4005419804(TEXT("/Script/InputsHandlerSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Data_InputModeUI_h__Script_InputsHandlerSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Data_InputModeUI_h__Script_InputsHandlerSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
