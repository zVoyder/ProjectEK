// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Montages/Notifies/ReloadInsertAmmoNotify.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeReloadInsertAmmoNotify() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AWeaponFirearm_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UReloadInsertAmmoNotify();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UReloadInsertAmmoNotify_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UReloadInsertAmmoNotify Function Check ***********************************
struct Z_Construct_UFunction_UReloadInsertAmmoNotify_Check_Statics
{
	struct ReloadInsertAmmoNotify_eventCheck_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Montages/Notifies/ReloadInsertAmmoNotify.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UReloadInsertAmmoNotify_Check_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ReloadInsertAmmoNotify_eventCheck_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReloadInsertAmmoNotify_Check_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReloadInsertAmmoNotify_eventCheck_Parms), &Z_Construct_UFunction_UReloadInsertAmmoNotify_Check_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReloadInsertAmmoNotify_Check_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReloadInsertAmmoNotify_Check_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReloadInsertAmmoNotify_Check_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReloadInsertAmmoNotify_Check_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReloadInsertAmmoNotify, nullptr, "Check", Z_Construct_UFunction_UReloadInsertAmmoNotify_Check_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReloadInsertAmmoNotify_Check_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReloadInsertAmmoNotify_Check_Statics::ReloadInsertAmmoNotify_eventCheck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReloadInsertAmmoNotify_Check_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReloadInsertAmmoNotify_Check_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReloadInsertAmmoNotify_Check_Statics::ReloadInsertAmmoNotify_eventCheck_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReloadInsertAmmoNotify_Check()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReloadInsertAmmoNotify_Check_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReloadInsertAmmoNotify::execCheck)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Check();
	P_NATIVE_END;
}
// ********** End Class UReloadInsertAmmoNotify Function Check *************************************

// ********** Begin Class UReloadInsertAmmoNotify Function GetWeaponFirearm ************************
struct Z_Construct_UFunction_UReloadInsertAmmoNotify_GetWeaponFirearm_Statics
{
	struct ReloadInsertAmmoNotify_eventGetWeaponFirearm_Parms
	{
		AWeaponFirearm* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Montages/Notifies/ReloadInsertAmmoNotify.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReloadInsertAmmoNotify_GetWeaponFirearm_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReloadInsertAmmoNotify_eventGetWeaponFirearm_Parms, ReturnValue), Z_Construct_UClass_AWeaponFirearm_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReloadInsertAmmoNotify_GetWeaponFirearm_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReloadInsertAmmoNotify_GetWeaponFirearm_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReloadInsertAmmoNotify_GetWeaponFirearm_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReloadInsertAmmoNotify_GetWeaponFirearm_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReloadInsertAmmoNotify, nullptr, "GetWeaponFirearm", Z_Construct_UFunction_UReloadInsertAmmoNotify_GetWeaponFirearm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReloadInsertAmmoNotify_GetWeaponFirearm_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReloadInsertAmmoNotify_GetWeaponFirearm_Statics::ReloadInsertAmmoNotify_eventGetWeaponFirearm_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReloadInsertAmmoNotify_GetWeaponFirearm_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReloadInsertAmmoNotify_GetWeaponFirearm_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReloadInsertAmmoNotify_GetWeaponFirearm_Statics::ReloadInsertAmmoNotify_eventGetWeaponFirearm_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReloadInsertAmmoNotify_GetWeaponFirearm()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReloadInsertAmmoNotify_GetWeaponFirearm_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReloadInsertAmmoNotify::execGetWeaponFirearm)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AWeaponFirearm**)Z_Param__Result=P_THIS->GetWeaponFirearm();
	P_NATIVE_END;
}
// ********** End Class UReloadInsertAmmoNotify Function GetWeaponFirearm **************************

// ********** Begin Class UReloadInsertAmmoNotify **************************************************
void UReloadInsertAmmoNotify::StaticRegisterNativesUReloadInsertAmmoNotify()
{
	UClass* Class = UReloadInsertAmmoNotify::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Check", &UReloadInsertAmmoNotify::execCheck },
		{ "GetWeaponFirearm", &UReloadInsertAmmoNotify::execGetWeaponFirearm },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UReloadInsertAmmoNotify;
UClass* UReloadInsertAmmoNotify::GetPrivateStaticClass()
{
	using TClass = UReloadInsertAmmoNotify;
	if (!Z_Registration_Info_UClass_UReloadInsertAmmoNotify.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ReloadInsertAmmoNotify"),
			Z_Registration_Info_UClass_UReloadInsertAmmoNotify.InnerSingleton,
			StaticRegisterNativesUReloadInsertAmmoNotify,
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
	return Z_Registration_Info_UClass_UReloadInsertAmmoNotify.InnerSingleton;
}
UClass* Z_Construct_UClass_UReloadInsertAmmoNotify_NoRegister()
{
	return UReloadInsertAmmoNotify::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UReloadInsertAmmoNotify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Montages/Notifies/ReloadInsertAmmoNotify.h" },
		{ "ModuleRelativePath", "Public/Montages/Notifies/ReloadInsertAmmoNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Montages/Notifies/ReloadInsertAmmoNotify.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UReloadInsertAmmoNotify_Check, "Check" }, // 3936361730
		{ &Z_Construct_UFunction_UReloadInsertAmmoNotify_GetWeaponFirearm, "GetWeaponFirearm" }, // 3251701646
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReloadInsertAmmoNotify>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReloadInsertAmmoNotify_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0040000000000010, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReloadInsertAmmoNotify, Weapon), Z_Construct_UClass_AWeaponFirearm_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapon_MetaData), NewProp_Weapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReloadInsertAmmoNotify_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReloadInsertAmmoNotify_Statics::NewProp_Weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReloadInsertAmmoNotify_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UReloadInsertAmmoNotify_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReloadInsertAmmoNotify_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReloadInsertAmmoNotify_Statics::ClassParams = {
	&UReloadInsertAmmoNotify::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UReloadInsertAmmoNotify_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UReloadInsertAmmoNotify_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReloadInsertAmmoNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_UReloadInsertAmmoNotify_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReloadInsertAmmoNotify()
{
	if (!Z_Registration_Info_UClass_UReloadInsertAmmoNotify.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReloadInsertAmmoNotify.OuterSingleton, Z_Construct_UClass_UReloadInsertAmmoNotify_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReloadInsertAmmoNotify.OuterSingleton;
}
UReloadInsertAmmoNotify::UReloadInsertAmmoNotify(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReloadInsertAmmoNotify);
UReloadInsertAmmoNotify::~UReloadInsertAmmoNotify() {}
// ********** End Class UReloadInsertAmmoNotify ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Notifies_ReloadInsertAmmoNotify_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReloadInsertAmmoNotify, UReloadInsertAmmoNotify::StaticClass, TEXT("UReloadInsertAmmoNotify"), &Z_Registration_Info_UClass_UReloadInsertAmmoNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReloadInsertAmmoNotify), 635687101U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Notifies_ReloadInsertAmmoNotify_h__Script_WeaponSystem_2917394404(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Notifies_ReloadInsertAmmoNotify_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Notifies_ReloadInsertAmmoNotify_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
