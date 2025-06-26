// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Montages/FirearmMontagesManager.h"
#include "Montages/Data/WeaponMontageData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFirearmMontagesManager() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AWeaponFirearm_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UFirearmMontagesManager();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UFirearmMontagesManager_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponMontagesManagerBase();
WEAPONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponMontageData();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFirearmMontagesManager Function IsAnimFailShooting **********************
struct Z_Construct_UFunction_UFirearmMontagesManager_IsAnimFailShooting_Statics
{
	struct FirearmMontagesManager_eventIsAnimFailShooting_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Montages/FirearmMontagesManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFirearmMontagesManager_IsAnimFailShooting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FirearmMontagesManager_eventIsAnimFailShooting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirearmMontagesManager_IsAnimFailShooting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FirearmMontagesManager_eventIsAnimFailShooting_Parms), &Z_Construct_UFunction_UFirearmMontagesManager_IsAnimFailShooting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirearmMontagesManager_IsAnimFailShooting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirearmMontagesManager_IsAnimFailShooting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFirearmMontagesManager_IsAnimFailShooting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirearmMontagesManager_IsAnimFailShooting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFirearmMontagesManager, nullptr, "IsAnimFailShooting", Z_Construct_UFunction_UFirearmMontagesManager_IsAnimFailShooting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirearmMontagesManager_IsAnimFailShooting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFirearmMontagesManager_IsAnimFailShooting_Statics::FirearmMontagesManager_eventIsAnimFailShooting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFirearmMontagesManager_IsAnimFailShooting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFirearmMontagesManager_IsAnimFailShooting_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFirearmMontagesManager_IsAnimFailShooting_Statics::FirearmMontagesManager_eventIsAnimFailShooting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFirearmMontagesManager_IsAnimFailShooting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirearmMontagesManager_IsAnimFailShooting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFirearmMontagesManager::execIsAnimFailShooting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAnimFailShooting();
	P_NATIVE_END;
}
// ********** End Class UFirearmMontagesManager Function IsAnimFailShooting ************************

// ********** Begin Class UFirearmMontagesManager Function IsAnimShooting **************************
struct Z_Construct_UFunction_UFirearmMontagesManager_IsAnimShooting_Statics
{
	struct FirearmMontagesManager_eventIsAnimShooting_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Montages/FirearmMontagesManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFirearmMontagesManager_IsAnimShooting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FirearmMontagesManager_eventIsAnimShooting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirearmMontagesManager_IsAnimShooting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FirearmMontagesManager_eventIsAnimShooting_Parms), &Z_Construct_UFunction_UFirearmMontagesManager_IsAnimShooting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirearmMontagesManager_IsAnimShooting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirearmMontagesManager_IsAnimShooting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFirearmMontagesManager_IsAnimShooting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirearmMontagesManager_IsAnimShooting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFirearmMontagesManager, nullptr, "IsAnimShooting", Z_Construct_UFunction_UFirearmMontagesManager_IsAnimShooting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirearmMontagesManager_IsAnimShooting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFirearmMontagesManager_IsAnimShooting_Statics::FirearmMontagesManager_eventIsAnimShooting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFirearmMontagesManager_IsAnimShooting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFirearmMontagesManager_IsAnimShooting_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFirearmMontagesManager_IsAnimShooting_Statics::FirearmMontagesManager_eventIsAnimShooting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFirearmMontagesManager_IsAnimShooting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirearmMontagesManager_IsAnimShooting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFirearmMontagesManager::execIsAnimShooting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAnimShooting();
	P_NATIVE_END;
}
// ********** End Class UFirearmMontagesManager Function IsAnimShooting ****************************

// ********** Begin Class UFirearmMontagesManager **************************************************
void UFirearmMontagesManager::StaticRegisterNativesUFirearmMontagesManager()
{
	UClass* Class = UFirearmMontagesManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsAnimFailShooting", &UFirearmMontagesManager::execIsAnimFailShooting },
		{ "IsAnimShooting", &UFirearmMontagesManager::execIsAnimShooting },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFirearmMontagesManager;
UClass* UFirearmMontagesManager::GetPrivateStaticClass()
{
	using TClass = UFirearmMontagesManager;
	if (!Z_Registration_Info_UClass_UFirearmMontagesManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FirearmMontagesManager"),
			Z_Registration_Info_UClass_UFirearmMontagesManager.InnerSingleton,
			StaticRegisterNativesUFirearmMontagesManager,
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
	return Z_Registration_Info_UClass_UFirearmMontagesManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UFirearmMontagesManager_NoRegister()
{
	return UFirearmMontagesManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFirearmMontagesManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Montages/FirearmMontagesManager.h" },
		{ "ModuleRelativePath", "Public/Montages/FirearmMontagesManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootMontage_MetaData[] = {
		{ "Category", "Weapon|Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -- Montages --\n" },
#endif
		{ "ModuleRelativePath", "Public/Montages/FirearmMontagesManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-- Montages --" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailShootMontage_MetaData[] = {
		{ "Category", "Weapon|Actions" },
		{ "ModuleRelativePath", "Public/Montages/FirearmMontagesManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponFirearm_MetaData[] = {
		{ "ModuleRelativePath", "Public/Montages/FirearmMontagesManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShootMontage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailShootMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponFirearm;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirearmMontagesManager_IsAnimFailShooting, "IsAnimFailShooting" }, // 1285419966
		{ &Z_Construct_UFunction_UFirearmMontagesManager_IsAnimShooting, "IsAnimShooting" }, // 2160317119
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirearmMontagesManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirearmMontagesManager_Statics::NewProp_ShootMontage = { "ShootMontage", nullptr, (EPropertyFlags)0x0020088000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirearmMontagesManager, ShootMontage), Z_Construct_UScriptStruct_FWeaponMontageData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootMontage_MetaData), NewProp_ShootMontage_MetaData) }; // 397967327
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFirearmMontagesManager_Statics::NewProp_FailShootMontage = { "FailShootMontage", nullptr, (EPropertyFlags)0x0020088000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirearmMontagesManager, FailShootMontage), Z_Construct_UScriptStruct_FWeaponMontageData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailShootMontage_MetaData), NewProp_FailShootMontage_MetaData) }; // 397967327
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirearmMontagesManager_Statics::NewProp_WeaponFirearm = { "WeaponFirearm", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirearmMontagesManager, WeaponFirearm), Z_Construct_UClass_AWeaponFirearm_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponFirearm_MetaData), NewProp_WeaponFirearm_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFirearmMontagesManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirearmMontagesManager_Statics::NewProp_ShootMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirearmMontagesManager_Statics::NewProp_FailShootMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirearmMontagesManager_Statics::NewProp_WeaponFirearm,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFirearmMontagesManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFirearmMontagesManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWeaponMontagesManagerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFirearmMontagesManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFirearmMontagesManager_Statics::ClassParams = {
	&UFirearmMontagesManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFirearmMontagesManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFirearmMontagesManager_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFirearmMontagesManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UFirearmMontagesManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFirearmMontagesManager()
{
	if (!Z_Registration_Info_UClass_UFirearmMontagesManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFirearmMontagesManager.OuterSingleton, Z_Construct_UClass_UFirearmMontagesManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFirearmMontagesManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFirearmMontagesManager);
UFirearmMontagesManager::~UFirearmMontagesManager() {}
// ********** End Class UFirearmMontagesManager ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_FirearmMontagesManager_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFirearmMontagesManager, UFirearmMontagesManager::StaticClass, TEXT("UFirearmMontagesManager"), &Z_Registration_Info_UClass_UFirearmMontagesManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFirearmMontagesManager), 2381334473U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_FirearmMontagesManager_h__Script_WeaponSystem_1148209003(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_FirearmMontagesManager_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_FirearmMontagesManager_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
