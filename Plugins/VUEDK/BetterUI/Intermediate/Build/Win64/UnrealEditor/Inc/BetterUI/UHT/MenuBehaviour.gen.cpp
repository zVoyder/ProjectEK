// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/MenuBehaviour.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMenuBehaviour() {}

// ********** Begin Cross Module References ********************************************************
BETTERUI_API UEnum* Z_Construct_UEnum_BetterUI_EMenuBehaviour();
UPackage* Z_Construct_UPackage__Script_BetterUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMenuBehaviour ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMenuBehaviour;
static UEnum* EMenuBehaviour_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMenuBehaviour.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMenuBehaviour.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BetterUI_EMenuBehaviour, (UObject*)Z_Construct_UPackage__Script_BetterUI(), TEXT("EMenuBehaviour"));
	}
	return Z_Registration_Info_UEnum_EMenuBehaviour.OuterSingleton;
}
template<> BETTERUI_API UEnum* StaticEnum<EMenuBehaviour>()
{
	return EMenuBehaviour_StaticEnum();
}
struct Z_Construct_UEnum_BetterUI_EMenuBehaviour_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlockNewOpenings.DisplayName", "BlockNewOpenings" },
		{ "BlockNewOpenings.Name", "EMenuBehaviour::BlockNewOpenings" },
		{ "BlockNewOpenings.ToolTip", "If the menu is open, it will block all other menus from opening." },
		{ "BlueprintType", "true" },
		{ "CloseCurrentMenu.DisplayName", "CloseCurrentMenu" },
		{ "CloseCurrentMenu.Name", "EMenuBehaviour::CloseCurrentMenu" },
		{ "CloseCurrentMenu.ToolTip", "If the menu is open, it will close the current menu." },
		{ "ModuleRelativePath", "Public/Data/MenuBehaviour.h" },
		{ "SwitchMenu.DisplayName", "SwitchMenu" },
		{ "SwitchMenu.Name", "EMenuBehaviour::SwitchMenu" },
		{ "SwitchMenu.ToolTip", "If the menu is open, it will close the current menu and open the new one." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMenuBehaviour::BlockNewOpenings", (int64)EMenuBehaviour::BlockNewOpenings },
		{ "EMenuBehaviour::SwitchMenu", (int64)EMenuBehaviour::SwitchMenu },
		{ "EMenuBehaviour::CloseCurrentMenu", (int64)EMenuBehaviour::CloseCurrentMenu },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BetterUI_EMenuBehaviour_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BetterUI,
	nullptr,
	"EMenuBehaviour",
	"EMenuBehaviour",
	Z_Construct_UEnum_BetterUI_EMenuBehaviour_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BetterUI_EMenuBehaviour_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BetterUI_EMenuBehaviour_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BetterUI_EMenuBehaviour_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BetterUI_EMenuBehaviour()
{
	if (!Z_Registration_Info_UEnum_EMenuBehaviour.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMenuBehaviour.InnerSingleton, Z_Construct_UEnum_BetterUI_EMenuBehaviour_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMenuBehaviour.InnerSingleton;
}
// ********** End Enum EMenuBehaviour **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Data_MenuBehaviour_h__Script_BetterUI_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMenuBehaviour_StaticEnum, TEXT("EMenuBehaviour"), &Z_Registration_Info_UEnum_EMenuBehaviour, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 808151441U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Data_MenuBehaviour_h__Script_BetterUI_4141980420(TEXT("/Script/BetterUI"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Data_MenuBehaviour_h__Script_BetterUI_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Data_MenuBehaviour_h__Script_BetterUI_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
