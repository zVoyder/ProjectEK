// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckpointSystem_init() {}
	CHECKPOINTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CheckpointSystem_OnCheckpointReached__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CheckpointSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CheckpointSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_CheckpointSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CheckpointSystem_OnCheckpointReached__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CheckpointSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x6C35D6E5,
				0x4945C116,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CheckpointSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CheckpointSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CheckpointSystem(Z_Construct_UPackage__Script_CheckpointSystem, TEXT("/Script/CheckpointSystem"), Z_Registration_Info_UPackage__Script_CheckpointSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6C35D6E5, 0x4945C116));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
