// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedbacksComposerSystem/Public/FeedbackBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFeedbackBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
FEEDBACKSCOMPOSERSYSTEM_API UClass* Z_Construct_UClass_UFeedbackBase();
FEEDBACKSCOMPOSERSYSTEM_API UClass* Z_Construct_UClass_UFeedbackBase_NoRegister();
FEEDBACKSCOMPOSERSYSTEM_API UClass* Z_Construct_UClass_UFeedbacksCue_NoRegister();
UPackage* Z_Construct_UPackage__Script_FeedbacksComposerSystem();
// End Cross Module References

// Begin Class UFeedbackBase Function Finish
struct Z_Construct_UFunction_UFeedbackBase_Finish_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FeedbackBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackBase_Finish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackBase, nullptr, "Finish", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackBase_Finish_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbackBase_Finish_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFeedbackBase_Finish()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackBase_Finish_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFeedbackBase::execFinish)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Finish();
	P_NATIVE_END;
}
// End Class UFeedbackBase Function Finish

// Begin Class UFeedbackBase Function GetInstigator
struct Z_Construct_UFunction_UFeedbackBase_GetInstigator_Statics
{
	struct FeedbackBase_eventGetInstigator_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FeedbackBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFeedbackBase_GetInstigator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbackBase_eventGetInstigator_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackBase_GetInstigator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackBase_GetInstigator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackBase_GetInstigator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackBase_GetInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackBase, nullptr, "GetInstigator", nullptr, nullptr, Z_Construct_UFunction_UFeedbackBase_GetInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackBase_GetInstigator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFeedbackBase_GetInstigator_Statics::FeedbackBase_eventGetInstigator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackBase_GetInstigator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbackBase_GetInstigator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFeedbackBase_GetInstigator_Statics::FeedbackBase_eventGetInstigator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFeedbackBase_GetInstigator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackBase_GetInstigator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFeedbackBase::execGetInstigator)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetInstigator();
	P_NATIVE_END;
}
// End Class UFeedbackBase Function GetInstigator

// Begin Class UFeedbackBase Function GetRelatedCue
struct Z_Construct_UFunction_UFeedbackBase_GetRelatedCue_Statics
{
	struct FeedbackBase_eventGetRelatedCue_Parms
	{
		UFeedbacksCue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FeedbackBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFeedbackBase_GetRelatedCue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbackBase_eventGetRelatedCue_Parms, ReturnValue), Z_Construct_UClass_UFeedbacksCue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackBase_GetRelatedCue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackBase_GetRelatedCue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackBase_GetRelatedCue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackBase_GetRelatedCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackBase, nullptr, "GetRelatedCue", nullptr, nullptr, Z_Construct_UFunction_UFeedbackBase_GetRelatedCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackBase_GetRelatedCue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFeedbackBase_GetRelatedCue_Statics::FeedbackBase_eventGetRelatedCue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackBase_GetRelatedCue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbackBase_GetRelatedCue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFeedbackBase_GetRelatedCue_Statics::FeedbackBase_eventGetRelatedCue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFeedbackBase_GetRelatedCue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackBase_GetRelatedCue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFeedbackBase::execGetRelatedCue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFeedbacksCue**)Z_Param__Result=P_THIS->GetRelatedCue();
	P_NATIVE_END;
}
// End Class UFeedbackBase Function GetRelatedCue

// Begin Class UFeedbackBase Function Interrupt
struct Z_Construct_UFunction_UFeedbackBase_Interrupt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Interrupts the feedback immediately.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/FeedbackBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Interrupts the feedback immediately." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackBase_Interrupt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackBase, nullptr, "Interrupt", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackBase_Interrupt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbackBase_Interrupt_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFeedbackBase_Interrupt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackBase_Interrupt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFeedbackBase::execInterrupt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interrupt();
	P_NATIVE_END;
}
// End Class UFeedbackBase Function Interrupt

// Begin Class UFeedbackBase Function NextFeedback
static const FName NAME_UFeedbackBase_NextFeedback = FName(TEXT("NextFeedback"));
void UFeedbackBase::NextFeedback()
{
	UFunction* Func = FindFunctionChecked(NAME_UFeedbackBase_NextFeedback);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		NextFeedback_Implementation();
	}
}
struct Z_Construct_UFunction_UFeedbackBase_NextFeedback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FeedbackBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackBase_NextFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackBase, nullptr, "NextFeedback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackBase_NextFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbackBase_NextFeedback_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFeedbackBase_NextFeedback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackBase_NextFeedback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFeedbackBase::execNextFeedback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextFeedback_Implementation();
	P_NATIVE_END;
}
// End Class UFeedbackBase Function NextFeedback

// Begin Class UFeedbackBase Function OnFinish
static const FName NAME_UFeedbackBase_OnFinish = FName(TEXT("OnFinish"));
void UFeedbackBase::OnFinish()
{
	UFunction* Func = FindFunctionChecked(NAME_UFeedbackBase_OnFinish);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnFinish_Implementation();
	}
}
struct Z_Construct_UFunction_UFeedbackBase_OnFinish_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FeedbackBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackBase_OnFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackBase, nullptr, "OnFinish", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackBase_OnFinish_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbackBase_OnFinish_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFeedbackBase_OnFinish()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackBase_OnFinish_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFeedbackBase::execOnFinish)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFinish_Implementation();
	P_NATIVE_END;
}
// End Class UFeedbackBase Function OnFinish

// Begin Class UFeedbackBase Function OnInit
static const FName NAME_UFeedbackBase_OnInit = FName(TEXT("OnInit"));
void UFeedbackBase::OnInit()
{
	UFunction* Func = FindFunctionChecked(NAME_UFeedbackBase_OnInit);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnInit_Implementation();
	}
}
struct Z_Construct_UFunction_UFeedbackBase_OnInit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FeedbackBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackBase_OnInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackBase, nullptr, "OnInit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackBase_OnInit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbackBase_OnInit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFeedbackBase_OnInit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackBase_OnInit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFeedbackBase::execOnInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInit_Implementation();
	P_NATIVE_END;
}
// End Class UFeedbackBase Function OnInit

// Begin Class UFeedbackBase Function OnPlay
static const FName NAME_UFeedbackBase_OnPlay = FName(TEXT("OnPlay"));
void UFeedbackBase::OnPlay()
{
	UFunction* Func = FindFunctionChecked(NAME_UFeedbackBase_OnPlay);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnPlay_Implementation();
	}
}
struct Z_Construct_UFunction_UFeedbackBase_OnPlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FeedbackBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackBase_OnPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackBase, nullptr, "OnPlay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackBase_OnPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbackBase_OnPlay_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFeedbackBase_OnPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackBase_OnPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFeedbackBase::execOnPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlay_Implementation();
	P_NATIVE_END;
}
// End Class UFeedbackBase Function OnPlay

// Begin Class UFeedbackBase Function OnStop
static const FName NAME_UFeedbackBase_OnStop = FName(TEXT("OnStop"));
void UFeedbackBase::OnStop()
{
	UFunction* Func = FindFunctionChecked(NAME_UFeedbackBase_OnStop);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnStop_Implementation();
	}
}
struct Z_Construct_UFunction_UFeedbackBase_OnStop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FeedbackBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackBase_OnStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackBase, nullptr, "OnStop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackBase_OnStop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbackBase_OnStop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFeedbackBase_OnStop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackBase_OnStop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFeedbackBase::execOnStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStop_Implementation();
	P_NATIVE_END;
}
// End Class UFeedbackBase Function OnStop

// Begin Class UFeedbackBase Function OnTick
struct FeedbackBase_eventOnTick_Parms
{
	float DeltaTime;
};
static const FName NAME_UFeedbackBase_OnTick = FName(TEXT("OnTick"));
void UFeedbackBase::OnTick(float DeltaTime)
{
	UFunction* Func = FindFunctionChecked(NAME_UFeedbackBase_OnTick);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		FeedbackBase_eventOnTick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnTick_Implementation(DeltaTime);
	}
}
struct Z_Construct_UFunction_UFeedbackBase_OnTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FeedbackBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFeedbackBase_OnTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbackBase_eventOnTick_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackBase_OnTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackBase_OnTick_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackBase_OnTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackBase_OnTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackBase, nullptr, "OnTick", nullptr, nullptr, Z_Construct_UFunction_UFeedbackBase_OnTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackBase_OnTick_Statics::PropPointers), sizeof(FeedbackBase_eventOnTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackBase_OnTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbackBase_OnTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(FeedbackBase_eventOnTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFeedbackBase_OnTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackBase_OnTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFeedbackBase::execOnTick)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTick_Implementation(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class UFeedbackBase Function OnTick

// Begin Class UFeedbackBase Function Play
struct Z_Construct_UFunction_UFeedbackBase_Play_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FeedbackBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackBase_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackBase, nullptr, "Play", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackBase_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbackBase_Play_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFeedbackBase_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackBase_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFeedbackBase::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play();
	P_NATIVE_END;
}
// End Class UFeedbackBase Function Play

// Begin Class UFeedbackBase Function Stop
struct Z_Construct_UFunction_UFeedbackBase_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Stops the feedback after the OutDelay time.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/FeedbackBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Stops the feedback after the OutDelay time." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackBase_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackBase, nullptr, "Stop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackBase_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbackBase_Stop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFeedbackBase_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbackBase_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFeedbackBase::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// End Class UFeedbackBase Function Stop

// Begin Class UFeedbackBase
void UFeedbackBase::StaticRegisterNativesUFeedbackBase()
{
	UClass* Class = UFeedbackBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Finish", &UFeedbackBase::execFinish },
		{ "GetInstigator", &UFeedbackBase::execGetInstigator },
		{ "GetRelatedCue", &UFeedbackBase::execGetRelatedCue },
		{ "Interrupt", &UFeedbackBase::execInterrupt },
		{ "NextFeedback", &UFeedbackBase::execNextFeedback },
		{ "OnFinish", &UFeedbackBase::execOnFinish },
		{ "OnInit", &UFeedbackBase::execOnInit },
		{ "OnPlay", &UFeedbackBase::execOnPlay },
		{ "OnStop", &UFeedbackBase::execOnStop },
		{ "OnTick", &UFeedbackBase::execOnTick },
		{ "Play", &UFeedbackBase::execPlay },
		{ "Stop", &UFeedbackBase::execStop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFeedbackBase);
UClass* Z_Construct_UClass_UFeedbackBase_NoRegister()
{
	return UFeedbackBase::StaticClass();
}
struct Z_Construct_UClass_UFeedbackBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FeedbackBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FeedbackBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDelay_MetaData[] = {
		{ "Category", "Feedback|Delay" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/FeedbackBase.h" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutDelay_MetaData[] = {
		{ "Category", "Feedback|Delay" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/FeedbackBase.h" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "ModuleRelativePath", "Public/FeedbackBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelatedCue_MetaData[] = {
		{ "ModuleRelativePath", "Public/FeedbackBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutDelay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RelatedCue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFeedbackBase_Finish, "Finish" }, // 1966940770
		{ &Z_Construct_UFunction_UFeedbackBase_GetInstigator, "GetInstigator" }, // 2196442502
		{ &Z_Construct_UFunction_UFeedbackBase_GetRelatedCue, "GetRelatedCue" }, // 4078950433
		{ &Z_Construct_UFunction_UFeedbackBase_Interrupt, "Interrupt" }, // 358461191
		{ &Z_Construct_UFunction_UFeedbackBase_NextFeedback, "NextFeedback" }, // 800524734
		{ &Z_Construct_UFunction_UFeedbackBase_OnFinish, "OnFinish" }, // 3559596500
		{ &Z_Construct_UFunction_UFeedbackBase_OnInit, "OnInit" }, // 2495551492
		{ &Z_Construct_UFunction_UFeedbackBase_OnPlay, "OnPlay" }, // 3417130973
		{ &Z_Construct_UFunction_UFeedbackBase_OnStop, "OnStop" }, // 2474080554
		{ &Z_Construct_UFunction_UFeedbackBase_OnTick, "OnTick" }, // 4227246769
		{ &Z_Construct_UFunction_UFeedbackBase_Play, "Play" }, // 860212245
		{ &Z_Construct_UFunction_UFeedbackBase_Stop, "Stop" }, // 3798698818
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFeedbackBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFeedbackBase_Statics::NewProp_InDelay = { "InDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFeedbackBase, InDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDelay_MetaData), NewProp_InDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFeedbackBase_Statics::NewProp_OutDelay = { "OutDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFeedbackBase, OutDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutDelay_MetaData), NewProp_OutDelay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFeedbackBase_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFeedbackBase, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFeedbackBase_Statics::NewProp_RelatedCue = { "RelatedCue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFeedbackBase, RelatedCue), Z_Construct_UClass_UFeedbacksCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelatedCue_MetaData), NewProp_RelatedCue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFeedbackBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedbackBase_Statics::NewProp_InDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedbackBase_Statics::NewProp_OutDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedbackBase_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedbackBase_Statics::NewProp_RelatedCue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbackBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFeedbackBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FeedbacksComposerSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbackBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFeedbackBase_Statics::ClassParams = {
	&UFeedbackBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFeedbackBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbackBase_Statics::PropPointers),
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbackBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UFeedbackBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFeedbackBase()
{
	if (!Z_Registration_Info_UClass_UFeedbackBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFeedbackBase.OuterSingleton, Z_Construct_UClass_UFeedbackBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFeedbackBase.OuterSingleton;
}
template<> FEEDBACKSCOMPOSERSYSTEM_API UClass* StaticClass<UFeedbackBase>()
{
	return UFeedbackBase::StaticClass();
}
UFeedbackBase::UFeedbackBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFeedbackBase);
UFeedbackBase::~UFeedbackBase() {}
// End Class UFeedbackBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbackBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFeedbackBase, UFeedbackBase::StaticClass, TEXT("UFeedbackBase"), &Z_Registration_Info_UClass_UFeedbackBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFeedbackBase), 3700051540U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbackBase_h_2965113926(TEXT("/Script/FeedbacksComposerSystem"),
	Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbackBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbackBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
