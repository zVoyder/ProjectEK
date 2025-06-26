// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weapons/WeaponMelee.h"
#include "Weapons/Data/WeaponMeleeData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeaponMelee() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AWeaponBase();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AWeaponMelee();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AWeaponMelee_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UMeleeMontagesManager_NoRegister();
WEAPONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponMeleeData();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AWeaponMelee Function DisableDamageHitbox ********************************
struct Z_Construct_UFunction_AWeaponMelee_DisableDamageHitbox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponMelee.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponMelee_DisableDamageHitbox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponMelee, nullptr, "DisableDamageHitbox", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponMelee_DisableDamageHitbox_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponMelee_DisableDamageHitbox_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWeaponMelee_DisableDamageHitbox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponMelee_DisableDamageHitbox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponMelee::execDisableDamageHitbox)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableDamageHitbox();
	P_NATIVE_END;
}
// ********** End Class AWeaponMelee Function DisableDamageHitbox **********************************

// ********** Begin Class AWeaponMelee Function EnableDamageHitbox *********************************
struct Z_Construct_UFunction_AWeaponMelee_EnableDamageHitbox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponMelee.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponMelee_EnableDamageHitbox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponMelee, nullptr, "EnableDamageHitbox", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponMelee_EnableDamageHitbox_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponMelee_EnableDamageHitbox_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWeaponMelee_EnableDamageHitbox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponMelee_EnableDamageHitbox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponMelee::execEnableDamageHitbox)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableDamageHitbox();
	P_NATIVE_END;
}
// ********** End Class AWeaponMelee Function EnableDamageHitbox ***********************************

// ********** Begin Class AWeaponMelee *************************************************************
void AWeaponMelee::StaticRegisterNativesAWeaponMelee()
{
	UClass* Class = AWeaponMelee::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DisableDamageHitbox", &AWeaponMelee::execDisableDamageHitbox },
		{ "EnableDamageHitbox", &AWeaponMelee::execEnableDamageHitbox },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWeaponMelee;
UClass* AWeaponMelee::GetPrivateStaticClass()
{
	using TClass = AWeaponMelee;
	if (!Z_Registration_Info_UClass_AWeaponMelee.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WeaponMelee"),
			Z_Registration_Info_UClass_AWeaponMelee.InnerSingleton,
			StaticRegisterNativesAWeaponMelee,
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
	return Z_Registration_Info_UClass_AWeaponMelee.InnerSingleton;
}
UClass* Z_Construct_UClass_AWeaponMelee_NoRegister()
{
	return AWeaponMelee::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWeaponMelee_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/WeaponMelee.h" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponMelee.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMeleeData_MetaData[] = {
		{ "Category", "Weapon|Data" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponMelee.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeMontagesManager_MetaData[] = {
		{ "Category", "WeaponMelee" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponMelee.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageHitboxPreview_MetaData[] = {
		{ "Category", "WeaponMelee" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponMelee.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[] = {
		{ "Category", "Weapon|Debug" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponMelee.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsCurrentlyInHitbox_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponMelee.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponMeleeData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeMontagesManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageHitboxPreview;
#if WITH_EDITORONLY_DATA
	static void NewProp_bDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsCurrentlyInHitbox_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ActorsCurrentlyInHitbox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponMelee_DisableDamageHitbox, "DisableDamageHitbox" }, // 594562362
		{ &Z_Construct_UFunction_AWeaponMelee_EnableDamageHitbox, "EnableDamageHitbox" }, // 332504165
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponMelee>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponMelee_Statics::NewProp_WeaponMeleeData = { "WeaponMeleeData", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponMelee, WeaponMeleeData), Z_Construct_UScriptStruct_FWeaponMeleeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMeleeData_MetaData), NewProp_WeaponMeleeData_MetaData) }; // 3793939027
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponMelee_Statics::NewProp_MeleeMontagesManager = { "MeleeMontagesManager", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponMelee, MeleeMontagesManager), Z_Construct_UClass_UMeleeMontagesManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeMontagesManager_MetaData), NewProp_MeleeMontagesManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponMelee_Statics::NewProp_DamageHitboxPreview = { "DamageHitboxPreview", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponMelee, DamageHitboxPreview), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageHitboxPreview_MetaData), NewProp_DamageHitboxPreview_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_AWeaponMelee_Statics::NewProp_bDebug_SetBit(void* Obj)
{
	((AWeaponMelee*)Obj)->bDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponMelee_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000800010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeaponMelee), &Z_Construct_UClass_AWeaponMelee_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebug_MetaData), NewProp_bDebug_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponMelee_Statics::NewProp_ActorsCurrentlyInHitbox_ElementProp = { "ActorsCurrentlyInHitbox", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_AWeaponMelee_Statics::NewProp_ActorsCurrentlyInHitbox = { "ActorsCurrentlyInHitbox", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponMelee, ActorsCurrentlyInHitbox), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsCurrentlyInHitbox_MetaData), NewProp_ActorsCurrentlyInHitbox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponMelee_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponMelee_Statics::NewProp_WeaponMeleeData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponMelee_Statics::NewProp_MeleeMontagesManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponMelee_Statics::NewProp_DamageHitboxPreview,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponMelee_Statics::NewProp_bDebug,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponMelee_Statics::NewProp_ActorsCurrentlyInHitbox_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponMelee_Statics::NewProp_ActorsCurrentlyInHitbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponMelee_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeaponMelee_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeaponBase,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponMelee_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponMelee_Statics::ClassParams = {
	&AWeaponMelee::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWeaponMelee_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponMelee_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponMelee_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeaponMelee_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeaponMelee()
{
	if (!Z_Registration_Info_UClass_AWeaponMelee.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponMelee.OuterSingleton, Z_Construct_UClass_AWeaponMelee_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeaponMelee.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponMelee);
AWeaponMelee::~AWeaponMelee() {}
// ********** End Class AWeaponMelee ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponMelee_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponMelee, AWeaponMelee::StaticClass, TEXT("AWeaponMelee"), &Z_Registration_Info_UClass_AWeaponMelee, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponMelee), 3618031635U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponMelee_h__Script_WeaponSystem_1297062882(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponMelee_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponMelee_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
