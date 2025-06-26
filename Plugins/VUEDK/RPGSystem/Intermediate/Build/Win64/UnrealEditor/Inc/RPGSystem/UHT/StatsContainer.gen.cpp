// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsSystem/Containers/StatsContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStatsContainer() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatDataBase_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatsContainer();
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatsContainer_NoRegister();
RPGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_RPGSystem_OnStatsValuesChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnStatsValuesChanged *************************************************
struct Z_Construct_UDelegateFunction_RPGSystem_OnStatsValuesChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/Containers/StatsContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_RPGSystem_OnStatsValuesChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_RPGSystem, nullptr, "OnStatsValuesChanged__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RPGSystem_OnStatsValuesChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RPGSystem_OnStatsValuesChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_RPGSystem_OnStatsValuesChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RPGSystem_OnStatsValuesChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStatsValuesChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStatsValuesChanged)
{
	OnStatsValuesChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnStatsValuesChanged ***************************************************

// ********** Begin Class UStatsContainer Function AddStat *****************************************
struct Z_Construct_UFunction_UStatsContainer_AddStat_Statics
{
	struct StatsContainer_eventAddStat_Parms
	{
		UStatDataBase* Stat;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/Containers/StatsContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Stat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsContainer_AddStat_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsContainer_eventAddStat_Parms, Stat), Z_Construct_UClass_UStatDataBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsContainer_AddStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsContainer_eventAddStat_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsContainer_AddStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsContainer_AddStat_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsContainer_AddStat_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_AddStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsContainer_AddStat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsContainer, nullptr, "AddStat", Z_Construct_UFunction_UStatsContainer_AddStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_AddStat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsContainer_AddStat_Statics::StatsContainer_eventAddStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_AddStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsContainer_AddStat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatsContainer_AddStat_Statics::StatsContainer_eventAddStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsContainer_AddStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsContainer_AddStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsContainer::execAddStat)
{
	P_GET_OBJECT(UStatDataBase,Z_Param_Stat);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddStat(Z_Param_Stat,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UStatsContainer Function AddStat *******************************************

// ********** Begin Class UStatsContainer Function AddStats ****************************************
struct Z_Construct_UFunction_UStatsContainer_AddStats_Statics
{
	struct StatsContainer_eventAddStats_Parms
	{
		TSet<UStatDataBase*> Stats;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/Containers/StatsContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Stats_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Stats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsContainer_AddStats_Statics::NewProp_Stats_ElementProp = { "Stats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStatDataBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UStatsContainer_AddStats_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsContainer_eventAddStats_Parms, Stats), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsContainer_AddStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsContainer_AddStats_Statics::NewProp_Stats_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsContainer_AddStats_Statics::NewProp_Stats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_AddStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsContainer_AddStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsContainer, nullptr, "AddStats", Z_Construct_UFunction_UStatsContainer_AddStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_AddStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsContainer_AddStats_Statics::StatsContainer_eventAddStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_AddStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsContainer_AddStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatsContainer_AddStats_Statics::StatsContainer_eventAddStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsContainer_AddStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsContainer_AddStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsContainer::execAddStats)
{
	P_GET_TSET(UStatDataBase*,Z_Param_Stats);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddStats(Z_Param_Stats);
	P_NATIVE_END;
}
// ********** End Class UStatsContainer Function AddStats ******************************************

// ********** Begin Class UStatsContainer Function AreStatsEqual ***********************************
struct Z_Construct_UFunction_UStatsContainer_AreStatsEqual_Statics
{
	struct StatsContainer_eventAreStatsEqual_Parms
	{
		UStatsContainer* StatsContainer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/Containers/StatsContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatsContainer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsContainer_AreStatsEqual_Statics::NewProp_StatsContainer = { "StatsContainer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsContainer_eventAreStatsEqual_Parms, StatsContainer), Z_Construct_UClass_UStatsContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStatsContainer_AreStatsEqual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StatsContainer_eventAreStatsEqual_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatsContainer_AreStatsEqual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StatsContainer_eventAreStatsEqual_Parms), &Z_Construct_UFunction_UStatsContainer_AreStatsEqual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsContainer_AreStatsEqual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsContainer_AreStatsEqual_Statics::NewProp_StatsContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsContainer_AreStatsEqual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_AreStatsEqual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsContainer_AreStatsEqual_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsContainer, nullptr, "AreStatsEqual", Z_Construct_UFunction_UStatsContainer_AreStatsEqual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_AreStatsEqual_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsContainer_AreStatsEqual_Statics::StatsContainer_eventAreStatsEqual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_AreStatsEqual_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsContainer_AreStatsEqual_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatsContainer_AreStatsEqual_Statics::StatsContainer_eventAreStatsEqual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsContainer_AreStatsEqual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsContainer_AreStatsEqual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsContainer::execAreStatsEqual)
{
	P_GET_OBJECT(UStatsContainer,Z_Param_StatsContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AreStatsEqual(Z_Param_StatsContainer);
	P_NATIVE_END;
}
// ********** End Class UStatsContainer Function AreStatsEqual *************************************

// ********** Begin Class UStatsContainer Function ClearStats **************************************
struct Z_Construct_UFunction_UStatsContainer_ClearStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/Containers/StatsContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsContainer_ClearStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsContainer, nullptr, "ClearStats", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_ClearStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsContainer_ClearStats_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UStatsContainer_ClearStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsContainer_ClearStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsContainer::execClearStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearStats();
	P_NATIVE_END;
}
// ********** End Class UStatsContainer Function ClearStats ****************************************

// ********** Begin Class UStatsContainer Function CopyStats ***************************************
struct Z_Construct_UFunction_UStatsContainer_CopyStats_Statics
{
	struct StatsContainer_eventCopyStats_Parms
	{
		UStatsContainer* StatsContainer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/Containers/StatsContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatsContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsContainer_CopyStats_Statics::NewProp_StatsContainer = { "StatsContainer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsContainer_eventCopyStats_Parms, StatsContainer), Z_Construct_UClass_UStatsContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsContainer_CopyStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsContainer_CopyStats_Statics::NewProp_StatsContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_CopyStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsContainer_CopyStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsContainer, nullptr, "CopyStats", Z_Construct_UFunction_UStatsContainer_CopyStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_CopyStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsContainer_CopyStats_Statics::StatsContainer_eventCopyStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_CopyStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsContainer_CopyStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatsContainer_CopyStats_Statics::StatsContainer_eventCopyStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsContainer_CopyStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsContainer_CopyStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsContainer::execCopyStats)
{
	P_GET_OBJECT(UStatsContainer,Z_Param_StatsContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CopyStats(Z_Param_StatsContainer);
	P_NATIVE_END;
}
// ********** End Class UStatsContainer Function CopyStats *****************************************

// ********** Begin Class UStatsContainer Function GetStatsLength **********************************
struct Z_Construct_UFunction_UStatsContainer_GetStatsLength_Statics
{
	struct StatsContainer_eventGetStatsLength_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/Containers/StatsContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStatsContainer_GetStatsLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsContainer_eventGetStatsLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsContainer_GetStatsLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsContainer_GetStatsLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_GetStatsLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsContainer_GetStatsLength_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsContainer, nullptr, "GetStatsLength", Z_Construct_UFunction_UStatsContainer_GetStatsLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_GetStatsLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsContainer_GetStatsLength_Statics::StatsContainer_eventGetStatsLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_GetStatsLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsContainer_GetStatsLength_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatsContainer_GetStatsLength_Statics::StatsContainer_eventGetStatsLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsContainer_GetStatsLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsContainer_GetStatsLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsContainer::execGetStatsLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetStatsLength();
	P_NATIVE_END;
}
// ********** End Class UStatsContainer Function GetStatsLength ************************************

// ********** Begin Class UStatsContainer Function GetValueAsFloat *********************************
struct Z_Construct_UFunction_UStatsContainer_GetValueAsFloat_Statics
{
	struct StatsContainer_eventGetValueAsFloat_Parms
	{
		const UStatDataBase* Stat;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/Containers/StatsContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Stat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsContainer_GetValueAsFloat_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsContainer_eventGetValueAsFloat_Parms, Stat), Z_Construct_UClass_UStatDataBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stat_MetaData), NewProp_Stat_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsContainer_GetValueAsFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsContainer_eventGetValueAsFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsContainer_GetValueAsFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsContainer_GetValueAsFloat_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsContainer_GetValueAsFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_GetValueAsFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsContainer_GetValueAsFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsContainer, nullptr, "GetValueAsFloat", Z_Construct_UFunction_UStatsContainer_GetValueAsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_GetValueAsFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsContainer_GetValueAsFloat_Statics::StatsContainer_eventGetValueAsFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_GetValueAsFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsContainer_GetValueAsFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatsContainer_GetValueAsFloat_Statics::StatsContainer_eventGetValueAsFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsContainer_GetValueAsFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsContainer_GetValueAsFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsContainer::execGetValueAsFloat)
{
	P_GET_OBJECT(UStatDataBase,Z_Param_Stat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetValueAsFloat(Z_Param_Stat);
	P_NATIVE_END;
}
// ********** End Class UStatsContainer Function GetValueAsFloat ***********************************

// ********** Begin Class UStatsContainer Function GetValueAsInt ***********************************
struct Z_Construct_UFunction_UStatsContainer_GetValueAsInt_Statics
{
	struct StatsContainer_eventGetValueAsInt_Parms
	{
		const UStatDataBase* Stat;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/Containers/StatsContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Stat;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsContainer_GetValueAsInt_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsContainer_eventGetValueAsInt_Parms, Stat), Z_Construct_UClass_UStatDataBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stat_MetaData), NewProp_Stat_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStatsContainer_GetValueAsInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsContainer_eventGetValueAsInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsContainer_GetValueAsInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsContainer_GetValueAsInt_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsContainer_GetValueAsInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_GetValueAsInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsContainer_GetValueAsInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsContainer, nullptr, "GetValueAsInt", Z_Construct_UFunction_UStatsContainer_GetValueAsInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_GetValueAsInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsContainer_GetValueAsInt_Statics::StatsContainer_eventGetValueAsInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_GetValueAsInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsContainer_GetValueAsInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatsContainer_GetValueAsInt_Statics::StatsContainer_eventGetValueAsInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsContainer_GetValueAsInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsContainer_GetValueAsInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsContainer::execGetValueAsInt)
{
	P_GET_OBJECT(UStatDataBase,Z_Param_Stat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetValueAsInt(Z_Param_Stat);
	P_NATIVE_END;
}
// ********** End Class UStatsContainer Function GetValueAsInt *************************************

// ********** Begin Class UStatsContainer Function GetValueAsString ********************************
struct Z_Construct_UFunction_UStatsContainer_GetValueAsString_Statics
{
	struct StatsContainer_eventGetValueAsString_Parms
	{
		const UStatDataBase* Stat;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/Containers/StatsContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Stat;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsContainer_GetValueAsString_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsContainer_eventGetValueAsString_Parms, Stat), Z_Construct_UClass_UStatDataBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stat_MetaData), NewProp_Stat_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStatsContainer_GetValueAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsContainer_eventGetValueAsString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsContainer_GetValueAsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsContainer_GetValueAsString_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsContainer_GetValueAsString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_GetValueAsString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsContainer_GetValueAsString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsContainer, nullptr, "GetValueAsString", Z_Construct_UFunction_UStatsContainer_GetValueAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_GetValueAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsContainer_GetValueAsString_Statics::StatsContainer_eventGetValueAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_GetValueAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsContainer_GetValueAsString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatsContainer_GetValueAsString_Statics::StatsContainer_eventGetValueAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsContainer_GetValueAsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsContainer_GetValueAsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsContainer::execGetValueAsString)
{
	P_GET_OBJECT(UStatDataBase,Z_Param_Stat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetValueAsString(Z_Param_Stat);
	P_NATIVE_END;
}
// ********** End Class UStatsContainer Function GetValueAsString **********************************

// ********** Begin Class UStatsContainer Function GetValues ***************************************
struct Z_Construct_UFunction_UStatsContainer_GetValues_Statics
{
	struct StatsContainer_eventGetValues_Parms
	{
		TMap<UStatDataBase*,float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/Containers/StatsContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsContainer_GetValues_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsContainer_GetValues_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStatDataBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UStatsContainer_GetValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsContainer_eventGetValues_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsContainer_GetValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsContainer_GetValues_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsContainer_GetValues_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsContainer_GetValues_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_GetValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsContainer_GetValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsContainer, nullptr, "GetValues", Z_Construct_UFunction_UStatsContainer_GetValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_GetValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsContainer_GetValues_Statics::StatsContainer_eventGetValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_GetValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsContainer_GetValues_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatsContainer_GetValues_Statics::StatsContainer_eventGetValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsContainer_GetValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsContainer_GetValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsContainer::execGetValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<UStatDataBase*,float>*)Z_Param__Result=P_THIS->GetValues();
	P_NATIVE_END;
}
// ********** End Class UStatsContainer Function GetValues *****************************************

// ********** Begin Class UStatsContainer Function RemoveStat **************************************
struct Z_Construct_UFunction_UStatsContainer_RemoveStat_Statics
{
	struct StatsContainer_eventRemoveStat_Parms
	{
		UStatDataBase* Stat;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/Containers/StatsContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Stat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsContainer_RemoveStat_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsContainer_eventRemoveStat_Parms, Stat), Z_Construct_UClass_UStatDataBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsContainer_RemoveStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsContainer_RemoveStat_Statics::NewProp_Stat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_RemoveStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsContainer_RemoveStat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsContainer, nullptr, "RemoveStat", Z_Construct_UFunction_UStatsContainer_RemoveStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_RemoveStat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsContainer_RemoveStat_Statics::StatsContainer_eventRemoveStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_RemoveStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsContainer_RemoveStat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatsContainer_RemoveStat_Statics::StatsContainer_eventRemoveStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsContainer_RemoveStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsContainer_RemoveStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsContainer::execRemoveStat)
{
	P_GET_OBJECT(UStatDataBase,Z_Param_Stat);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveStat(Z_Param_Stat);
	P_NATIVE_END;
}
// ********** End Class UStatsContainer Function RemoveStat ****************************************

// ********** Begin Class UStatsContainer Function TryModifyValue **********************************
struct Z_Construct_UFunction_UStatsContainer_TryModifyValue_Statics
{
	struct StatsContainer_eventTryModifyValue_Parms
	{
		UStatDataBase* Stat;
		float SumValue;
		bool bNotifyEvent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bNotifyEvent", "true" },
		{ "ModuleRelativePath", "Public/StatsSystem/Containers/StatsContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SumValue_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNotifyEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Stat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SumValue;
	static void NewProp_bNotifyEvent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyEvent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsContainer_TryModifyValue_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsContainer_eventTryModifyValue_Parms, Stat), Z_Construct_UClass_UStatDataBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsContainer_TryModifyValue_Statics::NewProp_SumValue = { "SumValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsContainer_eventTryModifyValue_Parms, SumValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SumValue_MetaData), NewProp_SumValue_MetaData) };
void Z_Construct_UFunction_UStatsContainer_TryModifyValue_Statics::NewProp_bNotifyEvent_SetBit(void* Obj)
{
	((StatsContainer_eventTryModifyValue_Parms*)Obj)->bNotifyEvent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatsContainer_TryModifyValue_Statics::NewProp_bNotifyEvent = { "bNotifyEvent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StatsContainer_eventTryModifyValue_Parms), &Z_Construct_UFunction_UStatsContainer_TryModifyValue_Statics::NewProp_bNotifyEvent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNotifyEvent_MetaData), NewProp_bNotifyEvent_MetaData) };
void Z_Construct_UFunction_UStatsContainer_TryModifyValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StatsContainer_eventTryModifyValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatsContainer_TryModifyValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StatsContainer_eventTryModifyValue_Parms), &Z_Construct_UFunction_UStatsContainer_TryModifyValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsContainer_TryModifyValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsContainer_TryModifyValue_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsContainer_TryModifyValue_Statics::NewProp_SumValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsContainer_TryModifyValue_Statics::NewProp_bNotifyEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsContainer_TryModifyValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_TryModifyValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsContainer_TryModifyValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsContainer, nullptr, "TryModifyValue", Z_Construct_UFunction_UStatsContainer_TryModifyValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_TryModifyValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsContainer_TryModifyValue_Statics::StatsContainer_eventTryModifyValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_TryModifyValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsContainer_TryModifyValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatsContainer_TryModifyValue_Statics::StatsContainer_eventTryModifyValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsContainer_TryModifyValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsContainer_TryModifyValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsContainer::execTryModifyValue)
{
	P_GET_OBJECT(UStatDataBase,Z_Param_Stat);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SumValue);
	P_GET_UBOOL(Z_Param_bNotifyEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryModifyValue(Z_Param_Stat,Z_Param_SumValue,Z_Param_bNotifyEvent);
	P_NATIVE_END;
}
// ********** End Class UStatsContainer Function TryModifyValue ************************************

// ********** Begin Class UStatsContainer Function TrySetValue *************************************
struct Z_Construct_UFunction_UStatsContainer_TrySetValue_Statics
{
	struct StatsContainer_eventTrySetValue_Parms
	{
		UStatDataBase* Stat;
		float Value;
		bool bNotifyEvent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bNotifyEvent", "true" },
		{ "HidePin", "bNotifyEvent" },
		{ "ModuleRelativePath", "Public/StatsSystem/Containers/StatsContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNotifyEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Stat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static void NewProp_bNotifyEvent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyEvent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsContainer_TrySetValue_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsContainer_eventTrySetValue_Parms, Stat), Z_Construct_UClass_UStatDataBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsContainer_TrySetValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsContainer_eventTrySetValue_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_UStatsContainer_TrySetValue_Statics::NewProp_bNotifyEvent_SetBit(void* Obj)
{
	((StatsContainer_eventTrySetValue_Parms*)Obj)->bNotifyEvent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatsContainer_TrySetValue_Statics::NewProp_bNotifyEvent = { "bNotifyEvent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StatsContainer_eventTrySetValue_Parms), &Z_Construct_UFunction_UStatsContainer_TrySetValue_Statics::NewProp_bNotifyEvent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNotifyEvent_MetaData), NewProp_bNotifyEvent_MetaData) };
void Z_Construct_UFunction_UStatsContainer_TrySetValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StatsContainer_eventTrySetValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatsContainer_TrySetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StatsContainer_eventTrySetValue_Parms), &Z_Construct_UFunction_UStatsContainer_TrySetValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsContainer_TrySetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsContainer_TrySetValue_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsContainer_TrySetValue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsContainer_TrySetValue_Statics::NewProp_bNotifyEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsContainer_TrySetValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_TrySetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsContainer_TrySetValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsContainer, nullptr, "TrySetValue", Z_Construct_UFunction_UStatsContainer_TrySetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_TrySetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsContainer_TrySetValue_Statics::StatsContainer_eventTrySetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsContainer_TrySetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsContainer_TrySetValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatsContainer_TrySetValue_Statics::StatsContainer_eventTrySetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsContainer_TrySetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsContainer_TrySetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsContainer::execTrySetValue)
{
	P_GET_OBJECT(UStatDataBase,Z_Param_Stat);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_GET_UBOOL(Z_Param_bNotifyEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TrySetValue(Z_Param_Stat,Z_Param_Value,Z_Param_bNotifyEvent);
	P_NATIVE_END;
}
// ********** End Class UStatsContainer Function TrySetValue ***************************************

// ********** Begin Class UStatsContainer **********************************************************
void UStatsContainer::StaticRegisterNativesUStatsContainer()
{
	UClass* Class = UStatsContainer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddStat", &UStatsContainer::execAddStat },
		{ "AddStats", &UStatsContainer::execAddStats },
		{ "AreStatsEqual", &UStatsContainer::execAreStatsEqual },
		{ "ClearStats", &UStatsContainer::execClearStats },
		{ "CopyStats", &UStatsContainer::execCopyStats },
		{ "GetStatsLength", &UStatsContainer::execGetStatsLength },
		{ "GetValueAsFloat", &UStatsContainer::execGetValueAsFloat },
		{ "GetValueAsInt", &UStatsContainer::execGetValueAsInt },
		{ "GetValueAsString", &UStatsContainer::execGetValueAsString },
		{ "GetValues", &UStatsContainer::execGetValues },
		{ "RemoveStat", &UStatsContainer::execRemoveStat },
		{ "TryModifyValue", &UStatsContainer::execTryModifyValue },
		{ "TrySetValue", &UStatsContainer::execTrySetValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStatsContainer;
UClass* UStatsContainer::GetPrivateStaticClass()
{
	using TClass = UStatsContainer;
	if (!Z_Registration_Info_UClass_UStatsContainer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("StatsContainer"),
			Z_Registration_Info_UClass_UStatsContainer.InnerSingleton,
			StaticRegisterNativesUStatsContainer,
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
	return Z_Registration_Info_UClass_UStatsContainer.InnerSingleton;
}
UClass* Z_Construct_UClass_UStatsContainer_NoRegister()
{
	return UStatsContainer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStatsContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StatsSystem/Containers/StatsContainer.h" },
		{ "ModuleRelativePath", "Public/StatsSystem/Containers/StatsContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStatsValuesChanged_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/StatsSystem/Containers/StatsContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "Category", "StatsContainer" },
		{ "ModuleRelativePath", "Public/StatsSystem/Containers/StatsContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStatsValuesChanged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Values_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Values_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatsContainer_AddStat, "AddStat" }, // 2723212834
		{ &Z_Construct_UFunction_UStatsContainer_AddStats, "AddStats" }, // 3991380536
		{ &Z_Construct_UFunction_UStatsContainer_AreStatsEqual, "AreStatsEqual" }, // 3370248411
		{ &Z_Construct_UFunction_UStatsContainer_ClearStats, "ClearStats" }, // 2423841681
		{ &Z_Construct_UFunction_UStatsContainer_CopyStats, "CopyStats" }, // 3952981815
		{ &Z_Construct_UFunction_UStatsContainer_GetStatsLength, "GetStatsLength" }, // 2368141917
		{ &Z_Construct_UFunction_UStatsContainer_GetValueAsFloat, "GetValueAsFloat" }, // 1404409631
		{ &Z_Construct_UFunction_UStatsContainer_GetValueAsInt, "GetValueAsInt" }, // 302997595
		{ &Z_Construct_UFunction_UStatsContainer_GetValueAsString, "GetValueAsString" }, // 1932852895
		{ &Z_Construct_UFunction_UStatsContainer_GetValues, "GetValues" }, // 1024545756
		{ &Z_Construct_UFunction_UStatsContainer_RemoveStat, "RemoveStat" }, // 2435791747
		{ &Z_Construct_UFunction_UStatsContainer_TryModifyValue, "TryModifyValue" }, // 1135377984
		{ &Z_Construct_UFunction_UStatsContainer_TrySetValue, "TrySetValue" }, // 3637021114
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatsContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsContainer_Statics::NewProp_OnStatsValuesChanged = { "OnStatsValuesChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsContainer, OnStatsValuesChanged), Z_Construct_UDelegateFunction_RPGSystem_OnStatsValuesChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStatsValuesChanged_MetaData), NewProp_OnStatsValuesChanged_MetaData) }; // 4065790851
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatsContainer_Statics::NewProp_Values_ValueProp = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatsContainer_Statics::NewProp_Values_Key_KeyProp = { "Values_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStatDataBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UStatsContainer_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsContainer, Values), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatsContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsContainer_Statics::NewProp_OnStatsValuesChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsContainer_Statics::NewProp_Values_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsContainer_Statics::NewProp_Values_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsContainer_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsContainer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatsContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatsContainer_Statics::ClassParams = {
	&UStatsContainer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStatsContainer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatsContainer_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatsContainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatsContainer()
{
	if (!Z_Registration_Info_UClass_UStatsContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatsContainer.OuterSingleton, Z_Construct_UClass_UStatsContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatsContainer.OuterSingleton;
}
UStatsContainer::UStatsContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatsContainer);
UStatsContainer::~UStatsContainer() {}
// ********** End Class UStatsContainer ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_StatsContainer_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatsContainer, UStatsContainer::StaticClass, TEXT("UStatsContainer"), &Z_Registration_Info_UClass_UStatsContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatsContainer), 3939443073U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_StatsContainer_h__Script_RPGSystem_3330840836(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_StatsContainer_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_StatsContainer_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
