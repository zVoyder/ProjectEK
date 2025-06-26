// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Projectiles/ProjectileExplosive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeProjectileExplosive() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AProjectileBase();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AProjectileExplosive();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AProjectileExplosive_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AProjectileExplosive Function Explode ************************************
struct Z_Construct_UFunction_AProjectileExplosive_Explode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileExplosive.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileExplosive_Explode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectileExplosive, nullptr, "Explode", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileExplosive_Explode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectileExplosive_Explode_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AProjectileExplosive_Explode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectileExplosive_Explode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectileExplosive::execExplode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Explode();
	P_NATIVE_END;
}
// ********** End Class AProjectileExplosive Function Explode **************************************

// ********** Begin Class AProjectileExplosive Function OnExplosion ********************************
static FName NAME_AProjectileExplosive_OnExplosion = FName(TEXT("OnExplosion"));
void AProjectileExplosive::OnExplosion()
{
	UFunction* Func = FindFunctionChecked(NAME_AProjectileExplosive_OnExplosion);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnExplosion_Implementation();
	}
}
struct Z_Construct_UFunction_AProjectileExplosive_OnExplosion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileExplosive.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileExplosive_OnExplosion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectileExplosive, nullptr, "OnExplosion", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileExplosive_OnExplosion_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectileExplosive_OnExplosion_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AProjectileExplosive_OnExplosion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectileExplosive_OnExplosion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectileExplosive::execOnExplosion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnExplosion_Implementation();
	P_NATIVE_END;
}
// ********** End Class AProjectileExplosive Function OnExplosion **********************************

// ********** Begin Class AProjectileExplosive *****************************************************
void AProjectileExplosive::StaticRegisterNativesAProjectileExplosive()
{
	UClass* Class = AProjectileExplosive::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Explode", &AProjectileExplosive::execExplode },
		{ "OnExplosion", &AProjectileExplosive::execOnExplosion },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AProjectileExplosive;
UClass* AProjectileExplosive::GetPrivateStaticClass()
{
	using TClass = AProjectileExplosive;
	if (!Z_Registration_Info_UClass_AProjectileExplosive.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ProjectileExplosive"),
			Z_Registration_Info_UClass_AProjectileExplosive.InnerSingleton,
			StaticRegisterNativesAProjectileExplosive,
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
	return Z_Registration_Info_UClass_AProjectileExplosive.InnerSingleton;
}
UClass* Z_Construct_UClass_AProjectileExplosive_NoRegister()
{
	return AProjectileExplosive::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProjectileExplosive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Shooter/Projectiles/ProjectileExplosive.h" },
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileExplosive.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionRadius_MetaData[] = {
		{ "Category", "ProjectileExplosive" },
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileExplosive.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoFullDamage_MetaData[] = {
		{ "Category", "ProjectileExplosive" },
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileExplosive.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "if true, damage not scaled based on distance from Origin." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionChannel_MetaData[] = {
		{ "Category", "ProjectileExplosive" },
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileExplosive.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionRadius;
	static void NewProp_bDoFullDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoFullDamage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExplosionChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectileExplosive_Explode, "Explode" }, // 1378303990
		{ &Z_Construct_UFunction_AProjectileExplosive_OnExplosion, "OnExplosion" }, // 2487041208
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileExplosive>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectileExplosive_Statics::NewProp_ExplosionRadius = { "ExplosionRadius", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileExplosive, ExplosionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionRadius_MetaData), NewProp_ExplosionRadius_MetaData) };
void Z_Construct_UClass_AProjectileExplosive_Statics::NewProp_bDoFullDamage_SetBit(void* Obj)
{
	((AProjectileExplosive*)Obj)->bDoFullDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectileExplosive_Statics::NewProp_bDoFullDamage = { "bDoFullDamage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AProjectileExplosive), &Z_Construct_UClass_AProjectileExplosive_Statics::NewProp_bDoFullDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoFullDamage_MetaData), NewProp_bDoFullDamage_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AProjectileExplosive_Statics::NewProp_ExplosionChannel = { "ExplosionChannel", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileExplosive, ExplosionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionChannel_MetaData), NewProp_ExplosionChannel_MetaData) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileExplosive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileExplosive_Statics::NewProp_ExplosionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileExplosive_Statics::NewProp_bDoFullDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileExplosive_Statics::NewProp_ExplosionChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileExplosive_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProjectileExplosive_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AProjectileBase,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileExplosive_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectileExplosive_Statics::ClassParams = {
	&AProjectileExplosive::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AProjectileExplosive_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileExplosive_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileExplosive_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectileExplosive_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectileExplosive()
{
	if (!Z_Registration_Info_UClass_AProjectileExplosive.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectileExplosive.OuterSingleton, Z_Construct_UClass_AProjectileExplosive_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectileExplosive.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileExplosive);
AProjectileExplosive::~AProjectileExplosive() {}
// ********** End Class AProjectileExplosive *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileExplosive_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectileExplosive, AProjectileExplosive::StaticClass, TEXT("AProjectileExplosive"), &Z_Registration_Info_UClass_AProjectileExplosive, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectileExplosive), 1085474889U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileExplosive_h__Script_WeaponSystem_32927983(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileExplosive_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileExplosive_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
