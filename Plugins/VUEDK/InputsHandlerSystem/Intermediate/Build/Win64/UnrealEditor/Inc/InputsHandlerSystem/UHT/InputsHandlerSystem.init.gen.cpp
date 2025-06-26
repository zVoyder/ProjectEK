// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputsHandlerSystem_init() {}
	INPUTSHANDLERSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InputsHandlerSystem_OnGampleayMappingContextSet__DelegateSignature();
	INPUTSHANDLERSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InputsHandlerSystem_OnUIMappingContextSet__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_InputsHandlerSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_InputsHandlerSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_InputsHandlerSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_InputsHandlerSystem_OnGampleayMappingContextSet__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_InputsHandlerSystem_OnUIMappingContextSet__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/InputsHandlerSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1FD64578,
				0xD1BE15BA,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_InputsHandlerSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_InputsHandlerSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_InputsHandlerSystem(Z_Construct_UPackage__Script_InputsHandlerSystem, TEXT("/Script/InputsHandlerSystem"), Z_Registration_Info_UPackage__Script_InputsHandlerSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1FD64578, 0xD1BE15BA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
