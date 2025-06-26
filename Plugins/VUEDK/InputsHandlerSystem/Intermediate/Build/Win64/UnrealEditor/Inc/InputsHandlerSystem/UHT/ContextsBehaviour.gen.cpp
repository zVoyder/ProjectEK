// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/ContextsBehaviour.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeContextsBehaviour() {}

// ********** Begin Cross Module References ********************************************************
INPUTSHANDLERSYSTEM_API UEnum* Z_Construct_UEnum_InputsHandlerSystem_EContextsBehaviour();
UPackage* Z_Construct_UPackage__Script_InputsHandlerSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EContextsBehaviour ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EContextsBehaviour;
static UEnum* EContextsBehaviour_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EContextsBehaviour.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EContextsBehaviour.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InputsHandlerSystem_EContextsBehaviour, (UObject*)Z_Construct_UPackage__Script_InputsHandlerSystem(), TEXT("EContextsBehaviour"));
	}
	return Z_Registration_Info_UEnum_EContextsBehaviour.OuterSingleton;
}
template<> INPUTSHANDLERSYSTEM_API UEnum* StaticEnum<EContextsBehaviour>()
{
	return EContextsBehaviour_StaticEnum();
}
struct Z_Construct_UEnum_InputsHandlerSystem_EContextsBehaviour_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/ContextsBehaviour.h" },
		{ "Priority.DisplayName", "Priority" },
		{ "Priority.Name", "EContextsBehaviour::Priority" },
		{ "Priority.ToolTip", "Add the UI contexts with a priority, keeping the gameplay inputs active." },
		{ "Switch.DisplayName", "Switch" },
		{ "Switch.Name", "EContextsBehaviour::Switch" },
		{ "Switch.ToolTip", "Remove the gameplay contexts and add the UI context, disabling the gameplay inputs." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EContextsBehaviour::Switch", (int64)EContextsBehaviour::Switch },
		{ "EContextsBehaviour::Priority", (int64)EContextsBehaviour::Priority },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InputsHandlerSystem_EContextsBehaviour_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InputsHandlerSystem,
	nullptr,
	"EContextsBehaviour",
	"EContextsBehaviour",
	Z_Construct_UEnum_InputsHandlerSystem_EContextsBehaviour_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InputsHandlerSystem_EContextsBehaviour_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InputsHandlerSystem_EContextsBehaviour_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InputsHandlerSystem_EContextsBehaviour_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InputsHandlerSystem_EContextsBehaviour()
{
	if (!Z_Registration_Info_UEnum_EContextsBehaviour.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EContextsBehaviour.InnerSingleton, Z_Construct_UEnum_InputsHandlerSystem_EContextsBehaviour_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EContextsBehaviour.InnerSingleton;
}
// ********** End Enum EContextsBehaviour **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Data_ContextsBehaviour_h__Script_InputsHandlerSystem_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EContextsBehaviour_StaticEnum, TEXT("EContextsBehaviour"), &Z_Registration_Info_UEnum_EContextsBehaviour, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1627090170U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Data_ContextsBehaviour_h__Script_InputsHandlerSystem_145905119(TEXT("/Script/InputsHandlerSystem"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Data_ContextsBehaviour_h__Script_InputsHandlerSystem_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Data_ContextsBehaviour_h__Script_InputsHandlerSystem_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
