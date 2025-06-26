// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/ShootPoint.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShootPoint() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShootPoint();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShootPoint_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UShootPoint Function GetShootPointDirection ******************************
struct Z_Construct_UFunction_UShootPoint_GetShootPointDirection_Statics
{
	struct ShootPoint_eventGetShootPointDirection_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/ShootPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShootPoint_GetShootPointDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShootPoint_eventGetShootPointDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShootPoint_GetShootPointDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShootPoint_GetShootPointDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShootPoint_GetShootPointDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShootPoint_GetShootPointDirection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShootPoint, nullptr, "GetShootPointDirection", Z_Construct_UFunction_UShootPoint_GetShootPointDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShootPoint_GetShootPointDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShootPoint_GetShootPointDirection_Statics::ShootPoint_eventGetShootPointDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShootPoint_GetShootPointDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShootPoint_GetShootPointDirection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShootPoint_GetShootPointDirection_Statics::ShootPoint_eventGetShootPointDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShootPoint_GetShootPointDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShootPoint_GetShootPointDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShootPoint::execGetShootPointDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetShootPointDirection();
	P_NATIVE_END;
}
// ********** End Class UShootPoint Function GetShootPointDirection ********************************

// ********** Begin Class UShootPoint Function GetShootPointLocation *******************************
struct Z_Construct_UFunction_UShootPoint_GetShootPointLocation_Statics
{
	struct ShootPoint_eventGetShootPointLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/ShootPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShootPoint_GetShootPointLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShootPoint_eventGetShootPointLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShootPoint_GetShootPointLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShootPoint_GetShootPointLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShootPoint_GetShootPointLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShootPoint_GetShootPointLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShootPoint, nullptr, "GetShootPointLocation", Z_Construct_UFunction_UShootPoint_GetShootPointLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShootPoint_GetShootPointLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShootPoint_GetShootPointLocation_Statics::ShootPoint_eventGetShootPointLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShootPoint_GetShootPointLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShootPoint_GetShootPointLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShootPoint_GetShootPointLocation_Statics::ShootPoint_eventGetShootPointLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShootPoint_GetShootPointLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShootPoint_GetShootPointLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShootPoint::execGetShootPointLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetShootPointLocation();
	P_NATIVE_END;
}
// ********** End Class UShootPoint Function GetShootPointLocation *********************************

// ********** Begin Class UShootPoint Function GetShootPointRelativeDirection **********************
struct Z_Construct_UFunction_UShootPoint_GetShootPointRelativeDirection_Statics
{
	struct ShootPoint_eventGetShootPointRelativeDirection_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/ShootPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShootPoint_GetShootPointRelativeDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShootPoint_eventGetShootPointRelativeDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShootPoint_GetShootPointRelativeDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShootPoint_GetShootPointRelativeDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShootPoint_GetShootPointRelativeDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShootPoint_GetShootPointRelativeDirection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShootPoint, nullptr, "GetShootPointRelativeDirection", Z_Construct_UFunction_UShootPoint_GetShootPointRelativeDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShootPoint_GetShootPointRelativeDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShootPoint_GetShootPointRelativeDirection_Statics::ShootPoint_eventGetShootPointRelativeDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShootPoint_GetShootPointRelativeDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShootPoint_GetShootPointRelativeDirection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShootPoint_GetShootPointRelativeDirection_Statics::ShootPoint_eventGetShootPointRelativeDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShootPoint_GetShootPointRelativeDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShootPoint_GetShootPointRelativeDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShootPoint::execGetShootPointRelativeDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetShootPointRelativeDirection();
	P_NATIVE_END;
}
// ********** End Class UShootPoint Function GetShootPointRelativeDirection ************************

// ********** Begin Class UShootPoint Function GetShootPointRelativeLocation ***********************
struct Z_Construct_UFunction_UShootPoint_GetShootPointRelativeLocation_Statics
{
	struct ShootPoint_eventGetShootPointRelativeLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/ShootPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShootPoint_GetShootPointRelativeLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShootPoint_eventGetShootPointRelativeLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShootPoint_GetShootPointRelativeLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShootPoint_GetShootPointRelativeLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShootPoint_GetShootPointRelativeLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShootPoint_GetShootPointRelativeLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShootPoint, nullptr, "GetShootPointRelativeLocation", Z_Construct_UFunction_UShootPoint_GetShootPointRelativeLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShootPoint_GetShootPointRelativeLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShootPoint_GetShootPointRelativeLocation_Statics::ShootPoint_eventGetShootPointRelativeLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShootPoint_GetShootPointRelativeLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShootPoint_GetShootPointRelativeLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShootPoint_GetShootPointRelativeLocation_Statics::ShootPoint_eventGetShootPointRelativeLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShootPoint_GetShootPointRelativeLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShootPoint_GetShootPointRelativeLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShootPoint::execGetShootPointRelativeLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetShootPointRelativeLocation();
	P_NATIVE_END;
}
// ********** End Class UShootPoint Function GetShootPointRelativeLocation *************************

// ********** Begin Class UShootPoint Function GetShootPointSpreadedDirection **********************
struct Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedDirection_Statics
{
	struct ShootPoint_eventGetShootPointSpreadedDirection_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/ShootPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShootPoint_eventGetShootPointSpreadedDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedDirection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShootPoint, nullptr, "GetShootPointSpreadedDirection", Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedDirection_Statics::ShootPoint_eventGetShootPointSpreadedDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedDirection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedDirection_Statics::ShootPoint_eventGetShootPointSpreadedDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShootPoint::execGetShootPointSpreadedDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetShootPointSpreadedDirection();
	P_NATIVE_END;
}
// ********** End Class UShootPoint Function GetShootPointSpreadedDirection ************************

// ********** Begin Class UShootPoint Function GetShootPointSpreadedRelativeDirection **************
struct Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedRelativeDirection_Statics
{
	struct ShootPoint_eventGetShootPointSpreadedRelativeDirection_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/ShootPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedRelativeDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShootPoint_eventGetShootPointSpreadedRelativeDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedRelativeDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedRelativeDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedRelativeDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedRelativeDirection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShootPoint, nullptr, "GetShootPointSpreadedRelativeDirection", Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedRelativeDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedRelativeDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedRelativeDirection_Statics::ShootPoint_eventGetShootPointSpreadedRelativeDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedRelativeDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedRelativeDirection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedRelativeDirection_Statics::ShootPoint_eventGetShootPointSpreadedRelativeDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedRelativeDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedRelativeDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShootPoint::execGetShootPointSpreadedRelativeDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetShootPointSpreadedRelativeDirection();
	P_NATIVE_END;
}
// ********** End Class UShootPoint Function GetShootPointSpreadedRelativeDirection ****************

// ********** Begin Class UShootPoint Function GetSpreadRad ****************************************
struct Z_Construct_UFunction_UShootPoint_GetSpreadRad_Statics
{
	struct ShootPoint_eventGetSpreadRad_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/ShootPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShootPoint_GetSpreadRad_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShootPoint_eventGetSpreadRad_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShootPoint_GetSpreadRad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShootPoint_GetSpreadRad_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShootPoint_GetSpreadRad_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShootPoint_GetSpreadRad_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShootPoint, nullptr, "GetSpreadRad", Z_Construct_UFunction_UShootPoint_GetSpreadRad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShootPoint_GetSpreadRad_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShootPoint_GetSpreadRad_Statics::ShootPoint_eventGetSpreadRad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShootPoint_GetSpreadRad_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShootPoint_GetSpreadRad_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShootPoint_GetSpreadRad_Statics::ShootPoint_eventGetSpreadRad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShootPoint_GetSpreadRad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShootPoint_GetSpreadRad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShootPoint::execGetSpreadRad)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSpreadRad();
	P_NATIVE_END;
}
// ********** End Class UShootPoint Function GetSpreadRad ******************************************

// ********** Begin Class UShootPoint **************************************************************
void UShootPoint::StaticRegisterNativesUShootPoint()
{
	UClass* Class = UShootPoint::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetShootPointDirection", &UShootPoint::execGetShootPointDirection },
		{ "GetShootPointLocation", &UShootPoint::execGetShootPointLocation },
		{ "GetShootPointRelativeDirection", &UShootPoint::execGetShootPointRelativeDirection },
		{ "GetShootPointRelativeLocation", &UShootPoint::execGetShootPointRelativeLocation },
		{ "GetShootPointSpreadedDirection", &UShootPoint::execGetShootPointSpreadedDirection },
		{ "GetShootPointSpreadedRelativeDirection", &UShootPoint::execGetShootPointSpreadedRelativeDirection },
		{ "GetSpreadRad", &UShootPoint::execGetSpreadRad },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UShootPoint;
UClass* UShootPoint::GetPrivateStaticClass()
{
	using TClass = UShootPoint;
	if (!Z_Registration_Info_UClass_UShootPoint.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ShootPoint"),
			Z_Registration_Info_UClass_UShootPoint.InnerSingleton,
			StaticRegisterNativesUShootPoint,
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
	return Z_Registration_Info_UClass_UShootPoint.InnerSingleton;
}
UClass* Z_Construct_UClass_UShootPoint_NoRegister()
{
	return UShootPoint::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UShootPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Shooter/ShootPoint.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Shooter/ShootPoint.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Shooter/ShootPoint.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UShootPoint_GetShootPointDirection, "GetShootPointDirection" }, // 2805205657
		{ &Z_Construct_UFunction_UShootPoint_GetShootPointLocation, "GetShootPointLocation" }, // 2629782171
		{ &Z_Construct_UFunction_UShootPoint_GetShootPointRelativeDirection, "GetShootPointRelativeDirection" }, // 3425935322
		{ &Z_Construct_UFunction_UShootPoint_GetShootPointRelativeLocation, "GetShootPointRelativeLocation" }, // 1344855617
		{ &Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedDirection, "GetShootPointSpreadedDirection" }, // 2236515865
		{ &Z_Construct_UFunction_UShootPoint_GetShootPointSpreadedRelativeDirection, "GetShootPointSpreadedRelativeDirection" }, // 3837310300
		{ &Z_Construct_UFunction_UShootPoint_GetSpreadRad, "GetSpreadRad" }, // 587335628
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShootPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShootPoint_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0040000800080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShootPoint, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowComponent_MetaData), NewProp_ArrowComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShootPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootPoint_Statics::NewProp_ArrowComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShootPoint_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UShootPoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShootPoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UShootPoint_Statics::ClassParams = {
	&UShootPoint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UShootPoint_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UShootPoint_Statics::PropPointers), 0),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShootPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_UShootPoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UShootPoint()
{
	if (!Z_Registration_Info_UClass_UShootPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShootPoint.OuterSingleton, Z_Construct_UClass_UShootPoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UShootPoint.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UShootPoint);
UShootPoint::~UShootPoint() {}
// ********** End Class UShootPoint ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_ShootPoint_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UShootPoint, UShootPoint::StaticClass, TEXT("UShootPoint"), &Z_Registration_Info_UClass_UShootPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShootPoint), 1772809665U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_ShootPoint_h__Script_WeaponSystem_1313039905(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_ShootPoint_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_ShootPoint_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
