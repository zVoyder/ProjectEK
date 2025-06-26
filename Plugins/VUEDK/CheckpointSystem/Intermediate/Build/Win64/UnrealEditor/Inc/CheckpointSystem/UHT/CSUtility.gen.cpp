// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utility/CSUtility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCSUtility() {}

// ********** Begin Cross Module References ********************************************************
CHECKPOINTSYSTEM_API UClass* Z_Construct_UClass_UCSUtility();
CHECKPOINTSYSTEM_API UClass* Z_Construct_UClass_UCSUtility_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_CheckpointSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCSUtility Function TryGetCheckpoint *************************************
struct Z_Construct_UFunction_UCSUtility_TryGetCheckpoint_Statics
{
	struct CSUtility_eventTryGetCheckpoint_Parms
	{
		FName CheckpointKey;
		FTransform OutCheckpointTransform;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utility/CSUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckpointKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CheckpointKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCheckpointTransform;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCSUtility_TryGetCheckpoint_Statics::NewProp_CheckpointKey = { "CheckpointKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CSUtility_eventTryGetCheckpoint_Parms, CheckpointKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckpointKey_MetaData), NewProp_CheckpointKey_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCSUtility_TryGetCheckpoint_Statics::NewProp_OutCheckpointTransform = { "OutCheckpointTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CSUtility_eventTryGetCheckpoint_Parms, OutCheckpointTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCSUtility_TryGetCheckpoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CSUtility_eventTryGetCheckpoint_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCSUtility_TryGetCheckpoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CSUtility_eventTryGetCheckpoint_Parms), &Z_Construct_UFunction_UCSUtility_TryGetCheckpoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCSUtility_TryGetCheckpoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSUtility_TryGetCheckpoint_Statics::NewProp_CheckpointKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSUtility_TryGetCheckpoint_Statics::NewProp_OutCheckpointTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSUtility_TryGetCheckpoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCSUtility_TryGetCheckpoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCSUtility_TryGetCheckpoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCSUtility, nullptr, "TryGetCheckpoint", Z_Construct_UFunction_UCSUtility_TryGetCheckpoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSUtility_TryGetCheckpoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCSUtility_TryGetCheckpoint_Statics::CSUtility_eventTryGetCheckpoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCSUtility_TryGetCheckpoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCSUtility_TryGetCheckpoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCSUtility_TryGetCheckpoint_Statics::CSUtility_eventTryGetCheckpoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCSUtility_TryGetCheckpoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCSUtility_TryGetCheckpoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCSUtility::execTryGetCheckpoint)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_CheckpointKey);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutCheckpointTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UCSUtility::TryGetCheckpoint(Z_Param_CheckpointKey,Z_Param_Out_OutCheckpointTransform);
	P_NATIVE_END;
}
// ********** End Class UCSUtility Function TryGetCheckpoint ***************************************

// ********** Begin Class UCSUtility Function TryGetLastCheckpoint *********************************
struct Z_Construct_UFunction_UCSUtility_TryGetLastCheckpoint_Statics
{
	struct CSUtility_eventTryGetLastCheckpoint_Parms
	{
		FTransform OutCheckpointTransform;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utility/CSUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCheckpointTransform;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCSUtility_TryGetLastCheckpoint_Statics::NewProp_OutCheckpointTransform = { "OutCheckpointTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CSUtility_eventTryGetLastCheckpoint_Parms, OutCheckpointTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCSUtility_TryGetLastCheckpoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CSUtility_eventTryGetLastCheckpoint_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCSUtility_TryGetLastCheckpoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CSUtility_eventTryGetLastCheckpoint_Parms), &Z_Construct_UFunction_UCSUtility_TryGetLastCheckpoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCSUtility_TryGetLastCheckpoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSUtility_TryGetLastCheckpoint_Statics::NewProp_OutCheckpointTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSUtility_TryGetLastCheckpoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCSUtility_TryGetLastCheckpoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCSUtility_TryGetLastCheckpoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCSUtility, nullptr, "TryGetLastCheckpoint", Z_Construct_UFunction_UCSUtility_TryGetLastCheckpoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSUtility_TryGetLastCheckpoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCSUtility_TryGetLastCheckpoint_Statics::CSUtility_eventTryGetLastCheckpoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCSUtility_TryGetLastCheckpoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCSUtility_TryGetLastCheckpoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCSUtility_TryGetLastCheckpoint_Statics::CSUtility_eventTryGetLastCheckpoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCSUtility_TryGetLastCheckpoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCSUtility_TryGetLastCheckpoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCSUtility::execTryGetLastCheckpoint)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutCheckpointTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UCSUtility::TryGetLastCheckpoint(Z_Param_Out_OutCheckpointTransform);
	P_NATIVE_END;
}
// ********** End Class UCSUtility Function TryGetLastCheckpoint ***********************************

// ********** Begin Class UCSUtility Function TrySetCheckpoint *************************************
struct Z_Construct_UFunction_UCSUtility_TrySetCheckpoint_Statics
{
	struct CSUtility_eventTrySetCheckpoint_Parms
	{
		FName CheckpointKey;
		FTransform CheckpointTransform;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utility/CSUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckpointKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckpointTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CheckpointKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheckpointTransform;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCSUtility_TrySetCheckpoint_Statics::NewProp_CheckpointKey = { "CheckpointKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CSUtility_eventTrySetCheckpoint_Parms, CheckpointKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckpointKey_MetaData), NewProp_CheckpointKey_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCSUtility_TrySetCheckpoint_Statics::NewProp_CheckpointTransform = { "CheckpointTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CSUtility_eventTrySetCheckpoint_Parms, CheckpointTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckpointTransform_MetaData), NewProp_CheckpointTransform_MetaData) };
void Z_Construct_UFunction_UCSUtility_TrySetCheckpoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CSUtility_eventTrySetCheckpoint_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCSUtility_TrySetCheckpoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CSUtility_eventTrySetCheckpoint_Parms), &Z_Construct_UFunction_UCSUtility_TrySetCheckpoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCSUtility_TrySetCheckpoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSUtility_TrySetCheckpoint_Statics::NewProp_CheckpointKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSUtility_TrySetCheckpoint_Statics::NewProp_CheckpointTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSUtility_TrySetCheckpoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCSUtility_TrySetCheckpoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCSUtility_TrySetCheckpoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCSUtility, nullptr, "TrySetCheckpoint", Z_Construct_UFunction_UCSUtility_TrySetCheckpoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSUtility_TrySetCheckpoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCSUtility_TrySetCheckpoint_Statics::CSUtility_eventTrySetCheckpoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCSUtility_TrySetCheckpoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCSUtility_TrySetCheckpoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCSUtility_TrySetCheckpoint_Statics::CSUtility_eventTrySetCheckpoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCSUtility_TrySetCheckpoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCSUtility_TrySetCheckpoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCSUtility::execTrySetCheckpoint)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_CheckpointKey);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_CheckpointTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UCSUtility::TrySetCheckpoint(Z_Param_CheckpointKey,Z_Param_Out_CheckpointTransform);
	P_NATIVE_END;
}
// ********** End Class UCSUtility Function TrySetCheckpoint ***************************************

// ********** Begin Class UCSUtility ***************************************************************
void UCSUtility::StaticRegisterNativesUCSUtility()
{
	UClass* Class = UCSUtility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TryGetCheckpoint", &UCSUtility::execTryGetCheckpoint },
		{ "TryGetLastCheckpoint", &UCSUtility::execTryGetLastCheckpoint },
		{ "TrySetCheckpoint", &UCSUtility::execTrySetCheckpoint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCSUtility;
UClass* UCSUtility::GetPrivateStaticClass()
{
	using TClass = UCSUtility;
	if (!Z_Registration_Info_UClass_UCSUtility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CSUtility"),
			Z_Registration_Info_UClass_UCSUtility.InnerSingleton,
			StaticRegisterNativesUCSUtility,
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
	return Z_Registration_Info_UClass_UCSUtility.InnerSingleton;
}
UClass* Z_Construct_UClass_UCSUtility_NoRegister()
{
	return UCSUtility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCSUtility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Utility/CSUtility.h" },
		{ "ModuleRelativePath", "Public/Utility/CSUtility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCSUtility_TryGetCheckpoint, "TryGetCheckpoint" }, // 3443254664
		{ &Z_Construct_UFunction_UCSUtility_TryGetLastCheckpoint, "TryGetLastCheckpoint" }, // 1622705728
		{ &Z_Construct_UFunction_UCSUtility_TrySetCheckpoint, "TrySetCheckpoint" }, // 3487884102
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSUtility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCSUtility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_CheckpointSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCSUtility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSUtility_Statics::ClassParams = {
	&UCSUtility::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCSUtility_Statics::Class_MetaDataParams), Z_Construct_UClass_UCSUtility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCSUtility()
{
	if (!Z_Registration_Info_UClass_UCSUtility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCSUtility.OuterSingleton, Z_Construct_UClass_UCSUtility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCSUtility.OuterSingleton;
}
UCSUtility::UCSUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCSUtility);
UCSUtility::~UCSUtility() {}
// ********** End Class UCSUtility *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CheckpointSystem_Source_CheckpointSystem_Public_Utility_CSUtility_h__Script_CheckpointSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCSUtility, UCSUtility::StaticClass, TEXT("UCSUtility"), &Z_Registration_Info_UClass_UCSUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSUtility), 1199988107U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CheckpointSystem_Source_CheckpointSystem_Public_Utility_CSUtility_h__Script_CheckpointSystem_1748136793(TEXT("/Script/CheckpointSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CheckpointSystem_Source_CheckpointSystem_Public_Utility_CSUtility_h__Script_CheckpointSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CheckpointSystem_Source_CheckpointSystem_Public_Utility_CSUtility_h__Script_CheckpointSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
