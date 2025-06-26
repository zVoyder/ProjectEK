// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedbacksComposerSystem/Public/FeedbacksCue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFeedbacksCue() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
FEEDBACKSCOMPOSERSYSTEM_API UClass* Z_Construct_UClass_UFeedbackBase_NoRegister();
FEEDBACKSCOMPOSERSYSTEM_API UClass* Z_Construct_UClass_UFeedbacksCue();
FEEDBACKSCOMPOSERSYSTEM_API UClass* Z_Construct_UClass_UFeedbacksCue_NoRegister();
FEEDBACKSCOMPOSERSYSTEM_API UFunction* Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueFinished__DelegateSignature();
FEEDBACKSCOMPOSERSYSTEM_API UFunction* Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueResumed__DelegateSignature();
FEEDBACKSCOMPOSERSYSTEM_API UFunction* Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueStarted__DelegateSignature();
FEEDBACKSCOMPOSERSYSTEM_API UFunction* Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueStopped__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_FeedbacksComposerSystem();
// End Cross Module References

// Begin Delegate FOnCueStarted
struct Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueStarted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FeedbacksCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FeedbacksComposerSystem, nullptr, "OnCueStarted__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueStarted__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueStarted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueStarted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCueStarted_DelegateWrapper(const FMulticastScriptDelegate& OnCueStarted)
{
	OnCueStarted.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnCueStarted

// Begin Delegate FOnCueStopped
struct Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueStopped__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FeedbacksCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueStopped__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FeedbacksComposerSystem, nullptr, "OnCueStopped__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueStopped__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueStopped__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueStopped__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueStopped__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCueStopped_DelegateWrapper(const FMulticastScriptDelegate& OnCueStopped)
{
	OnCueStopped.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnCueStopped

// Begin Delegate FOnCueResumed
struct Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueResumed__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FeedbacksCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueResumed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FeedbacksComposerSystem, nullptr, "OnCueResumed__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueResumed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueResumed__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueResumed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueResumed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCueResumed_DelegateWrapper(const FMulticastScriptDelegate& OnCueResumed)
{
	OnCueResumed.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnCueResumed

// Begin Delegate FOnCueFinished
struct Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueFinished__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FeedbacksCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FeedbacksComposerSystem, nullptr, "OnCueFinished__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueFinished__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueFinished__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueFinished__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCueFinished_DelegateWrapper(const FMulticastScriptDelegate& OnCueFinished)
{
	OnCueFinished.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnCueFinished

// Begin Class UFeedbacksCue Function InterruptCue
struct Z_Construct_UFunction_UFeedbacksCue_InterruptCue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FeedbacksCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbacksCue_InterruptCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbacksCue, nullptr, "InterruptCue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbacksCue_InterruptCue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbacksCue_InterruptCue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFeedbacksCue_InterruptCue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbacksCue_InterruptCue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFeedbacksCue::execInterruptCue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InterruptCue();
	P_NATIVE_END;
}
// End Class UFeedbacksCue Function InterruptCue

// Begin Class UFeedbacksCue Function NextFeedback
struct Z_Construct_UFunction_UFeedbacksCue_NextFeedback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FeedbacksCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbacksCue_NextFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbacksCue, nullptr, "NextFeedback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbacksCue_NextFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbacksCue_NextFeedback_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFeedbacksCue_NextFeedback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbacksCue_NextFeedback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFeedbacksCue::execNextFeedback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextFeedback();
	P_NATIVE_END;
}
// End Class UFeedbacksCue Function NextFeedback

// Begin Class UFeedbacksCue Function PlayFeedBackAtIndex
struct Z_Construct_UFunction_UFeedbacksCue_PlayFeedBackAtIndex_Statics
{
	struct FeedbacksCue_eventPlayFeedBackAtIndex_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FeedbacksCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFeedbacksCue_PlayFeedBackAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbacksCue_eventPlayFeedBackAtIndex_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbacksCue_PlayFeedBackAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbacksCue_PlayFeedBackAtIndex_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbacksCue_PlayFeedBackAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbacksCue_PlayFeedBackAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbacksCue, nullptr, "PlayFeedBackAtIndex", nullptr, nullptr, Z_Construct_UFunction_UFeedbacksCue_PlayFeedBackAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbacksCue_PlayFeedBackAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFeedbacksCue_PlayFeedBackAtIndex_Statics::FeedbacksCue_eventPlayFeedBackAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbacksCue_PlayFeedBackAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbacksCue_PlayFeedBackAtIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFeedbacksCue_PlayFeedBackAtIndex_Statics::FeedbacksCue_eventPlayFeedBackAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFeedbacksCue_PlayFeedBackAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbacksCue_PlayFeedBackAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFeedbacksCue::execPlayFeedBackAtIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayFeedBackAtIndex(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UFeedbacksCue Function PlayFeedBackAtIndex

// Begin Class UFeedbacksCue Function PreviousFeedback
struct Z_Construct_UFunction_UFeedbacksCue_PreviousFeedback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FeedbacksCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbacksCue_PreviousFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbacksCue, nullptr, "PreviousFeedback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbacksCue_PreviousFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbacksCue_PreviousFeedback_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFeedbacksCue_PreviousFeedback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbacksCue_PreviousFeedback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFeedbacksCue::execPreviousFeedback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PreviousFeedback();
	P_NATIVE_END;
}
// End Class UFeedbacksCue Function PreviousFeedback

// Begin Class UFeedbacksCue Function ResumeCue
struct Z_Construct_UFunction_UFeedbacksCue_ResumeCue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FeedbacksCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbacksCue_ResumeCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbacksCue, nullptr, "ResumeCue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbacksCue_ResumeCue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbacksCue_ResumeCue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFeedbacksCue_ResumeCue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbacksCue_ResumeCue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFeedbacksCue::execResumeCue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResumeCue();
	P_NATIVE_END;
}
// End Class UFeedbacksCue Function ResumeCue

// Begin Class UFeedbacksCue Function StartCue
struct Z_Construct_UFunction_UFeedbacksCue_StartCue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FeedbacksCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbacksCue_StartCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbacksCue, nullptr, "StartCue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbacksCue_StartCue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbacksCue_StartCue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFeedbacksCue_StartCue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbacksCue_StartCue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFeedbacksCue::execStartCue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartCue();
	P_NATIVE_END;
}
// End Class UFeedbacksCue Function StartCue

// Begin Class UFeedbacksCue Function StopCue
struct Z_Construct_UFunction_UFeedbacksCue_StopCue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FeedbacksCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbacksCue_StopCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbacksCue, nullptr, "StopCue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbacksCue_StopCue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbacksCue_StopCue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFeedbacksCue_StopCue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbacksCue_StopCue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFeedbacksCue::execStopCue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopCue();
	P_NATIVE_END;
}
// End Class UFeedbacksCue Function StopCue

// Begin Class UFeedbacksCue
void UFeedbacksCue::StaticRegisterNativesUFeedbacksCue()
{
	UClass* Class = UFeedbacksCue::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InterruptCue", &UFeedbacksCue::execInterruptCue },
		{ "NextFeedback", &UFeedbacksCue::execNextFeedback },
		{ "PlayFeedBackAtIndex", &UFeedbacksCue::execPlayFeedBackAtIndex },
		{ "PreviousFeedback", &UFeedbacksCue::execPreviousFeedback },
		{ "ResumeCue", &UFeedbacksCue::execResumeCue },
		{ "StartCue", &UFeedbacksCue::execStartCue },
		{ "StopCue", &UFeedbacksCue::execStopCue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFeedbacksCue);
UClass* Z_Construct_UClass_UFeedbacksCue_NoRegister()
{
	return UFeedbacksCue::StaticClass();
}
struct Z_Construct_UClass_UFeedbacksCue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FeedbacksCue.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/FeedbacksCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCueStarted_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/FeedbacksCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCueStopped_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/FeedbacksCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCueResumed_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/FeedbacksCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCueFinished_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/FeedbacksCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeedbackStartIndex_MetaData[] = {
		{ "Category", "Feedbacks" },
		{ "ModuleRelativePath", "Public/FeedbacksCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Feedbacks_Inner_MetaData[] = {
		{ "Category", "Feedbacks" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FeedbacksCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Feedbacks_MetaData[] = {
		{ "Category", "Feedbacks" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FeedbacksCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCueStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCueStopped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCueResumed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCueFinished;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FeedbackStartIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Feedbacks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Feedbacks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFeedbacksCue_InterruptCue, "InterruptCue" }, // 1131992139
		{ &Z_Construct_UFunction_UFeedbacksCue_NextFeedback, "NextFeedback" }, // 3860868356
		{ &Z_Construct_UFunction_UFeedbacksCue_PlayFeedBackAtIndex, "PlayFeedBackAtIndex" }, // 1362626815
		{ &Z_Construct_UFunction_UFeedbacksCue_PreviousFeedback, "PreviousFeedback" }, // 1502953657
		{ &Z_Construct_UFunction_UFeedbacksCue_ResumeCue, "ResumeCue" }, // 1992845935
		{ &Z_Construct_UFunction_UFeedbacksCue_StartCue, "StartCue" }, // 3480344520
		{ &Z_Construct_UFunction_UFeedbacksCue_StopCue, "StopCue" }, // 2349270640
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFeedbacksCue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFeedbacksCue_Statics::NewProp_OnCueStarted = { "OnCueStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFeedbacksCue, OnCueStarted), Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCueStarted_MetaData), NewProp_OnCueStarted_MetaData) }; // 4145267655
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFeedbacksCue_Statics::NewProp_OnCueStopped = { "OnCueStopped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFeedbacksCue, OnCueStopped), Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueStopped__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCueStopped_MetaData), NewProp_OnCueStopped_MetaData) }; // 3255627658
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFeedbacksCue_Statics::NewProp_OnCueResumed = { "OnCueResumed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFeedbacksCue, OnCueResumed), Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueResumed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCueResumed_MetaData), NewProp_OnCueResumed_MetaData) }; // 2775946678
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFeedbacksCue_Statics::NewProp_OnCueFinished = { "OnCueFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFeedbacksCue, OnCueFinished), Z_Construct_UDelegateFunction_FeedbacksComposerSystem_OnCueFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCueFinished_MetaData), NewProp_OnCueFinished_MetaData) }; // 3577607720
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFeedbacksCue_Statics::NewProp_FeedbackStartIndex = { "FeedbackStartIndex", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFeedbacksCue, FeedbackStartIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeedbackStartIndex_MetaData), NewProp_FeedbackStartIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFeedbacksCue_Statics::NewProp_Feedbacks_Inner = { "Feedbacks", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFeedbackBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Feedbacks_Inner_MetaData), NewProp_Feedbacks_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFeedbacksCue_Statics::NewProp_Feedbacks = { "Feedbacks", nullptr, (EPropertyFlags)0x001000800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFeedbacksCue, Feedbacks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Feedbacks_MetaData), NewProp_Feedbacks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFeedbacksCue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedbacksCue_Statics::NewProp_OnCueStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedbacksCue_Statics::NewProp_OnCueStopped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedbacksCue_Statics::NewProp_OnCueResumed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedbacksCue_Statics::NewProp_OnCueFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedbacksCue_Statics::NewProp_FeedbackStartIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedbacksCue_Statics::NewProp_Feedbacks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedbacksCue_Statics::NewProp_Feedbacks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbacksCue_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFeedbacksCue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FeedbacksComposerSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbacksCue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFeedbacksCue_Statics::ClassParams = {
	&UFeedbacksCue::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFeedbacksCue_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbacksCue_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbacksCue_Statics::Class_MetaDataParams), Z_Construct_UClass_UFeedbacksCue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFeedbacksCue()
{
	if (!Z_Registration_Info_UClass_UFeedbacksCue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFeedbacksCue.OuterSingleton, Z_Construct_UClass_UFeedbacksCue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFeedbacksCue.OuterSingleton;
}
template<> FEEDBACKSCOMPOSERSYSTEM_API UClass* StaticClass<UFeedbacksCue>()
{
	return UFeedbacksCue::StaticClass();
}
UFeedbacksCue::UFeedbacksCue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFeedbacksCue);
UFeedbacksCue::~UFeedbacksCue() {}
// End Class UFeedbacksCue

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksCue_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFeedbacksCue, UFeedbacksCue::StaticClass, TEXT("UFeedbacksCue"), &Z_Registration_Info_UClass_UFeedbacksCue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFeedbacksCue), 2260468131U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksCue_h_1682726426(TEXT("/Script/FeedbacksComposerSystem"),
	Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksCue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksCue_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
