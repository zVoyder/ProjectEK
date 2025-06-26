// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Thrower/Throwables/ThrowableGrenade.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeThrowableGrenade() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AThrowableBase();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AThrowableGrenade();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AThrowableGrenade_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AThrowableGrenade Function Explode ***************************************
struct Z_Construct_UFunction_AThrowableGrenade_Explode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Thrower/Throwables/ThrowableGrenade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowableGrenade_Explode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AThrowableGrenade, nullptr, "Explode", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableGrenade_Explode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThrowableGrenade_Explode_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AThrowableGrenade_Explode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThrowableGrenade_Explode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AThrowableGrenade::execExplode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Explode();
	P_NATIVE_END;
}
// ********** End Class AThrowableGrenade Function Explode *****************************************

// ********** Begin Class AThrowableGrenade Function OnExplosion ***********************************
static FName NAME_AThrowableGrenade_OnExplosion = FName(TEXT("OnExplosion"));
void AThrowableGrenade::OnExplosion()
{
	UFunction* Func = FindFunctionChecked(NAME_AThrowableGrenade_OnExplosion);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnExplosion_Implementation();
	}
}
struct Z_Construct_UFunction_AThrowableGrenade_OnExplosion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Thrower/Throwables/ThrowableGrenade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowableGrenade_OnExplosion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AThrowableGrenade, nullptr, "OnExplosion", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableGrenade_OnExplosion_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThrowableGrenade_OnExplosion_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AThrowableGrenade_OnExplosion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThrowableGrenade_OnExplosion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AThrowableGrenade::execOnExplosion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnExplosion_Implementation();
	P_NATIVE_END;
}
// ********** End Class AThrowableGrenade Function OnExplosion *************************************

// ********** Begin Class AThrowableGrenade ********************************************************
void AThrowableGrenade::StaticRegisterNativesAThrowableGrenade()
{
	UClass* Class = AThrowableGrenade::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Explode", &AThrowableGrenade::execExplode },
		{ "OnExplosion", &AThrowableGrenade::execOnExplosion },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AThrowableGrenade;
UClass* AThrowableGrenade::GetPrivateStaticClass()
{
	using TClass = AThrowableGrenade;
	if (!Z_Registration_Info_UClass_AThrowableGrenade.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ThrowableGrenade"),
			Z_Registration_Info_UClass_AThrowableGrenade.InnerSingleton,
			StaticRegisterNativesAThrowableGrenade,
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
	return Z_Registration_Info_UClass_AThrowableGrenade.InnerSingleton;
}
UClass* Z_Construct_UClass_AThrowableGrenade_NoRegister()
{
	return AThrowableGrenade::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AThrowableGrenade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Thrower/Throwables/ThrowableGrenade.h" },
		{ "ModuleRelativePath", "Public/Thrower/Throwables/ThrowableGrenade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Throwable|Grenade" },
		{ "ModuleRelativePath", "Public/Thrower/Throwables/ThrowableGrenade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionRadius_MetaData[] = {
		{ "Category", "Throwable|Grenade" },
		{ "ModuleRelativePath", "Public/Thrower/Throwables/ThrowableGrenade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTypeClass_MetaData[] = {
		{ "Category", "Throwable|Grenade" },
		{ "ModuleRelativePath", "Public/Thrower/Throwables/ThrowableGrenade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoFullDamage_MetaData[] = {
		{ "Category", "Throwable|Grenade" },
		{ "ModuleRelativePath", "Public/Thrower/Throwables/ThrowableGrenade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionChannel_MetaData[] = {
		{ "Category", "Throwable|Grenade" },
		{ "ModuleRelativePath", "Public/Thrower/Throwables/ThrowableGrenade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionRadius;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
	static void NewProp_bDoFullDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoFullDamage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExplosionChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AThrowableGrenade_Explode, "Explode" }, // 1758134460
		{ &Z_Construct_UFunction_AThrowableGrenade_OnExplosion, "OnExplosion" }, // 2166410130
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThrowableGrenade>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThrowableGrenade_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowableGrenade, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThrowableGrenade_Statics::NewProp_ExplosionRadius = { "ExplosionRadius", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowableGrenade, ExplosionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionRadius_MetaData), NewProp_ExplosionRadius_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThrowableGrenade_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowableGrenade, DamageTypeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTypeClass_MetaData), NewProp_DamageTypeClass_MetaData) };
void Z_Construct_UClass_AThrowableGrenade_Statics::NewProp_bDoFullDamage_SetBit(void* Obj)
{
	((AThrowableGrenade*)Obj)->bDoFullDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AThrowableGrenade_Statics::NewProp_bDoFullDamage = { "bDoFullDamage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AThrowableGrenade), &Z_Construct_UClass_AThrowableGrenade_Statics::NewProp_bDoFullDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoFullDamage_MetaData), NewProp_bDoFullDamage_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AThrowableGrenade_Statics::NewProp_ExplosionChannel = { "ExplosionChannel", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowableGrenade, ExplosionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionChannel_MetaData), NewProp_ExplosionChannel_MetaData) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThrowableGrenade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableGrenade_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableGrenade_Statics::NewProp_ExplosionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableGrenade_Statics::NewProp_DamageTypeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableGrenade_Statics::NewProp_bDoFullDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableGrenade_Statics::NewProp_ExplosionChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableGrenade_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AThrowableGrenade_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AThrowableBase,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableGrenade_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AThrowableGrenade_Statics::ClassParams = {
	&AThrowableGrenade::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AThrowableGrenade_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableGrenade_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableGrenade_Statics::Class_MetaDataParams), Z_Construct_UClass_AThrowableGrenade_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AThrowableGrenade()
{
	if (!Z_Registration_Info_UClass_AThrowableGrenade.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThrowableGrenade.OuterSingleton, Z_Construct_UClass_AThrowableGrenade_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AThrowableGrenade.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AThrowableGrenade);
AThrowableGrenade::~AThrowableGrenade() {}
// ********** End Class AThrowableGrenade **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Throwables_ThrowableGrenade_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AThrowableGrenade, AThrowableGrenade::StaticClass, TEXT("AThrowableGrenade"), &Z_Registration_Info_UClass_AThrowableGrenade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThrowableGrenade), 1381767866U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Throwables_ThrowableGrenade_h__Script_WeaponSystem_671922381(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Throwables_ThrowableGrenade_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Throwables_ThrowableGrenade_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
