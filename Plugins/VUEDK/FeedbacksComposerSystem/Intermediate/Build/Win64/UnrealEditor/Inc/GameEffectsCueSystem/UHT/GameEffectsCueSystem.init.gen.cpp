// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameEffectsCueSystem_init() {}
	GAMEEFFECTSCUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueFinished__DelegateSignature();
	GAMEEFFECTSCUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueResumed__DelegateSignature();
	GAMEEFFECTSCUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueStarted__DelegateSignature();
	GAMEEFFECTSCUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueStopped__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GameEffectsCueSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GameEffectsCueSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_GameEffectsCueSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueFinished__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueResumed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueStarted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueStopped__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GameEffectsCueSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xBB316DD1,
				0x5370C5C0,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GameEffectsCueSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GameEffectsCueSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GameEffectsCueSystem(Z_Construct_UPackage__Script_GameEffectsCueSystem, TEXT("/Script/GameEffectsCueSystem"), Z_Registration_Info_UPackage__Script_GameEffectsCueSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBB316DD1, 0x5370C5C0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
