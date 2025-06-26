// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGSystem_init() {}
	RPGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedCoreStatsValues__DelegateSignature();
	RPGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedFullStatsValues__DelegateSignature();
	RPGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_RPGSystem_OnRequestCompare__DelegateSignature();
	RPGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_RPGSystem_OnStatsValuesChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RPGSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RPGSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_RPGSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedCoreStatsValues__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RPGSystem_OnCalculatedFullStatsValues__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RPGSystem_OnRequestCompare__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RPGSystem_OnStatsValuesChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RPGSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9953344F,
				0xB066C91A,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RPGSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RPGSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RPGSystem(Z_Construct_UPackage__Script_RPGSystem, TEXT("/Script/RPGSystem"), Z_Registration_Info_UPackage__Script_RPGSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9953344F, 0xB066C91A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
