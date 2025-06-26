// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Effects/GameEffectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameEffectBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectBase();
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectBase_NoRegister();
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectsCue_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameEffectsCueSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGameEffectBase Function Finish ******************************************
struct Z_Construct_UFunction_UGameEffectBase_Finish_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Effects/GameEffectBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEffectBase_Finish_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameEffectBase, nullptr, "Finish", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectBase_Finish_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEffectBase_Finish_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGameEffectBase_Finish()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEffectBase_Finish_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEffectBase::execFinish)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Finish();
	P_NATIVE_END;
}
// ********** End Class UGameEffectBase Function Finish ********************************************

// ********** Begin Class UGameEffectBase Function GetInDelay **************************************
struct Z_Construct_UFunction_UGameEffectBase_GetInDelay_Statics
{
	struct GameEffectBase_eventGetInDelay_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Effects/GameEffectBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameEffectBase_GetInDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameEffectBase_eventGetInDelay_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameEffectBase_GetInDelay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEffectBase_GetInDelay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectBase_GetInDelay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEffectBase_GetInDelay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameEffectBase, nullptr, "GetInDelay", Z_Construct_UFunction_UGameEffectBase_GetInDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectBase_GetInDelay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameEffectBase_GetInDelay_Statics::GameEffectBase_eventGetInDelay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectBase_GetInDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEffectBase_GetInDelay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameEffectBase_GetInDelay_Statics::GameEffectBase_eventGetInDelay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameEffectBase_GetInDelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEffectBase_GetInDelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEffectBase::execGetInDelay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetInDelay();
	P_NATIVE_END;
}
// ********** End Class UGameEffectBase Function GetInDelay ****************************************

// ********** Begin Class UGameEffectBase Function GetInstigator ***********************************
struct Z_Construct_UFunction_UGameEffectBase_GetInstigator_Statics
{
	struct GameEffectBase_eventGetInstigator_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Effects/GameEffectBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameEffectBase_GetInstigator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameEffectBase_eventGetInstigator_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameEffectBase_GetInstigator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEffectBase_GetInstigator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectBase_GetInstigator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEffectBase_GetInstigator_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameEffectBase, nullptr, "GetInstigator", Z_Construct_UFunction_UGameEffectBase_GetInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectBase_GetInstigator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameEffectBase_GetInstigator_Statics::GameEffectBase_eventGetInstigator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectBase_GetInstigator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEffectBase_GetInstigator_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameEffectBase_GetInstigator_Statics::GameEffectBase_eventGetInstigator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameEffectBase_GetInstigator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEffectBase_GetInstigator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEffectBase::execGetInstigator)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetInstigator();
	P_NATIVE_END;
}
// ********** End Class UGameEffectBase Function GetInstigator *************************************

// ********** Begin Class UGameEffectBase Function GetOutDelay *************************************
struct Z_Construct_UFunction_UGameEffectBase_GetOutDelay_Statics
{
	struct GameEffectBase_eventGetOutDelay_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Effects/GameEffectBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameEffectBase_GetOutDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameEffectBase_eventGetOutDelay_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameEffectBase_GetOutDelay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEffectBase_GetOutDelay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectBase_GetOutDelay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEffectBase_GetOutDelay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameEffectBase, nullptr, "GetOutDelay", Z_Construct_UFunction_UGameEffectBase_GetOutDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectBase_GetOutDelay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameEffectBase_GetOutDelay_Statics::GameEffectBase_eventGetOutDelay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectBase_GetOutDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEffectBase_GetOutDelay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameEffectBase_GetOutDelay_Statics::GameEffectBase_eventGetOutDelay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameEffectBase_GetOutDelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEffectBase_GetOutDelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEffectBase::execGetOutDelay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetOutDelay();
	P_NATIVE_END;
}
// ********** End Class UGameEffectBase Function GetOutDelay ***************************************

// ********** Begin Class UGameEffectBase Function GetRelatedCue ***********************************
struct Z_Construct_UFunction_UGameEffectBase_GetRelatedCue_Statics
{
	struct GameEffectBase_eventGetRelatedCue_Parms
	{
		UGameEffectsCue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Effects/GameEffectBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameEffectBase_GetRelatedCue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameEffectBase_eventGetRelatedCue_Parms, ReturnValue), Z_Construct_UClass_UGameEffectsCue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameEffectBase_GetRelatedCue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEffectBase_GetRelatedCue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectBase_GetRelatedCue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEffectBase_GetRelatedCue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameEffectBase, nullptr, "GetRelatedCue", Z_Construct_UFunction_UGameEffectBase_GetRelatedCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectBase_GetRelatedCue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameEffectBase_GetRelatedCue_Statics::GameEffectBase_eventGetRelatedCue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectBase_GetRelatedCue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEffectBase_GetRelatedCue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameEffectBase_GetRelatedCue_Statics::GameEffectBase_eventGetRelatedCue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameEffectBase_GetRelatedCue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEffectBase_GetRelatedCue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEffectBase::execGetRelatedCue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGameEffectsCue**)Z_Param__Result=P_THIS->GetRelatedCue();
	P_NATIVE_END;
}
// ********** End Class UGameEffectBase Function GetRelatedCue *************************************

// ********** Begin Class UGameEffectBase Function Interrupt ***************************************
struct Z_Construct_UFunction_UGameEffectBase_Interrupt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Interrupts the effect immediately.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Effects/GameEffectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Interrupts the effect immediately." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEffectBase_Interrupt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameEffectBase, nullptr, "Interrupt", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectBase_Interrupt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEffectBase_Interrupt_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGameEffectBase_Interrupt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEffectBase_Interrupt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEffectBase::execInterrupt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interrupt();
	P_NATIVE_END;
}
// ********** End Class UGameEffectBase Function Interrupt *****************************************

// ********** Begin Class UGameEffectBase Function NextEffect **************************************
static FName NAME_UGameEffectBase_NextEffect = FName(TEXT("NextEffect"));
void UGameEffectBase::NextEffect()
{
	UFunction* Func = FindFunctionChecked(NAME_UGameEffectBase_NextEffect);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		NextEffect_Implementation();
	}
}
struct Z_Construct_UFunction_UGameEffectBase_NextEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Effects/GameEffectBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEffectBase_NextEffect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameEffectBase, nullptr, "NextEffect", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectBase_NextEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEffectBase_NextEffect_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGameEffectBase_NextEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEffectBase_NextEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEffectBase::execNextEffect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextEffect_Implementation();
	P_NATIVE_END;
}
// ********** End Class UGameEffectBase Function NextEffect ****************************************

// ********** Begin Class UGameEffectBase Function OnFinish ****************************************
static FName NAME_UGameEffectBase_OnFinish = FName(TEXT("OnFinish"));
void UGameEffectBase::OnFinish()
{
	UFunction* Func = FindFunctionChecked(NAME_UGameEffectBase_OnFinish);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnFinish_Implementation();
	}
}
struct Z_Construct_UFunction_UGameEffectBase_OnFinish_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Effects/GameEffectBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEffectBase_OnFinish_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameEffectBase, nullptr, "OnFinish", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectBase_OnFinish_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEffectBase_OnFinish_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGameEffectBase_OnFinish()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEffectBase_OnFinish_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEffectBase::execOnFinish)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFinish_Implementation();
	P_NATIVE_END;
}
// ********** End Class UGameEffectBase Function OnFinish ******************************************

// ********** Begin Class UGameEffectBase Function OnInit ******************************************
static FName NAME_UGameEffectBase_OnInit = FName(TEXT("OnInit"));
void UGameEffectBase::OnInit()
{
	UFunction* Func = FindFunctionChecked(NAME_UGameEffectBase_OnInit);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnInit_Implementation();
	}
}
struct Z_Construct_UFunction_UGameEffectBase_OnInit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Effects/GameEffectBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEffectBase_OnInit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameEffectBase, nullptr, "OnInit", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectBase_OnInit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEffectBase_OnInit_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGameEffectBase_OnInit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEffectBase_OnInit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEffectBase::execOnInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInit_Implementation();
	P_NATIVE_END;
}
// ********** End Class UGameEffectBase Function OnInit ********************************************

// ********** Begin Class UGameEffectBase Function OnPlay ******************************************
static FName NAME_UGameEffectBase_OnPlay = FName(TEXT("OnPlay"));
void UGameEffectBase::OnPlay()
{
	UFunction* Func = FindFunctionChecked(NAME_UGameEffectBase_OnPlay);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnPlay_Implementation();
	}
}
struct Z_Construct_UFunction_UGameEffectBase_OnPlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Effects/GameEffectBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEffectBase_OnPlay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameEffectBase, nullptr, "OnPlay", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectBase_OnPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEffectBase_OnPlay_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGameEffectBase_OnPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEffectBase_OnPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEffectBase::execOnPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlay_Implementation();
	P_NATIVE_END;
}
// ********** End Class UGameEffectBase Function OnPlay ********************************************

// ********** Begin Class UGameEffectBase Function OnStop ******************************************
static FName NAME_UGameEffectBase_OnStop = FName(TEXT("OnStop"));
void UGameEffectBase::OnStop()
{
	UFunction* Func = FindFunctionChecked(NAME_UGameEffectBase_OnStop);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnStop_Implementation();
	}
}
struct Z_Construct_UFunction_UGameEffectBase_OnStop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Effects/GameEffectBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEffectBase_OnStop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameEffectBase, nullptr, "OnStop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectBase_OnStop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEffectBase_OnStop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGameEffectBase_OnStop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEffectBase_OnStop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEffectBase::execOnStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStop_Implementation();
	P_NATIVE_END;
}
// ********** End Class UGameEffectBase Function OnStop ********************************************

// ********** Begin Class UGameEffectBase Function OnTick ******************************************
struct GameEffectBase_eventOnTick_Parms
{
	float DeltaTime;
};
static FName NAME_UGameEffectBase_OnTick = FName(TEXT("OnTick"));
void UGameEffectBase::OnTick(float DeltaTime)
{
	UFunction* Func = FindFunctionChecked(NAME_UGameEffectBase_OnTick);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		GameEffectBase_eventOnTick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnTick_Implementation(DeltaTime);
	}
}
struct Z_Construct_UFunction_UGameEffectBase_OnTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Effects/GameEffectBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameEffectBase_OnTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameEffectBase_eventOnTick_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameEffectBase_OnTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEffectBase_OnTick_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectBase_OnTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEffectBase_OnTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameEffectBase, nullptr, "OnTick", Z_Construct_UFunction_UGameEffectBase_OnTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectBase_OnTick_Statics::PropPointers), sizeof(GameEffectBase_eventOnTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectBase_OnTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEffectBase_OnTick_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(GameEffectBase_eventOnTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameEffectBase_OnTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEffectBase_OnTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEffectBase::execOnTick)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTick_Implementation(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// ********** End Class UGameEffectBase Function OnTick ********************************************

// ********** Begin Class UGameEffectBase Function Play ********************************************
struct Z_Construct_UFunction_UGameEffectBase_Play_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Effects/GameEffectBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEffectBase_Play_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameEffectBase, nullptr, "Play", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectBase_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEffectBase_Play_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGameEffectBase_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEffectBase_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEffectBase::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play();
	P_NATIVE_END;
}
// ********** End Class UGameEffectBase Function Play **********************************************

// ********** Begin Class UGameEffectBase Function Stop ********************************************
struct Z_Construct_UFunction_UGameEffectBase_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Stops the effect after the OutDelay time.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Effects/GameEffectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Stops the effect after the OutDelay time." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEffectBase_Stop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameEffectBase, nullptr, "Stop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectBase_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEffectBase_Stop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGameEffectBase_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEffectBase_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEffectBase::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// ********** End Class UGameEffectBase Function Stop **********************************************

// ********** Begin Class UGameEffectBase **********************************************************
void UGameEffectBase::StaticRegisterNativesUGameEffectBase()
{
	UClass* Class = UGameEffectBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Finish", &UGameEffectBase::execFinish },
		{ "GetInDelay", &UGameEffectBase::execGetInDelay },
		{ "GetInstigator", &UGameEffectBase::execGetInstigator },
		{ "GetOutDelay", &UGameEffectBase::execGetOutDelay },
		{ "GetRelatedCue", &UGameEffectBase::execGetRelatedCue },
		{ "Interrupt", &UGameEffectBase::execInterrupt },
		{ "NextEffect", &UGameEffectBase::execNextEffect },
		{ "OnFinish", &UGameEffectBase::execOnFinish },
		{ "OnInit", &UGameEffectBase::execOnInit },
		{ "OnPlay", &UGameEffectBase::execOnPlay },
		{ "OnStop", &UGameEffectBase::execOnStop },
		{ "OnTick", &UGameEffectBase::execOnTick },
		{ "Play", &UGameEffectBase::execPlay },
		{ "Stop", &UGameEffectBase::execStop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGameEffectBase;
UClass* UGameEffectBase::GetPrivateStaticClass()
{
	using TClass = UGameEffectBase;
	if (!Z_Registration_Info_UClass_UGameEffectBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameEffectBase"),
			Z_Registration_Info_UClass_UGameEffectBase.InnerSingleton,
			StaticRegisterNativesUGameEffectBase,
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
	return Z_Registration_Info_UClass_UGameEffectBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UGameEffectBase_NoRegister()
{
	return UGameEffectBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGameEffectBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Effects/GameEffectBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Effects/GameEffectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDelay_MetaData[] = {
		{ "Category", "GameEffect|Delay" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Effects/GameEffectBase.h" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutDelay_MetaData[] = {
		{ "Category", "GameEffect|Delay" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Effects/GameEffectBase.h" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/GameEffectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelatedCue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/GameEffectBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutDelay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RelatedCue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameEffectBase_Finish, "Finish" }, // 2114048337
		{ &Z_Construct_UFunction_UGameEffectBase_GetInDelay, "GetInDelay" }, // 2189673421
		{ &Z_Construct_UFunction_UGameEffectBase_GetInstigator, "GetInstigator" }, // 2337748593
		{ &Z_Construct_UFunction_UGameEffectBase_GetOutDelay, "GetOutDelay" }, // 1912847709
		{ &Z_Construct_UFunction_UGameEffectBase_GetRelatedCue, "GetRelatedCue" }, // 4228767145
		{ &Z_Construct_UFunction_UGameEffectBase_Interrupt, "Interrupt" }, // 2797177317
		{ &Z_Construct_UFunction_UGameEffectBase_NextEffect, "NextEffect" }, // 497919594
		{ &Z_Construct_UFunction_UGameEffectBase_OnFinish, "OnFinish" }, // 394092326
		{ &Z_Construct_UFunction_UGameEffectBase_OnInit, "OnInit" }, // 3391227456
		{ &Z_Construct_UFunction_UGameEffectBase_OnPlay, "OnPlay" }, // 1476569950
		{ &Z_Construct_UFunction_UGameEffectBase_OnStop, "OnStop" }, // 1490975099
		{ &Z_Construct_UFunction_UGameEffectBase_OnTick, "OnTick" }, // 413612360
		{ &Z_Construct_UFunction_UGameEffectBase_Play, "Play" }, // 2117909903
		{ &Z_Construct_UFunction_UGameEffectBase_Stop, "Stop" }, // 1606489588
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameEffectBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameEffectBase_Statics::NewProp_InDelay = { "InDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameEffectBase, InDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDelay_MetaData), NewProp_InDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameEffectBase_Statics::NewProp_OutDelay = { "OutDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameEffectBase, OutDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutDelay_MetaData), NewProp_OutDelay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameEffectBase_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameEffectBase, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameEffectBase_Statics::NewProp_RelatedCue = { "RelatedCue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameEffectBase, RelatedCue), Z_Construct_UClass_UGameEffectsCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelatedCue_MetaData), NewProp_RelatedCue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameEffectBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameEffectBase_Statics::NewProp_InDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameEffectBase_Statics::NewProp_OutDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameEffectBase_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameEffectBase_Statics::NewProp_RelatedCue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameEffectBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameEffectBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameEffectsCueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameEffectBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameEffectBase_Statics::ClassParams = {
	&UGameEffectBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameEffectBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameEffectBase_Statics::PropPointers),
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameEffectBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameEffectBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameEffectBase()
{
	if (!Z_Registration_Info_UClass_UGameEffectBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameEffectBase.OuterSingleton, Z_Construct_UClass_UGameEffectBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameEffectBase.OuterSingleton;
}
UGameEffectBase::UGameEffectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameEffectBase);
UGameEffectBase::~UGameEffectBase() {}
// ********** End Class UGameEffectBase ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Effects_GameEffectBase_h__Script_GameEffectsCueSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameEffectBase, UGameEffectBase::StaticClass, TEXT("UGameEffectBase"), &Z_Registration_Info_UClass_UGameEffectBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameEffectBase), 2674955170U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Effects_GameEffectBase_h__Script_GameEffectsCueSystem_3217612300(TEXT("/Script/GameEffectsCueSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Effects_GameEffectBase_h__Script_GameEffectsCueSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_Effects_GameEffectBase_h__Script_GameEffectsCueSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
