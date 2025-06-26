// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Behaviours/ShooterPhysicProjectileBehaviour.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShooterPhysicProjectileBehaviour() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
OBJECTPOOL_API UClass* Z_Construct_UClass_UActorPool_NoRegister();
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AProjectileBase_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooterBehaviourBase();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooterPhysicProjectileBehaviour();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooterPhysicProjectileBehaviour_NoRegister();
WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnProjectileSpawned__DelegateSignature();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnProjectileSpawned **************************************************
struct Z_Construct_UDelegateFunction_WeaponSystem_OnProjectileSpawned__DelegateSignature_Statics
{
	struct _Script_WeaponSystem_eventOnProjectileSpawned_Parms
	{
		AProjectileBase* Projectile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterPhysicProjectileBehaviour.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Projectile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WeaponSystem_OnProjectileSpawned__DelegateSignature_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WeaponSystem_eventOnProjectileSpawned_Parms, Projectile), Z_Construct_UClass_AProjectileBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeaponSystem_OnProjectileSpawned__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystem_OnProjectileSpawned__DelegateSignature_Statics::NewProp_Projectile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnProjectileSpawned__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnProjectileSpawned__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnProjectileSpawned__DelegateSignature", Z_Construct_UDelegateFunction_WeaponSystem_OnProjectileSpawned__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnProjectileSpawned__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WeaponSystem_OnProjectileSpawned__DelegateSignature_Statics::_Script_WeaponSystem_eventOnProjectileSpawned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnProjectileSpawned__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeaponSystem_OnProjectileSpawned__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_WeaponSystem_OnProjectileSpawned__DelegateSignature_Statics::_Script_WeaponSystem_eventOnProjectileSpawned_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnProjectileSpawned__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnProjectileSpawned__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnProjectileSpawned_DelegateWrapper(const FMulticastScriptDelegate& OnProjectileSpawned, AProjectileBase* Projectile)
{
	struct _Script_WeaponSystem_eventOnProjectileSpawned_Parms
	{
		AProjectileBase* Projectile;
	};
	_Script_WeaponSystem_eventOnProjectileSpawned_Parms Parms;
	Parms.Projectile=Projectile;
	OnProjectileSpawned.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnProjectileSpawned ****************************************************

// ********** Begin Class UShooterPhysicProjectileBehaviour Function SetProjectilesPool ************
struct Z_Construct_UFunction_UShooterPhysicProjectileBehaviour_SetProjectilesPool_Statics
{
	struct ShooterPhysicProjectileBehaviour_eventSetProjectilesPool_Parms
	{
		FGameplayTag InProjectilesPoolTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterPhysicProjectileBehaviour.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InProjectilesPoolTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InProjectilesPoolTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShooterPhysicProjectileBehaviour_SetProjectilesPool_Statics::NewProp_InProjectilesPoolTag = { "InProjectilesPoolTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterPhysicProjectileBehaviour_eventSetProjectilesPool_Parms, InProjectilesPoolTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InProjectilesPoolTag_MetaData), NewProp_InProjectilesPoolTag_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterPhysicProjectileBehaviour_SetProjectilesPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterPhysicProjectileBehaviour_SetProjectilesPool_Statics::NewProp_InProjectilesPoolTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterPhysicProjectileBehaviour_SetProjectilesPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterPhysicProjectileBehaviour_SetProjectilesPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterPhysicProjectileBehaviour, nullptr, "SetProjectilesPool", Z_Construct_UFunction_UShooterPhysicProjectileBehaviour_SetProjectilesPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterPhysicProjectileBehaviour_SetProjectilesPool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterPhysicProjectileBehaviour_SetProjectilesPool_Statics::ShooterPhysicProjectileBehaviour_eventSetProjectilesPool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterPhysicProjectileBehaviour_SetProjectilesPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterPhysicProjectileBehaviour_SetProjectilesPool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterPhysicProjectileBehaviour_SetProjectilesPool_Statics::ShooterPhysicProjectileBehaviour_eventSetProjectilesPool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterPhysicProjectileBehaviour_SetProjectilesPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterPhysicProjectileBehaviour_SetProjectilesPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterPhysicProjectileBehaviour::execSetProjectilesPool)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_InProjectilesPoolTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetProjectilesPool(Z_Param_InProjectilesPoolTag);
	P_NATIVE_END;
}
// ********** End Class UShooterPhysicProjectileBehaviour Function SetProjectilesPool **************

// ********** Begin Class UShooterPhysicProjectileBehaviour ****************************************
void UShooterPhysicProjectileBehaviour::StaticRegisterNativesUShooterPhysicProjectileBehaviour()
{
	UClass* Class = UShooterPhysicProjectileBehaviour::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetProjectilesPool", &UShooterPhysicProjectileBehaviour::execSetProjectilesPool },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UShooterPhysicProjectileBehaviour;
UClass* UShooterPhysicProjectileBehaviour::GetPrivateStaticClass()
{
	using TClass = UShooterPhysicProjectileBehaviour;
	if (!Z_Registration_Info_UClass_UShooterPhysicProjectileBehaviour.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ShooterPhysicProjectileBehaviour"),
			Z_Registration_Info_UClass_UShooterPhysicProjectileBehaviour.InnerSingleton,
			StaticRegisterNativesUShooterPhysicProjectileBehaviour,
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
	return Z_Registration_Info_UClass_UShooterPhysicProjectileBehaviour.InnerSingleton;
}
UClass* Z_Construct_UClass_UShooterPhysicProjectileBehaviour_NoRegister()
{
	return UShooterPhysicProjectileBehaviour::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UShooterPhysicProjectileBehaviour_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Shooter/Behaviours/ShooterPhysicProjectileBehaviour.h" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterPhysicProjectileBehaviour.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnProjectileSpawned_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterPhysicProjectileBehaviour.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectilesPoolTag_MetaData[] = {
		{ "Category", "Shooter|Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -- Projectiles --\n" },
#endif
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterPhysicProjectileBehaviour.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-- Projectiles --" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpeed_MetaData[] = {
		{ "Category", "Shooter|Projectile" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterPhysicProjectileBehaviour.h" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectilePool_MetaData[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterPhysicProjectileBehaviour.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProjectileSpawned;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectilesPoolTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectilePool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UShooterPhysicProjectileBehaviour_SetProjectilesPool, "SetProjectilesPool" }, // 483973384
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterPhysicProjectileBehaviour>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShooterPhysicProjectileBehaviour_Statics::NewProp_OnProjectileSpawned = { "OnProjectileSpawned", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterPhysicProjectileBehaviour, OnProjectileSpawned), Z_Construct_UDelegateFunction_WeaponSystem_OnProjectileSpawned__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnProjectileSpawned_MetaData), NewProp_OnProjectileSpawned_MetaData) }; // 820248004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShooterPhysicProjectileBehaviour_Statics::NewProp_ProjectilesPoolTag = { "ProjectilesPoolTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterPhysicProjectileBehaviour, ProjectilesPoolTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectilesPoolTag_MetaData), NewProp_ProjectilesPoolTag_MetaData) }; // 133831994
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShooterPhysicProjectileBehaviour_Statics::NewProp_ProjectileSpeed = { "ProjectileSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterPhysicProjectileBehaviour, ProjectileSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileSpeed_MetaData), NewProp_ProjectileSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShooterPhysicProjectileBehaviour_Statics::NewProp_ProjectilePool = { "ProjectilePool", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterPhysicProjectileBehaviour, ProjectilePool), Z_Construct_UClass_UActorPool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectilePool_MetaData), NewProp_ProjectilePool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShooterPhysicProjectileBehaviour_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterPhysicProjectileBehaviour_Statics::NewProp_OnProjectileSpawned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterPhysicProjectileBehaviour_Statics::NewProp_ProjectilesPoolTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterPhysicProjectileBehaviour_Statics::NewProp_ProjectileSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterPhysicProjectileBehaviour_Statics::NewProp_ProjectilePool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterPhysicProjectileBehaviour_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UShooterPhysicProjectileBehaviour_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UShooterBehaviourBase,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterPhysicProjectileBehaviour_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UShooterPhysicProjectileBehaviour_Statics::ClassParams = {
	&UShooterPhysicProjectileBehaviour::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UShooterPhysicProjectileBehaviour_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UShooterPhysicProjectileBehaviour_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterPhysicProjectileBehaviour_Statics::Class_MetaDataParams), Z_Construct_UClass_UShooterPhysicProjectileBehaviour_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UShooterPhysicProjectileBehaviour()
{
	if (!Z_Registration_Info_UClass_UShooterPhysicProjectileBehaviour.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShooterPhysicProjectileBehaviour.OuterSingleton, Z_Construct_UClass_UShooterPhysicProjectileBehaviour_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UShooterPhysicProjectileBehaviour.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterPhysicProjectileBehaviour);
UShooterPhysicProjectileBehaviour::~UShooterPhysicProjectileBehaviour() {}
// ********** End Class UShooterPhysicProjectileBehaviour ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterPhysicProjectileBehaviour_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UShooterPhysicProjectileBehaviour, UShooterPhysicProjectileBehaviour::StaticClass, TEXT("UShooterPhysicProjectileBehaviour"), &Z_Registration_Info_UClass_UShooterPhysicProjectileBehaviour, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShooterPhysicProjectileBehaviour), 286891789U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterPhysicProjectileBehaviour_h__Script_WeaponSystem_3183511619(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterPhysicProjectileBehaviour_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterPhysicProjectileBehaviour_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
