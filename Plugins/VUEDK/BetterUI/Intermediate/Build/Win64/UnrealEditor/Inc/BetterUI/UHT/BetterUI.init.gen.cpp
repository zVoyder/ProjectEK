// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBetterUI_init() {}
	BETTERUI_API UFunction* Z_Construct_UDelegateFunction_BetterUI_OnDeselected__DelegateSignature();
	BETTERUI_API UFunction* Z_Construct_UDelegateFunction_BetterUI_OnMenuClosed__DelegateSignature();
	BETTERUI_API UFunction* Z_Construct_UDelegateFunction_BetterUI_OnMenuOpened__DelegateSignature();
	BETTERUI_API UFunction* Z_Construct_UDelegateFunction_BetterUI_OnMenuWidgetClosed__DelegateSignature();
	BETTERUI_API UFunction* Z_Construct_UDelegateFunction_BetterUI_OnMenuWidgetOpened__DelegateSignature();
	BETTERUI_API UFunction* Z_Construct_UDelegateFunction_BetterUI_OnSelected__DelegateSignature();
	BETTERUI_API UFunction* Z_Construct_UDelegateFunction_BetterUI_OnWidgetSwitched__DelegateSignature();
	BETTERUI_API UFunction* Z_Construct_UDelegateFunction_BetterUI_RequestBack__DelegateSignature();
	BETTERUI_API UFunction* Z_Construct_UDelegateFunction_BetterUI_RequestConfirm__DelegateSignature();
	BETTERUI_API UFunction* Z_Construct_UDelegateFunction_BetterUI_RequestLeftSelect__DelegateSignature();
	BETTERUI_API UFunction* Z_Construct_UDelegateFunction_BetterUI_RequestRightSelect__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BetterUI;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BetterUI()
	{
		if (!Z_Registration_Info_UPackage__Script_BetterUI.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BetterUI_OnDeselected__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BetterUI_OnMenuClosed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BetterUI_OnMenuOpened__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BetterUI_OnMenuWidgetClosed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BetterUI_OnMenuWidgetOpened__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BetterUI_OnSelected__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BetterUI_OnWidgetSwitched__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BetterUI_RequestBack__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BetterUI_RequestConfirm__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BetterUI_RequestLeftSelect__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BetterUI_RequestRightSelect__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BetterUI",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x2E84B5D8,
				0xC6DB6F47,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BetterUI.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BetterUI.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BetterUI(Z_Construct_UPackage__Script_BetterUI, TEXT("/Script/BetterUI"), Z_Registration_Info_UPackage__Script_BetterUI, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2E84B5D8, 0xC6DB6F47));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
