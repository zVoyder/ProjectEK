// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameEffectsCue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameEffectsCue() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectBase_NoRegister();
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectsCue();
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectsCue_NoRegister();
GAMEEFFECTSCUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueFinished__DelegateSignature();
GAMEEFFECTSCUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueResumed__DelegateSignature();
GAMEEFFECTSCUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueStarted__DelegateSignature();
GAMEEFFECTSCUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueStopped__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GameEffectsCueSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnCueStarted *********************************************************
struct Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueStarted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameEffectsCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueStarted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_GameEffectsCueSystem, nullptr, "OnCueStarted__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueStarted__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueStarted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueStarted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCueStarted_DelegateWrapper(const FMulticastScriptDelegate& OnCueStarted)
{
	OnCueStarted.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnCueStarted ***********************************************************

// ********** Begin Delegate FOnCueStopped *********************************************************
struct Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueStopped__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameEffectsCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueStopped__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_GameEffectsCueSystem, nullptr, "OnCueStopped__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueStopped__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueStopped__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueStopped__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueStopped__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCueStopped_DelegateWrapper(const FMulticastScriptDelegate& OnCueStopped)
{
	OnCueStopped.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnCueStopped ***********************************************************

// ********** Begin Delegate FOnCueResumed *********************************************************
struct Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueResumed__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameEffectsCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueResumed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_GameEffectsCueSystem, nullptr, "OnCueResumed__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueResumed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueResumed__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueResumed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueResumed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCueResumed_DelegateWrapper(const FMulticastScriptDelegate& OnCueResumed)
{
	OnCueResumed.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnCueResumed ***********************************************************

// ********** Begin Delegate FOnCueFinished ********************************************************
struct Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueFinished__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameEffectsCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueFinished__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_GameEffectsCueSystem, nullptr, "OnCueFinished__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueFinished__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueFinished__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueFinished__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCueFinished_DelegateWrapper(const FMulticastScriptDelegate& OnCueFinished)
{
	OnCueFinished.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnCueFinished **********************************************************

// ********** Begin Class UGameEffectsCue Function InterruptCue ************************************
struct Z_Construct_UFunction_UGameEffectsCue_InterruptCue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameEffectsCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEffectsCue_InterruptCue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameEffectsCue, nullptr, "InterruptCue", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectsCue_InterruptCue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEffectsCue_InterruptCue_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGameEffectsCue_InterruptCue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEffectsCue_InterruptCue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEffectsCue::execInterruptCue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InterruptCue();
	P_NATIVE_END;
}
// ********** End Class UGameEffectsCue Function InterruptCue **************************************

// ********** Begin Class UGameEffectsCue Function NextEffect **************************************
struct Z_Construct_UFunction_UGameEffectsCue_NextEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameEffectsCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEffectsCue_NextEffect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameEffectsCue, nullptr, "NextEffect", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectsCue_NextEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEffectsCue_NextEffect_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGameEffectsCue_NextEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEffectsCue_NextEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEffectsCue::execNextEffect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextEffect();
	P_NATIVE_END;
}
// ********** End Class UGameEffectsCue Function NextEffect ****************************************

// ********** Begin Class UGameEffectsCue Function PlayEffectAtIndex *******************************
struct Z_Construct_UFunction_UGameEffectsCue_PlayEffectAtIndex_Statics
{
	struct GameEffectsCue_eventPlayEffectAtIndex_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameEffectsCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameEffectsCue_PlayEffectAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameEffectsCue_eventPlayEffectAtIndex_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameEffectsCue_PlayEffectAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEffectsCue_PlayEffectAtIndex_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectsCue_PlayEffectAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEffectsCue_PlayEffectAtIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameEffectsCue, nullptr, "PlayEffectAtIndex", Z_Construct_UFunction_UGameEffectsCue_PlayEffectAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectsCue_PlayEffectAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameEffectsCue_PlayEffectAtIndex_Statics::GameEffectsCue_eventPlayEffectAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectsCue_PlayEffectAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEffectsCue_PlayEffectAtIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameEffectsCue_PlayEffectAtIndex_Statics::GameEffectsCue_eventPlayEffectAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameEffectsCue_PlayEffectAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEffectsCue_PlayEffectAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEffectsCue::execPlayEffectAtIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayEffectAtIndex(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UGameEffectsCue Function PlayEffectAtIndex *********************************

// ********** Begin Class UGameEffectsCue Function PreviousEffect **********************************
struct Z_Construct_UFunction_UGameEffectsCue_PreviousEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameEffectsCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEffectsCue_PreviousEffect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameEffectsCue, nullptr, "PreviousEffect", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectsCue_PreviousEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEffectsCue_PreviousEffect_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGameEffectsCue_PreviousEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEffectsCue_PreviousEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEffectsCue::execPreviousEffect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PreviousEffect();
	P_NATIVE_END;
}
// ********** End Class UGameEffectsCue Function PreviousEffect ************************************

// ********** Begin Class UGameEffectsCue Function ResumeCue ***************************************
struct Z_Construct_UFunction_UGameEffectsCue_ResumeCue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameEffectsCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEffectsCue_ResumeCue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameEffectsCue, nullptr, "ResumeCue", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectsCue_ResumeCue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEffectsCue_ResumeCue_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGameEffectsCue_ResumeCue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEffectsCue_ResumeCue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEffectsCue::execResumeCue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResumeCue();
	P_NATIVE_END;
}
// ********** End Class UGameEffectsCue Function ResumeCue *****************************************

// ********** Begin Class UGameEffectsCue Function StartCue ****************************************
struct Z_Construct_UFunction_UGameEffectsCue_StartCue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameEffectsCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEffectsCue_StartCue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameEffectsCue, nullptr, "StartCue", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectsCue_StartCue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEffectsCue_StartCue_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGameEffectsCue_StartCue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEffectsCue_StartCue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEffectsCue::execStartCue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartCue();
	P_NATIVE_END;
}
// ********** End Class UGameEffectsCue Function StartCue ******************************************

// ********** Begin Class UGameEffectsCue Function StopCue *****************************************
struct Z_Construct_UFunction_UGameEffectsCue_StopCue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameEffectsCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEffectsCue_StopCue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameEffectsCue, nullptr, "StopCue", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectsCue_StopCue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEffectsCue_StopCue_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGameEffectsCue_StopCue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEffectsCue_StopCue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEffectsCue::execStopCue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopCue();
	P_NATIVE_END;
}
// ********** End Class UGameEffectsCue Function StopCue *******************************************

// ********** Begin Class UGameEffectsCue **********************************************************
void UGameEffectsCue::StaticRegisterNativesUGameEffectsCue()
{
	UClass* Class = UGameEffectsCue::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InterruptCue", &UGameEffectsCue::execInterruptCue },
		{ "NextEffect", &UGameEffectsCue::execNextEffect },
		{ "PlayEffectAtIndex", &UGameEffectsCue::execPlayEffectAtIndex },
		{ "PreviousEffect", &UGameEffectsCue::execPreviousEffect },
		{ "ResumeCue", &UGameEffectsCue::execResumeCue },
		{ "StartCue", &UGameEffectsCue::execStartCue },
		{ "StopCue", &UGameEffectsCue::execStopCue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGameEffectsCue;
UClass* UGameEffectsCue::GetPrivateStaticClass()
{
	using TClass = UGameEffectsCue;
	if (!Z_Registration_Info_UClass_UGameEffectsCue.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameEffectsCue"),
			Z_Registration_Info_UClass_UGameEffectsCue.InnerSingleton,
			StaticRegisterNativesUGameEffectsCue,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UGameEffectsCue.InnerSingleton;
}
UClass* Z_Construct_UClass_UGameEffectsCue_NoRegister()
{
	return UGameEffectsCue::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGameEffectsCue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameEffectsCue.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GameEffectsCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCueStarted_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/GameEffectsCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCueStopped_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/GameEffectsCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCueResumed_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/GameEffectsCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCueFinished_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/GameEffectsCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectStartIndex_MetaData[] = {
		{ "Category", "GameEffects" },
		{ "ModuleRelativePath", "Public/GameEffectsCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Effects_Inner_MetaData[] = {
		{ "Category", "GameEffects" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameEffectsCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[] = {
		{ "Category", "GameEffects" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameEffectsCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCueStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCueStopped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCueResumed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCueFinished;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EffectStartIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Effects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Effects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameEffectsCue_InterruptCue, "InterruptCue" }, // 531495565
		{ &Z_Construct_UFunction_UGameEffectsCue_NextEffect, "NextEffect" }, // 766920893
		{ &Z_Construct_UFunction_UGameEffectsCue_PlayEffectAtIndex, "PlayEffectAtIndex" }, // 3098108634
		{ &Z_Construct_UFunction_UGameEffectsCue_PreviousEffect, "PreviousEffect" }, // 2987821901
		{ &Z_Construct_UFunction_UGameEffectsCue_ResumeCue, "ResumeCue" }, // 1750259637
		{ &Z_Construct_UFunction_UGameEffectsCue_StartCue, "StartCue" }, // 3216640263
		{ &Z_Construct_UFunction_UGameEffectsCue_StopCue, "StopCue" }, // 2307912338
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameEffectsCue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameEffectsCue_Statics::NewProp_OnCueStarted = { "OnCueStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameEffectsCue, OnCueStarted), Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCueStarted_MetaData), NewProp_OnCueStarted_MetaData) }; // 3675865654
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameEffectsCue_Statics::NewProp_OnCueStopped = { "OnCueStopped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameEffectsCue, OnCueStopped), Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueStopped__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCueStopped_MetaData), NewProp_OnCueStopped_MetaData) }; // 2472957200
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameEffectsCue_Statics::NewProp_OnCueResumed = { "OnCueResumed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameEffectsCue, OnCueResumed), Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueResumed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCueResumed_MetaData), NewProp_OnCueResumed_MetaData) }; // 165572812
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameEffectsCue_Statics::NewProp_OnCueFinished = { "OnCueFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameEffectsCue, OnCueFinished), Z_Construct_UDelegateFunction_GameEffectsCueSystem_OnCueFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCueFinished_MetaData), NewProp_OnCueFinished_MetaData) }; // 1896306602
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameEffectsCue_Statics::NewProp_EffectStartIndex = { "EffectStartIndex", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameEffectsCue, EffectStartIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectStartIndex_MetaData), NewProp_EffectStartIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameEffectsCue_Statics::NewProp_Effects_Inner = { "Effects", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameEffectBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Effects_Inner_MetaData), NewProp_Effects_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameEffectsCue_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x001000800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameEffectsCue, Effects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Effects_MetaData), NewProp_Effects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameEffectsCue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameEffectsCue_Statics::NewProp_OnCueStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameEffectsCue_Statics::NewProp_OnCueStopped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameEffectsCue_Statics::NewProp_OnCueResumed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameEffectsCue_Statics::NewProp_OnCueFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameEffectsCue_Statics::NewProp_EffectStartIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameEffectsCue_Statics::NewProp_Effects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameEffectsCue_Statics::NewProp_Effects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameEffectsCue_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameEffectsCue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameEffectsCueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameEffectsCue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameEffectsCue_Statics::ClassParams = {
	&UGameEffectsCue::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameEffectsCue_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameEffectsCue_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameEffectsCue_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameEffectsCue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameEffectsCue()
{
	if (!Z_Registration_Info_UClass_UGameEffectsCue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameEffectsCue.OuterSingleton, Z_Construct_UClass_UGameEffectsCue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameEffectsCue.OuterSingleton;
}
UGameEffectsCue::UGameEffectsCue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameEffectsCue);
UGameEffectsCue::~UGameEffectsCue() {}
// ********** End Class UGameEffectsCue ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCue_h__Script_GameEffectsCueSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameEffectsCue, UGameEffectsCue::StaticClass, TEXT("UGameEffectsCue"), &Z_Registration_Info_UClass_UGameEffectsCue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameEffectsCue), 2689757834U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCue_h__Script_GameEffectsCueSystem_2574829878(TEXT("/Script/GameEffectsCueSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCue_h__Script_GameEffectsCueSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCue_h__Script_GameEffectsCueSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
