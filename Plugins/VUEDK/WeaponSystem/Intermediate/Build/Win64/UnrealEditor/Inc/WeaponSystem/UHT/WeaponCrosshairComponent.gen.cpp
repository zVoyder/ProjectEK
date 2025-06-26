// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponCrosshair/WeaponCrosshairComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeaponCrosshairComponent() {}

// ********** Begin Cross Module References ********************************************************
CROSSHAIRSYSTEM_API UClass* Z_Construct_UClass_UCrosshairComponent();
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponCrosshairComponent();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponCrosshairComponent_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWeaponCrosshairComponent Function OnWeaponEquipped **********************
static FName NAME_UWeaponCrosshairComponent_OnWeaponEquipped = FName(TEXT("OnWeaponEquipped"));
void UWeaponCrosshairComponent::OnWeaponEquipped()
{
	UFunction* Func = FindFunctionChecked(NAME_UWeaponCrosshairComponent_OnWeaponEquipped);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnWeaponEquipped_Implementation();
	}
}
struct Z_Construct_UFunction_UWeaponCrosshairComponent_OnWeaponEquipped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponCrosshair/WeaponCrosshairComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponCrosshairComponent_OnWeaponEquipped_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponCrosshairComponent, nullptr, "OnWeaponEquipped", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponCrosshairComponent_OnWeaponEquipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponCrosshairComponent_OnWeaponEquipped_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UWeaponCrosshairComponent_OnWeaponEquipped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponCrosshairComponent_OnWeaponEquipped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponCrosshairComponent::execOnWeaponEquipped)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWeaponEquipped_Implementation();
	P_NATIVE_END;
}
// ********** End Class UWeaponCrosshairComponent Function OnWeaponEquipped ************************

// ********** Begin Class UWeaponCrosshairComponent Function OnWeaponUnequipped ********************
static FName NAME_UWeaponCrosshairComponent_OnWeaponUnequipped = FName(TEXT("OnWeaponUnequipped"));
void UWeaponCrosshairComponent::OnWeaponUnequipped()
{
	UFunction* Func = FindFunctionChecked(NAME_UWeaponCrosshairComponent_OnWeaponUnequipped);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnWeaponUnequipped_Implementation();
	}
}
struct Z_Construct_UFunction_UWeaponCrosshairComponent_OnWeaponUnequipped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponCrosshair/WeaponCrosshairComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponCrosshairComponent_OnWeaponUnequipped_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponCrosshairComponent, nullptr, "OnWeaponUnequipped", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponCrosshairComponent_OnWeaponUnequipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponCrosshairComponent_OnWeaponUnequipped_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UWeaponCrosshairComponent_OnWeaponUnequipped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponCrosshairComponent_OnWeaponUnequipped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponCrosshairComponent::execOnWeaponUnequipped)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWeaponUnequipped_Implementation();
	P_NATIVE_END;
}
// ********** End Class UWeaponCrosshairComponent Function OnWeaponUnequipped **********************

// ********** Begin Class UWeaponCrosshairComponent ************************************************
void UWeaponCrosshairComponent::StaticRegisterNativesUWeaponCrosshairComponent()
{
	UClass* Class = UWeaponCrosshairComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnWeaponEquipped", &UWeaponCrosshairComponent::execOnWeaponEquipped },
		{ "OnWeaponUnequipped", &UWeaponCrosshairComponent::execOnWeaponUnequipped },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWeaponCrosshairComponent;
UClass* UWeaponCrosshairComponent::GetPrivateStaticClass()
{
	using TClass = UWeaponCrosshairComponent;
	if (!Z_Registration_Info_UClass_UWeaponCrosshairComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WeaponCrosshairComponent"),
			Z_Registration_Info_UClass_UWeaponCrosshairComponent.InnerSingleton,
			StaticRegisterNativesUWeaponCrosshairComponent,
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
	return Z_Registration_Info_UClass_UWeaponCrosshairComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UWeaponCrosshairComponent_NoRegister()
{
	return UWeaponCrosshairComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWeaponCrosshairComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WeaponCrosshair/WeaponCrosshairComponent.h" },
		{ "ModuleRelativePath", "Public/WeaponCrosshair/WeaponCrosshairComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponCrosshair/WeaponCrosshairComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponCrosshairComponent_OnWeaponEquipped, "OnWeaponEquipped" }, // 4276214051
		{ &Z_Construct_UFunction_UWeaponCrosshairComponent_OnWeaponUnequipped, "OnWeaponUnequipped" }, // 4034617806
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponCrosshairComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponCrosshairComponent_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponCrosshairComponent, Weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapon_MetaData), NewProp_Weapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponCrosshairComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponCrosshairComponent_Statics::NewProp_Weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponCrosshairComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeaponCrosshairComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCrosshairComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponCrosshairComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponCrosshairComponent_Statics::ClassParams = {
	&UWeaponCrosshairComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWeaponCrosshairComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponCrosshairComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponCrosshairComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponCrosshairComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponCrosshairComponent()
{
	if (!Z_Registration_Info_UClass_UWeaponCrosshairComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponCrosshairComponent.OuterSingleton, Z_Construct_UClass_UWeaponCrosshairComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponCrosshairComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponCrosshairComponent);
UWeaponCrosshairComponent::~UWeaponCrosshairComponent() {}
// ********** End Class UWeaponCrosshairComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_WeaponCrosshairComponent_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponCrosshairComponent, UWeaponCrosshairComponent::StaticClass, TEXT("UWeaponCrosshairComponent"), &Z_Registration_Info_UClass_UWeaponCrosshairComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponCrosshairComponent), 1729498872U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_WeaponCrosshairComponent_h__Script_WeaponSystem_2359388469(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_WeaponCrosshairComponent_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_WeaponCrosshairComponent_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
