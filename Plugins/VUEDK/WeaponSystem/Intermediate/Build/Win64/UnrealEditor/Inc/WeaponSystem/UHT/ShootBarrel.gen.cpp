// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/ShootBarrel.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShootBarrel() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShootBarrel();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShootBarrel_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShootPoint_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UShootBarrel Function GetShootPointsChildren *****************************
struct Z_Construct_UFunction_UShootBarrel_GetShootPointsChildren_Statics
{
	struct ShootBarrel_eventGetShootPointsChildren_Parms
	{
		TArray<UShootPoint*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/ShootBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShootBarrel_GetShootPointsChildren_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UShootPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UShootBarrel_GetShootPointsChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShootBarrel_eventGetShootPointsChildren_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShootBarrel_GetShootPointsChildren_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShootBarrel_GetShootPointsChildren_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShootBarrel_GetShootPointsChildren_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShootBarrel_GetShootPointsChildren_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShootBarrel_GetShootPointsChildren_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShootBarrel, nullptr, "GetShootPointsChildren", Z_Construct_UFunction_UShootBarrel_GetShootPointsChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShootBarrel_GetShootPointsChildren_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShootBarrel_GetShootPointsChildren_Statics::ShootBarrel_eventGetShootPointsChildren_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShootBarrel_GetShootPointsChildren_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShootBarrel_GetShootPointsChildren_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShootBarrel_GetShootPointsChildren_Statics::ShootBarrel_eventGetShootPointsChildren_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShootBarrel_GetShootPointsChildren()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShootBarrel_GetShootPointsChildren_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShootBarrel::execGetShootPointsChildren)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UShootPoint*>*)Z_Param__Result=P_THIS->GetShootPointsChildren();
	P_NATIVE_END;
}
// ********** End Class UShootBarrel Function GetShootPointsChildren *******************************

// ********** Begin Class UShootBarrel *************************************************************
void UShootBarrel::StaticRegisterNativesUShootBarrel()
{
	UClass* Class = UShootBarrel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetShootPointsChildren", &UShootBarrel::execGetShootPointsChildren },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UShootBarrel;
UClass* UShootBarrel::GetPrivateStaticClass()
{
	using TClass = UShootBarrel;
	if (!Z_Registration_Info_UClass_UShootBarrel.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ShootBarrel"),
			Z_Registration_Info_UClass_UShootBarrel.InnerSingleton,
			StaticRegisterNativesUShootBarrel,
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
	return Z_Registration_Info_UClass_UShootBarrel.InnerSingleton;
}
UClass* Z_Construct_UClass_UShootBarrel_NoRegister()
{
	return UShootBarrel::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UShootBarrel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Shooter/ShootBarrel.h" },
		{ "ModuleRelativePath", "Public/Shooter/ShootBarrel.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UShootBarrel_GetShootPointsChildren, "GetShootPointsChildren" }, // 363697473
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShootBarrel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UShootBarrel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShootBarrel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UShootBarrel_Statics::ClassParams = {
	&UShootBarrel::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShootBarrel_Statics::Class_MetaDataParams), Z_Construct_UClass_UShootBarrel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UShootBarrel()
{
	if (!Z_Registration_Info_UClass_UShootBarrel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShootBarrel.OuterSingleton, Z_Construct_UClass_UShootBarrel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UShootBarrel.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UShootBarrel);
UShootBarrel::~UShootBarrel() {}
// ********** End Class UShootBarrel ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_ShootBarrel_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UShootBarrel, UShootBarrel::StaticClass, TEXT("UShootBarrel"), &Z_Registration_Info_UClass_UShootBarrel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShootBarrel), 645337352U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_ShootBarrel_h__Script_WeaponSystem_2537626938(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_ShootBarrel_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_ShootBarrel_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
