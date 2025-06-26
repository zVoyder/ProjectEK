// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFeedbacksComposerSystem_init() {}
	FEEDBACKSCOMPOSERSYSTEM_API UFunction* Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueFinished__DelegateSignature();
	FEEDBACKSCOMPOSERSYSTEM_API UFunction* Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueResumed__DelegateSignature();
	FEEDBACKSCOMPOSERSYSTEM_API UFunction* Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueStarted__DelegateSignature();
	FEEDBACKSCOMPOSERSYSTEM_API UFunction* Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueStopped__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FeedbacksComposerSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FeedbacksComposerSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_FeedbacksComposerSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueFinished__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueResumed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueStarted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueStopped__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FeedbacksComposerSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x7ECF38A3,
				0x0CD92A10,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FeedbacksComposerSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FeedbacksComposerSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FeedbacksComposerSystem(Z_Construct_UPackage__Script_FeedbacksComposerSystem, TEXT("/Script/FeedbacksComposerSystem"), Z_Registration_Info_UPackage__Script_FeedbacksComposerSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7ECF38A3, 0x0CD92A10));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
