// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBetterDragSystem_init() {}
	BETTERDRAGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationEnded__DelegateSignature();
	BETTERDRAGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationStarted__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BetterDragSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BetterDragSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_BetterDragSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationEnded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BetterDragSystem_BetterDragDropOperationStarted__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BetterDragSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF026D002,
				0x73942FC7,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BetterDragSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BetterDragSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BetterDragSystem(Z_Construct_UPackage__Script_BetterDragSystem, TEXT("/Script/BetterDragSystem"), Z_Registration_Info_UPackage__Script_BetterDragSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF026D002, 0x73942FC7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
