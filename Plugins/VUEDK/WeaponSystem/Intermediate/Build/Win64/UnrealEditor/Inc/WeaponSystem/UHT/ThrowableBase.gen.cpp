// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Thrower/Throwables/ThrowableBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeThrowableBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
OBJECTPOOL_API UClass* Z_Construct_UClass_APooledActorBase();
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AThrowableBase();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AThrowableBase_NoRegister();
WEAPONSYSTEM_API UEnum* Z_Construct_UEnum_WeaponSystem_EThrowableSpinAxis();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AThrowableBase Function EndThrowableLifeSpan *****************************
struct Z_Construct_UFunction_AThrowableBase_EndThrowableLifeSpan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Thrower/Throwables/ThrowableBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowableBase_EndThrowableLifeSpan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AThrowableBase, nullptr, "EndThrowableLifeSpan", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableBase_EndThrowableLifeSpan_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThrowableBase_EndThrowableLifeSpan_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AThrowableBase_EndThrowableLifeSpan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThrowableBase_EndThrowableLifeSpan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AThrowableBase::execEndThrowableLifeSpan)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndThrowableLifeSpan();
	P_NATIVE_END;
}
// ********** End Class AThrowableBase Function EndThrowableLifeSpan *******************************

// ********** Begin Class AThrowableBase Function GetCustomAxisSpin ********************************
struct ThrowableBase_eventGetCustomAxisSpin_Parms
{
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	ThrowableBase_eventGetCustomAxisSpin_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static FName NAME_AThrowableBase_GetCustomAxisSpin = FName(TEXT("GetCustomAxisSpin"));
FVector AThrowableBase::GetCustomAxisSpin() const
{
	UFunction* Func = FindFunctionChecked(NAME_AThrowableBase_GetCustomAxisSpin);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ThrowableBase_eventGetCustomAxisSpin_Parms Parms;
		const_cast<AThrowableBase*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<AThrowableBase*>(this)->GetCustomAxisSpin_Implementation();
	}
}
struct Z_Construct_UFunction_AThrowableBase_GetCustomAxisSpin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Thrower/Throwables/ThrowableBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AThrowableBase_GetCustomAxisSpin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThrowableBase_eventGetCustomAxisSpin_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThrowableBase_GetCustomAxisSpin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowableBase_GetCustomAxisSpin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableBase_GetCustomAxisSpin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowableBase_GetCustomAxisSpin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AThrowableBase, nullptr, "GetCustomAxisSpin", Z_Construct_UFunction_AThrowableBase_GetCustomAxisSpin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableBase_GetCustomAxisSpin_Statics::PropPointers), sizeof(ThrowableBase_eventGetCustomAxisSpin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableBase_GetCustomAxisSpin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThrowableBase_GetCustomAxisSpin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ThrowableBase_eventGetCustomAxisSpin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AThrowableBase_GetCustomAxisSpin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThrowableBase_GetCustomAxisSpin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AThrowableBase::execGetCustomAxisSpin)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetCustomAxisSpin_Implementation();
	P_NATIVE_END;
}
// ********** End Class AThrowableBase Function GetCustomAxisSpin **********************************

// ********** Begin Class AThrowableBase Function OnThrowableLifeSpanEnd ***************************
static FName NAME_AThrowableBase_OnThrowableLifeSpanEnd = FName(TEXT("OnThrowableLifeSpanEnd"));
void AThrowableBase::OnThrowableLifeSpanEnd()
{
	UFunction* Func = FindFunctionChecked(NAME_AThrowableBase_OnThrowableLifeSpanEnd);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnThrowableLifeSpanEnd_Implementation();
	}
}
struct Z_Construct_UFunction_AThrowableBase_OnThrowableLifeSpanEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Thrower/Throwables/ThrowableBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowableBase_OnThrowableLifeSpanEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AThrowableBase, nullptr, "OnThrowableLifeSpanEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableBase_OnThrowableLifeSpanEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThrowableBase_OnThrowableLifeSpanEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AThrowableBase_OnThrowableLifeSpanEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThrowableBase_OnThrowableLifeSpanEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AThrowableBase::execOnThrowableLifeSpanEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnThrowableLifeSpanEnd_Implementation();
	P_NATIVE_END;
}
// ********** End Class AThrowableBase Function OnThrowableLifeSpanEnd *****************************

// ********** Begin Class AThrowableBase ***********************************************************
void AThrowableBase::StaticRegisterNativesAThrowableBase()
{
	UClass* Class = AThrowableBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndThrowableLifeSpan", &AThrowableBase::execEndThrowableLifeSpan },
		{ "GetCustomAxisSpin", &AThrowableBase::execGetCustomAxisSpin },
		{ "OnThrowableLifeSpanEnd", &AThrowableBase::execOnThrowableLifeSpanEnd },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AThrowableBase;
UClass* AThrowableBase::GetPrivateStaticClass()
{
	using TClass = AThrowableBase;
	if (!Z_Registration_Info_UClass_AThrowableBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ThrowableBase"),
			Z_Registration_Info_UClass_AThrowableBase.InnerSingleton,
			StaticRegisterNativesAThrowableBase,
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
	return Z_Registration_Info_UClass_AThrowableBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AThrowableBase_NoRegister()
{
	return AThrowableBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AThrowableBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Thrower/Throwables/ThrowableBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Thrower/Throwables/ThrowableBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifeTime_MetaData[] = {
		{ "Category", "Throwable" },
		{ "ModuleRelativePath", "Public/Thrower/Throwables/ThrowableBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowableSpinAxis_MetaData[] = {
		{ "Category", "Throwable" },
		{ "ModuleRelativePath", "Public/Thrower/Throwables/ThrowableBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "ThrowableBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Thrower/Throwables/ThrowableBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowableInstigator_MetaData[] = {
		{ "ModuleRelativePath", "Public/Thrower/Throwables/ThrowableBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThrowableSpinAxis;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrowableInstigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AThrowableBase_EndThrowableLifeSpan, "EndThrowableLifeSpan" }, // 429946449
		{ &Z_Construct_UFunction_AThrowableBase_GetCustomAxisSpin, "GetCustomAxisSpin" }, // 3272884670
		{ &Z_Construct_UFunction_AThrowableBase_OnThrowableLifeSpanEnd, "OnThrowableLifeSpanEnd" }, // 2314352748
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThrowableBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThrowableBase_Statics::NewProp_LifeTime = { "LifeTime", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowableBase, LifeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifeTime_MetaData), NewProp_LifeTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AThrowableBase_Statics::NewProp_ThrowableSpinAxis = { "ThrowableSpinAxis", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowableBase, ThrowableSpinAxis), Z_Construct_UEnum_WeaponSystem_EThrowableSpinAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowableSpinAxis_MetaData), NewProp_ThrowableSpinAxis_MetaData) }; // 3462144218
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowableBase_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowableBase, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowableBase_Statics::NewProp_ThrowableInstigator = { "ThrowableInstigator", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowableBase, ThrowableInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowableInstigator_MetaData), NewProp_ThrowableInstigator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThrowableBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableBase_Statics::NewProp_LifeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableBase_Statics::NewProp_ThrowableSpinAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableBase_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableBase_Statics::NewProp_ThrowableInstigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AThrowableBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APooledActorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AThrowableBase_Statics::ClassParams = {
	&AThrowableBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AThrowableBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableBase_Statics::PropPointers),
	0,
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AThrowableBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AThrowableBase()
{
	if (!Z_Registration_Info_UClass_AThrowableBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThrowableBase.OuterSingleton, Z_Construct_UClass_AThrowableBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AThrowableBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AThrowableBase);
AThrowableBase::~AThrowableBase() {}
// ********** End Class AThrowableBase *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Throwables_ThrowableBase_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AThrowableBase, AThrowableBase::StaticClass, TEXT("AThrowableBase"), &Z_Registration_Info_UClass_AThrowableBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThrowableBase), 2267378977U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Throwables_ThrowableBase_h__Script_WeaponSystem_1616358116(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Throwables_ThrowableBase_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Throwables_ThrowableBase_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
