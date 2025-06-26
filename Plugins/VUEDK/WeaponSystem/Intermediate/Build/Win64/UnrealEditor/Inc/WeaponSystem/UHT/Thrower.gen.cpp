// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Thrower/Thrower.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeThrower() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UThrower();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UThrower_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UThrower Function Throw **************************************************
struct Z_Construct_UFunction_UThrower_Throw_Statics
{
	struct Thrower_eventThrow_Parms
	{
		float Force;
		float AngularSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_AngularSpeed", "0.000000" },
		{ "ModuleRelativePath", "Public/Thrower/Thrower.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Force;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UThrower_Throw_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Thrower_eventThrow_Parms, Force), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Force_MetaData), NewProp_Force_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UThrower_Throw_Statics::NewProp_AngularSpeed = { "AngularSpeed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Thrower_eventThrow_Parms, AngularSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularSpeed_MetaData), NewProp_AngularSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThrower_Throw_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThrower_Throw_Statics::NewProp_Force,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThrower_Throw_Statics::NewProp_AngularSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThrower_Throw_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThrower_Throw_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UThrower, nullptr, "Throw", Z_Construct_UFunction_UThrower_Throw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThrower_Throw_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThrower_Throw_Statics::Thrower_eventThrow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThrower_Throw_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThrower_Throw_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UThrower_Throw_Statics::Thrower_eventThrow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UThrower_Throw()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThrower_Throw_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UThrower::execThrow)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Force);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AngularSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Throw(Z_Param_Force,Z_Param_AngularSpeed);
	P_NATIVE_END;
}
// ********** End Class UThrower Function Throw ****************************************************

// ********** Begin Class UThrower Function ThrowAtDirection ***************************************
struct Z_Construct_UFunction_UThrower_ThrowAtDirection_Statics
{
	struct Thrower_eventThrowAtDirection_Parms
	{
		float Force;
		float AngularSpeed;
		FVector Direction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Thrower/Thrower.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Force;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UThrower_ThrowAtDirection_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Thrower_eventThrowAtDirection_Parms, Force), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Force_MetaData), NewProp_Force_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UThrower_ThrowAtDirection_Statics::NewProp_AngularSpeed = { "AngularSpeed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Thrower_eventThrowAtDirection_Parms, AngularSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularSpeed_MetaData), NewProp_AngularSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UThrower_ThrowAtDirection_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Thrower_eventThrowAtDirection_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThrower_ThrowAtDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThrower_ThrowAtDirection_Statics::NewProp_Force,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThrower_ThrowAtDirection_Statics::NewProp_AngularSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThrower_ThrowAtDirection_Statics::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThrower_ThrowAtDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThrower_ThrowAtDirection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UThrower, nullptr, "ThrowAtDirection", Z_Construct_UFunction_UThrower_ThrowAtDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThrower_ThrowAtDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThrower_ThrowAtDirection_Statics::Thrower_eventThrowAtDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThrower_ThrowAtDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThrower_ThrowAtDirection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UThrower_ThrowAtDirection_Statics::Thrower_eventThrowAtDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UThrower_ThrowAtDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThrower_ThrowAtDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UThrower::execThrowAtDirection)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Force);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AngularSpeed);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ThrowAtDirection(Z_Param_Force,Z_Param_AngularSpeed,Z_Param_Out_Direction);
	P_NATIVE_END;
}
// ********** End Class UThrower Function ThrowAtDirection *****************************************

// ********** Begin Class UThrower *****************************************************************
void UThrower::StaticRegisterNativesUThrower()
{
	UClass* Class = UThrower::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Throw", &UThrower::execThrow },
		{ "ThrowAtDirection", &UThrower::execThrowAtDirection },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UThrower;
UClass* UThrower::GetPrivateStaticClass()
{
	using TClass = UThrower;
	if (!Z_Registration_Info_UClass_UThrower.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Thrower"),
			Z_Registration_Info_UClass_UThrower.InnerSingleton,
			StaticRegisterNativesUThrower,
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
	return Z_Registration_Info_UClass_UThrower.InnerSingleton;
}
UClass* Z_Construct_UClass_UThrower_NoRegister()
{
	return UThrower::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UThrower_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Thrower/Thrower.h" },
		{ "ModuleRelativePath", "Public/Thrower/Thrower.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowableTag_MetaData[] = {
		{ "Category", "Thrower" },
		{ "ModuleRelativePath", "Public/Thrower/Thrower.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Thrower/Thrower.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThrowableTag;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UThrower_Throw, "Throw" }, // 2266992654
		{ &Z_Construct_UFunction_UThrower_ThrowAtDirection, "ThrowAtDirection" }, // 2331522820
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThrower>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThrower_Statics::NewProp_ThrowableTag = { "ThrowableTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UThrower, ThrowableTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowableTag_MetaData), NewProp_ThrowableTag_MetaData) }; // 133831994
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThrower_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0040000800080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UThrower, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowComponent_MetaData), NewProp_ArrowComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UThrower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrower_Statics::NewProp_ThrowableTag,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrower_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThrower_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UThrower_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThrower_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UThrower_Statics::ClassParams = {
	&UThrower::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UThrower_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UThrower_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrower_Statics::Class_MetaDataParams), Z_Construct_UClass_UThrower_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UThrower()
{
	if (!Z_Registration_Info_UClass_UThrower.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UThrower.OuterSingleton, Z_Construct_UClass_UThrower_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UThrower.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UThrower);
UThrower::~UThrower() {}
// ********** End Class UThrower *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Thrower_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UThrower, UThrower::StaticClass, TEXT("UThrower"), &Z_Registration_Info_UClass_UThrower, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThrower), 4120618200U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Thrower_h__Script_WeaponSystem_1635682988(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Thrower_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Thrower_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
