// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utility/AIUtility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAIUtility() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISense_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_NoRegister();
AISYSTEM_API UClass* Z_Construct_UClass_UAIUtility();
AISYSTEM_API UClass* Z_Construct_UClass_UAIUtility_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AISystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAIUtility Function GetSenseConfig ***************************************
struct Z_Construct_UFunction_UAIUtility_GetSenseConfig_Statics
{
	struct AIUtility_eventGetSenseConfig_Parms
	{
		UAIPerceptionComponent* PerceptionComponent;
		TSubclassOf<UAISense> SenseClass;
		UAISenseConfig* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|AI Utility" },
		{ "ModuleRelativePath", "Public/Utility/AIUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerceptionComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SenseClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIUtility_GetSenseConfig_Statics::NewProp_PerceptionComponent = { "PerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIUtility_eventGetSenseConfig_Parms, PerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerceptionComponent_MetaData), NewProp_PerceptionComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIUtility_GetSenseConfig_Statics::NewProp_SenseClass = { "SenseClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIUtility_eventGetSenseConfig_Parms, SenseClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIUtility_GetSenseConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIUtility_eventGetSenseConfig_Parms, ReturnValue), Z_Construct_UClass_UAISenseConfig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIUtility_GetSenseConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIUtility_GetSenseConfig_Statics::NewProp_PerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIUtility_GetSenseConfig_Statics::NewProp_SenseClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIUtility_GetSenseConfig_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIUtility_GetSenseConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIUtility_GetSenseConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAIUtility, nullptr, "GetSenseConfig", Z_Construct_UFunction_UAIUtility_GetSenseConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIUtility_GetSenseConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIUtility_GetSenseConfig_Statics::AIUtility_eventGetSenseConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIUtility_GetSenseConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIUtility_GetSenseConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAIUtility_GetSenseConfig_Statics::AIUtility_eventGetSenseConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIUtility_GetSenseConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIUtility_GetSenseConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIUtility::execGetSenseConfig)
{
	P_GET_OBJECT(UAIPerceptionComponent,Z_Param_PerceptionComponent);
	P_GET_OBJECT(UClass,Z_Param_SenseClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAISenseConfig**)Z_Param__Result=UAIUtility::GetSenseConfig(Z_Param_PerceptionComponent,Z_Param_SenseClass);
	P_NATIVE_END;
}
// ********** End Class UAIUtility Function GetSenseConfig *****************************************

// ********** Begin Class UAIUtility Function RequestStimuliListenerUpdate *************************
struct Z_Construct_UFunction_UAIUtility_RequestStimuliListenerUpdate_Statics
{
	struct AIUtility_eventRequestStimuliListenerUpdate_Parms
	{
		UAIPerceptionComponent* PerceptionComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|AI Utility" },
		{ "ModuleRelativePath", "Public/Utility/AIUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerceptionComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIUtility_RequestStimuliListenerUpdate_Statics::NewProp_PerceptionComponent = { "PerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIUtility_eventRequestStimuliListenerUpdate_Parms, PerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerceptionComponent_MetaData), NewProp_PerceptionComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIUtility_RequestStimuliListenerUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIUtility_RequestStimuliListenerUpdate_Statics::NewProp_PerceptionComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIUtility_RequestStimuliListenerUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIUtility_RequestStimuliListenerUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAIUtility, nullptr, "RequestStimuliListenerUpdate", Z_Construct_UFunction_UAIUtility_RequestStimuliListenerUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIUtility_RequestStimuliListenerUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIUtility_RequestStimuliListenerUpdate_Statics::AIUtility_eventRequestStimuliListenerUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIUtility_RequestStimuliListenerUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIUtility_RequestStimuliListenerUpdate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAIUtility_RequestStimuliListenerUpdate_Statics::AIUtility_eventRequestStimuliListenerUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIUtility_RequestStimuliListenerUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIUtility_RequestStimuliListenerUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIUtility::execRequestStimuliListenerUpdate)
{
	P_GET_OBJECT(UAIPerceptionComponent,Z_Param_PerceptionComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAIUtility::RequestStimuliListenerUpdate(Z_Param_PerceptionComponent);
	P_NATIVE_END;
}
// ********** End Class UAIUtility Function RequestStimuliListenerUpdate ***************************

// ********** Begin Class UAIUtility Function SetLoseSightRadius ***********************************
struct Z_Construct_UFunction_UAIUtility_SetLoseSightRadius_Statics
{
	struct AIUtility_eventSetLoseSightRadius_Parms
	{
		UAIPerceptionComponent* PerceptionComponent;
		float LoseSightRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|AI Utility" },
		{ "ModuleRelativePath", "Public/Utility/AIUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerceptionComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoseSightRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIUtility_SetLoseSightRadius_Statics::NewProp_PerceptionComponent = { "PerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIUtility_eventSetLoseSightRadius_Parms, PerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerceptionComponent_MetaData), NewProp_PerceptionComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAIUtility_SetLoseSightRadius_Statics::NewProp_LoseSightRadius = { "LoseSightRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIUtility_eventSetLoseSightRadius_Parms, LoseSightRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIUtility_SetLoseSightRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIUtility_SetLoseSightRadius_Statics::NewProp_PerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIUtility_SetLoseSightRadius_Statics::NewProp_LoseSightRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIUtility_SetLoseSightRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIUtility_SetLoseSightRadius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAIUtility, nullptr, "SetLoseSightRadius", Z_Construct_UFunction_UAIUtility_SetLoseSightRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIUtility_SetLoseSightRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIUtility_SetLoseSightRadius_Statics::AIUtility_eventSetLoseSightRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIUtility_SetLoseSightRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIUtility_SetLoseSightRadius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAIUtility_SetLoseSightRadius_Statics::AIUtility_eventSetLoseSightRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIUtility_SetLoseSightRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIUtility_SetLoseSightRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIUtility::execSetLoseSightRadius)
{
	P_GET_OBJECT(UAIPerceptionComponent,Z_Param_PerceptionComponent);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LoseSightRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAIUtility::SetLoseSightRadius(Z_Param_PerceptionComponent,Z_Param_LoseSightRadius);
	P_NATIVE_END;
}
// ********** End Class UAIUtility Function SetLoseSightRadius *************************************

// ********** Begin Class UAIUtility Function SetPeripheralVisionAngle *****************************
struct Z_Construct_UFunction_UAIUtility_SetPeripheralVisionAngle_Statics
{
	struct AIUtility_eventSetPeripheralVisionAngle_Parms
	{
		UAIPerceptionComponent* PerceptionComponent;
		float PeripheralVisionAngle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|AI Utility" },
		{ "ModuleRelativePath", "Public/Utility/AIUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerceptionComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PeripheralVisionAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIUtility_SetPeripheralVisionAngle_Statics::NewProp_PerceptionComponent = { "PerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIUtility_eventSetPeripheralVisionAngle_Parms, PerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerceptionComponent_MetaData), NewProp_PerceptionComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAIUtility_SetPeripheralVisionAngle_Statics::NewProp_PeripheralVisionAngle = { "PeripheralVisionAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIUtility_eventSetPeripheralVisionAngle_Parms, PeripheralVisionAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIUtility_SetPeripheralVisionAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIUtility_SetPeripheralVisionAngle_Statics::NewProp_PerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIUtility_SetPeripheralVisionAngle_Statics::NewProp_PeripheralVisionAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIUtility_SetPeripheralVisionAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIUtility_SetPeripheralVisionAngle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAIUtility, nullptr, "SetPeripheralVisionAngle", Z_Construct_UFunction_UAIUtility_SetPeripheralVisionAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIUtility_SetPeripheralVisionAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIUtility_SetPeripheralVisionAngle_Statics::AIUtility_eventSetPeripheralVisionAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIUtility_SetPeripheralVisionAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIUtility_SetPeripheralVisionAngle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAIUtility_SetPeripheralVisionAngle_Statics::AIUtility_eventSetPeripheralVisionAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIUtility_SetPeripheralVisionAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIUtility_SetPeripheralVisionAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIUtility::execSetPeripheralVisionAngle)
{
	P_GET_OBJECT(UAIPerceptionComponent,Z_Param_PerceptionComponent);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PeripheralVisionAngle);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAIUtility::SetPeripheralVisionAngle(Z_Param_PerceptionComponent,Z_Param_PeripheralVisionAngle);
	P_NATIVE_END;
}
// ********** End Class UAIUtility Function SetPeripheralVisionAngle *******************************

// ********** Begin Class UAIUtility Function SetSightRadius ***************************************
struct Z_Construct_UFunction_UAIUtility_SetSightRadius_Statics
{
	struct AIUtility_eventSetSightRadius_Parms
	{
		UAIPerceptionComponent* PerceptionComponent;
		float SightRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|AI Utility" },
		{ "ModuleRelativePath", "Public/Utility/AIUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerceptionComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SightRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIUtility_SetSightRadius_Statics::NewProp_PerceptionComponent = { "PerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIUtility_eventSetSightRadius_Parms, PerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerceptionComponent_MetaData), NewProp_PerceptionComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAIUtility_SetSightRadius_Statics::NewProp_SightRadius = { "SightRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIUtility_eventSetSightRadius_Parms, SightRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIUtility_SetSightRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIUtility_SetSightRadius_Statics::NewProp_PerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIUtility_SetSightRadius_Statics::NewProp_SightRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIUtility_SetSightRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIUtility_SetSightRadius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAIUtility, nullptr, "SetSightRadius", Z_Construct_UFunction_UAIUtility_SetSightRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIUtility_SetSightRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIUtility_SetSightRadius_Statics::AIUtility_eventSetSightRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIUtility_SetSightRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIUtility_SetSightRadius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAIUtility_SetSightRadius_Statics::AIUtility_eventSetSightRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIUtility_SetSightRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIUtility_SetSightRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIUtility::execSetSightRadius)
{
	P_GET_OBJECT(UAIPerceptionComponent,Z_Param_PerceptionComponent);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SightRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAIUtility::SetSightRadius(Z_Param_PerceptionComponent,Z_Param_SightRadius);
	P_NATIVE_END;
}
// ********** End Class UAIUtility Function SetSightRadius *****************************************

// ********** Begin Class UAIUtility ***************************************************************
void UAIUtility::StaticRegisterNativesUAIUtility()
{
	UClass* Class = UAIUtility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSenseConfig", &UAIUtility::execGetSenseConfig },
		{ "RequestStimuliListenerUpdate", &UAIUtility::execRequestStimuliListenerUpdate },
		{ "SetLoseSightRadius", &UAIUtility::execSetLoseSightRadius },
		{ "SetPeripheralVisionAngle", &UAIUtility::execSetPeripheralVisionAngle },
		{ "SetSightRadius", &UAIUtility::execSetSightRadius },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAIUtility;
UClass* UAIUtility::GetPrivateStaticClass()
{
	using TClass = UAIUtility;
	if (!Z_Registration_Info_UClass_UAIUtility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AIUtility"),
			Z_Registration_Info_UClass_UAIUtility.InnerSingleton,
			StaticRegisterNativesUAIUtility,
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
	return Z_Registration_Info_UClass_UAIUtility.InnerSingleton;
}
UClass* Z_Construct_UClass_UAIUtility_NoRegister()
{
	return UAIUtility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAIUtility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Utility/AIUtility.h" },
		{ "ModuleRelativePath", "Public/Utility/AIUtility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIUtility_GetSenseConfig, "GetSenseConfig" }, // 475473088
		{ &Z_Construct_UFunction_UAIUtility_RequestStimuliListenerUpdate, "RequestStimuliListenerUpdate" }, // 3546669583
		{ &Z_Construct_UFunction_UAIUtility_SetLoseSightRadius, "SetLoseSightRadius" }, // 3291769956
		{ &Z_Construct_UFunction_UAIUtility_SetPeripheralVisionAngle, "SetPeripheralVisionAngle" }, // 1191143421
		{ &Z_Construct_UFunction_UAIUtility_SetSightRadius, "SetSightRadius" }, // 1038165997
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIUtility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAIUtility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AISystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIUtility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIUtility_Statics::ClassParams = {
	&UAIUtility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAIUtility_Statics::Class_MetaDataParams), Z_Construct_UClass_UAIUtility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAIUtility()
{
	if (!Z_Registration_Info_UClass_UAIUtility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIUtility.OuterSingleton, Z_Construct_UClass_UAIUtility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAIUtility.OuterSingleton;
}
UAIUtility::UAIUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAIUtility);
UAIUtility::~UAIUtility() {}
// ********** End Class UAIUtility *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_AISystem_Source_AISystem_Public_Utility_AIUtility_h__Script_AISystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAIUtility, UAIUtility::StaticClass, TEXT("UAIUtility"), &Z_Registration_Info_UClass_UAIUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIUtility), 1279069168U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_AISystem_Source_AISystem_Public_Utility_AIUtility_h__Script_AISystem_3732015785(TEXT("/Script/AISystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_AISystem_Source_AISystem_Public_Utility_AIUtility_h__Script_AISystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_AISystem_Source_AISystem_Public_Utility_AIUtility_h__Script_AISystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
