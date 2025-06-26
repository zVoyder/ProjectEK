// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomSettingsSystem_init() {}
	CUSTOMSETTINGSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomOptionChanged__DelegateSignature();
	CUSTOMSETTINGSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsApplied__DelegateSignature();
	CUSTOMSETTINGSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToCurrent__DelegateSignature();
	CUSTOMSETTINGSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToDefaults__DelegateSignature();
	CUSTOMSETTINGSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToFile__DelegateSignature();
	CUSTOMSETTINGSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsUINeedsUpdate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CustomSettingsSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CustomSettingsSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_CustomSettingsSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomOptionChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsApplied__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToCurrent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToDefaults__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsResetToFile__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CustomSettingsSystem_OnCustomSettingsUINeedsUpdate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CustomSettingsSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xECA5A4C3,
				0xA2B27F34,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CustomSettingsSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CustomSettingsSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CustomSettingsSystem(Z_Construct_UPackage__Script_CustomSettingsSystem, TEXT("/Script/CustomSettingsSystem"), Z_Registration_Info_UPackage__Script_CustomSettingsSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xECA5A4C3, 0xA2B27F34));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
