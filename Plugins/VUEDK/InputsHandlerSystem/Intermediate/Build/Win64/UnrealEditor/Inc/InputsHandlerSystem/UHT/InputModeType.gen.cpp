// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/InputModeType.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInputModeType() {}

// ********** Begin Cross Module References ********************************************************
INPUTSHANDLERSYSTEM_API UEnum* Z_Construct_UEnum_InputsHandlerSystem_EInputModeType();
UPackage* Z_Construct_UPackage__Script_InputsHandlerSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EInputModeType ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputModeType;
static UEnum* EInputModeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInputModeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInputModeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InputsHandlerSystem_EInputModeType, (UObject*)Z_Construct_UPackage__Script_InputsHandlerSystem(), TEXT("EInputModeType"));
	}
	return Z_Registration_Info_UEnum_EInputModeType.OuterSingleton;
}
template<> INPUTSHANDLERSYSTEM_API UEnum* StaticEnum<EInputModeType>()
{
	return EInputModeType_StaticEnum();
}
struct Z_Construct_UEnum_InputsHandlerSystem_EInputModeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "InputModeGameplay.DisplayName", "Gameplay" },
		{ "InputModeGameplay.Name", "EInputModeType::InputModeGameplay" },
		{ "InputModeNone.DisplayName", "None" },
		{ "InputModeNone.Name", "EInputModeType::InputModeNone" },
		{ "InputModeUI.DisplayName", "UI" },
		{ "InputModeUI.Name", "EInputModeType::InputModeUI" },
		{ "ModuleRelativePath", "Public/Data/InputModeType.h" },
		{ "NotBlueprintType", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInputModeType::InputModeNone", (int64)EInputModeType::InputModeNone },
		{ "EInputModeType::InputModeGameplay", (int64)EInputModeType::InputModeGameplay },
		{ "EInputModeType::InputModeUI", (int64)EInputModeType::InputModeUI },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InputsHandlerSystem_EInputModeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InputsHandlerSystem,
	nullptr,
	"EInputModeType",
	"EInputModeType",
	Z_Construct_UEnum_InputsHandlerSystem_EInputModeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InputsHandlerSystem_EInputModeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InputsHandlerSystem_EInputModeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InputsHandlerSystem_EInputModeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InputsHandlerSystem_EInputModeType()
{
	if (!Z_Registration_Info_UEnum_EInputModeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputModeType.InnerSingleton, Z_Construct_UEnum_InputsHandlerSystem_EInputModeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInputModeType.InnerSingleton;
}
// ********** End Enum EInputModeType **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Data_InputModeType_h__Script_InputsHandlerSystem_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInputModeType_StaticEnum, TEXT("EInputModeType"), &Z_Registration_Info_UEnum_EInputModeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2065394215U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Data_InputModeType_h__Script_InputsHandlerSystem_701691020(TEXT("/Script/InputsHandlerSystem"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Data_InputModeType_h__Script_InputsHandlerSystem_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Data_InputModeType_h__Script_InputsHandlerSystem_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
