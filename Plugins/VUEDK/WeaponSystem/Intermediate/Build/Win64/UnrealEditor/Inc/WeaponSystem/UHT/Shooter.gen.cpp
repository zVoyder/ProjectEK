// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Shooter.h"
#include "Shooter/Data/ShootData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShooter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShootBarrel_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooter();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooter_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooterBehaviourBase_NoRegister();
WEAPONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FShootData();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UShooter Function GetShootData *******************************************
struct Z_Construct_UFunction_UShooter_GetShootData_Statics
{
	struct Shooter_eventGetShootData_Parms
	{
		FShootData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Shooter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShooter_GetShootData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Shooter_eventGetShootData_Parms, ReturnValue), Z_Construct_UScriptStruct_FShootData, METADATA_PARAMS(0, nullptr) }; // 39876529
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooter_GetShootData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooter_GetShootData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooter_GetShootData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooter_GetShootData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooter, nullptr, "GetShootData", Z_Construct_UFunction_UShooter_GetShootData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooter_GetShootData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooter_GetShootData_Statics::Shooter_eventGetShootData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooter_GetShootData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooter_GetShootData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooter_GetShootData_Statics::Shooter_eventGetShootData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooter_GetShootData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooter_GetShootData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooter::execGetShootData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FShootData*)Z_Param__Result=P_THIS->GetShootData();
	P_NATIVE_END;
}
// ********** End Class UShooter Function GetShootData *********************************************

// ********** Begin Class UShooter Function Init ***************************************************
struct Z_Construct_UFunction_UShooter_Init_Statics
{
	struct Shooter_eventInit_Parms
	{
		UShootBarrel* InShootBarrel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Shooter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InShootBarrel_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InShootBarrel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShooter_Init_Statics::NewProp_InShootBarrel = { "InShootBarrel", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Shooter_eventInit_Parms, InShootBarrel), Z_Construct_UClass_UShootBarrel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InShootBarrel_MetaData), NewProp_InShootBarrel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooter_Init_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooter_Init_Statics::NewProp_InShootBarrel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooter_Init_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooter_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooter, nullptr, "Init", Z_Construct_UFunction_UShooter_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooter_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooter_Init_Statics::Shooter_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooter_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooter_Init_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooter_Init_Statics::Shooter_eventInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooter_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooter_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooter::execInit)
{
	P_GET_OBJECT(UShootBarrel,Z_Param_InShootBarrel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init(Z_Param_InShootBarrel);
	P_NATIVE_END;
}
// ********** End Class UShooter Function Init *****************************************************

// ********** Begin Class UShooter Function SetOwner ***********************************************
struct Z_Construct_UFunction_UShooter_SetOwner_Statics
{
	struct Shooter_eventSetOwner_Parms
	{
		APawn* InOwner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Shooter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShooter_SetOwner_Statics::NewProp_InOwner = { "InOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Shooter_eventSetOwner_Parms, InOwner), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooter_SetOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooter_SetOwner_Statics::NewProp_InOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooter_SetOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooter_SetOwner_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooter, nullptr, "SetOwner", Z_Construct_UFunction_UShooter_SetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooter_SetOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooter_SetOwner_Statics::Shooter_eventSetOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooter_SetOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooter_SetOwner_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooter_SetOwner_Statics::Shooter_eventSetOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooter_SetOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooter_SetOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooter::execSetOwner)
{
	P_GET_OBJECT(APawn,Z_Param_InOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOwner(Z_Param_InOwner);
	P_NATIVE_END;
}
// ********** End Class UShooter Function SetOwner *************************************************

// ********** Begin Class UShooter Function Shoot **************************************************
struct Z_Construct_UFunction_UShooter_Shoot_Statics
{
	struct Shooter_eventShoot_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Shooter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UShooter_Shoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Shooter_eventShoot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UShooter_Shoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Shooter_eventShoot_Parms), &Z_Construct_UFunction_UShooter_Shoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooter_Shoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooter_Shoot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooter_Shoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooter_Shoot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooter, nullptr, "Shoot", Z_Construct_UFunction_UShooter_Shoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooter_Shoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooter_Shoot_Statics::Shooter_eventShoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooter_Shoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooter_Shoot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooter_Shoot_Statics::Shooter_eventShoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooter_Shoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooter_Shoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooter::execShoot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Shoot();
	P_NATIVE_END;
}
// ********** End Class UShooter Function Shoot ****************************************************

// ********** Begin Class UShooter *****************************************************************
void UShooter::StaticRegisterNativesUShooter()
{
	UClass* Class = UShooter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetShootData", &UShooter::execGetShootData },
		{ "Init", &UShooter::execInit },
		{ "SetOwner", &UShooter::execSetOwner },
		{ "Shoot", &UShooter::execShoot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UShooter;
UClass* UShooter::GetPrivateStaticClass()
{
	using TClass = UShooter;
	if (!Z_Registration_Info_UClass_UShooter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Shooter"),
			Z_Registration_Info_UClass_UShooter.InnerSingleton,
			StaticRegisterNativesUShooter,
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
	return Z_Registration_Info_UClass_UShooter.InnerSingleton;
}
UClass* Z_Construct_UClass_UShooter_NoRegister()
{
	return UShooter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UShooter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Shooter/Shooter.h" },
		{ "ModuleRelativePath", "Public/Shooter/Shooter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShooterBehaviour_MetaData[] = {
		{ "Category", "Shooter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Shooter/Shooter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Shooter" },
		{ "ModuleRelativePath", "Public/Shooter/Shooter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShooterBehaviour;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShootData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UShooter_GetShootData, "GetShootData" }, // 182848591
		{ &Z_Construct_UFunction_UShooter_Init, "Init" }, // 221199685
		{ &Z_Construct_UFunction_UShooter_SetOwner, "SetOwner" }, // 4023690479
		{ &Z_Construct_UFunction_UShooter_Shoot, "Shoot" }, // 3953621717
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShooter_Statics::NewProp_ShooterBehaviour = { "ShooterBehaviour", nullptr, (EPropertyFlags)0x001200000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooter, ShooterBehaviour), Z_Construct_UClass_UShooterBehaviourBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShooterBehaviour_MetaData), NewProp_ShooterBehaviour_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShooter_Statics::NewProp_ShootData = { "ShootData", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooter, ShootData), Z_Construct_UScriptStruct_FShootData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootData_MetaData), NewProp_ShootData_MetaData) }; // 39876529
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShooter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooter_Statics::NewProp_ShooterBehaviour,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooter_Statics::NewProp_ShootData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShooter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UShooter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShooter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UShooter_Statics::ClassParams = {
	&UShooter::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UShooter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UShooter_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShooter_Statics::Class_MetaDataParams), Z_Construct_UClass_UShooter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UShooter()
{
	if (!Z_Registration_Info_UClass_UShooter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShooter.OuterSingleton, Z_Construct_UClass_UShooter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UShooter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UShooter);
UShooter::~UShooter() {}
// ********** End Class UShooter *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Shooter_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UShooter, UShooter::StaticClass, TEXT("UShooter"), &Z_Registration_Info_UClass_UShooter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShooter), 305445885U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Shooter_h__Script_WeaponSystem_1302631939(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Shooter_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Shooter_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
