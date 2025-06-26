// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrosshairSystem_init() {}
	CROSSHAIRSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CrosshairSystem_OnCompleteOpening__DelegateSignature();
	CROSSHAIRSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CrosshairSystem_OnCompltedClosing__DelegateSignature();
	CROSSHAIRSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CrosshairSystem_OnStartClosing__DelegateSignature();
	CROSSHAIRSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CrosshairSystem_OnStartOpening__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CrosshairSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CrosshairSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_CrosshairSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CrosshairSystem_OnCompleteOpening__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CrosshairSystem_OnCompltedClosing__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CrosshairSystem_OnStartClosing__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CrosshairSystem_OnStartOpening__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CrosshairSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xBD03238E,
				0xBBB7B69B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CrosshairSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CrosshairSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CrosshairSystem(Z_Construct_UPackage__Script_CrosshairSystem, TEXT("/Script/CrosshairSystem"), Z_Registration_Info_UPackage__Script_CrosshairSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBD03238E, 0xBBB7B69B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
