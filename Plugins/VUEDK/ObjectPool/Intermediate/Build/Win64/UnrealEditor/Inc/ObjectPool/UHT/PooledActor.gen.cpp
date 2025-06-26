// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/PooledActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePooledActor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OBJECTPOOL_API UClass* Z_Construct_UClass_UActorPool_NoRegister();
OBJECTPOOL_API UClass* Z_Construct_UClass_UPooledActor();
OBJECTPOOL_API UClass* Z_Construct_UClass_UPooledActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObjectPool();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UPooledActor Function AssignActorPool ********************************
struct PooledActor_eventAssignActorPool_Parms
{
	UActorPool* InActorPool;
};
void IPooledActor::AssignActorPool(UActorPool* InActorPool)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AssignActorPool instead.");
}
static FName NAME_UPooledActor_AssignActorPool = FName(TEXT("AssignActorPool"));
void IPooledActor::Execute_AssignActorPool(UObject* O, UActorPool* InActorPool)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPooledActor::StaticClass()));
	PooledActor_eventAssignActorPool_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPooledActor_AssignActorPool);
	if (Func)
	{
		Parms.InActorPool=InActorPool;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IPooledActor*)(O->GetNativeInterfaceAddress(UPooledActor::StaticClass())))
	{
		I->AssignActorPool_Implementation(InActorPool);
	}
}
struct Z_Construct_UFunction_UPooledActor_AssignActorPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PooledActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActorPool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPooledActor_AssignActorPool_Statics::NewProp_InActorPool = { "InActorPool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PooledActor_eventAssignActorPool_Parms, InActorPool), Z_Construct_UClass_UActorPool_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPooledActor_AssignActorPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPooledActor_AssignActorPool_Statics::NewProp_InActorPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPooledActor_AssignActorPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPooledActor_AssignActorPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPooledActor, nullptr, "AssignActorPool", Z_Construct_UFunction_UPooledActor_AssignActorPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPooledActor_AssignActorPool_Statics::PropPointers), sizeof(PooledActor_eventAssignActorPool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPooledActor_AssignActorPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPooledActor_AssignActorPool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PooledActor_eventAssignActorPool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPooledActor_AssignActorPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPooledActor_AssignActorPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPooledActor::execAssignActorPool)
{
	P_GET_OBJECT(UActorPool,Z_Param_InActorPool);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AssignActorPool_Implementation(Z_Param_InActorPool);
	P_NATIVE_END;
}
// ********** End Interface UPooledActor Function AssignActorPool **********************************

// ********** Begin Interface UPooledActor Function ClearPooledActor *******************************
void IPooledActor::ClearPooledActor()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClearPooledActor instead.");
}
static FName NAME_UPooledActor_ClearPooledActor = FName(TEXT("ClearPooledActor"));
void IPooledActor::Execute_ClearPooledActor(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPooledActor::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UPooledActor_ClearPooledActor);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IPooledActor*)(O->GetNativeInterfaceAddress(UPooledActor::StaticClass())))
	{
		I->ClearPooledActor_Implementation();
	}
}
struct Z_Construct_UFunction_UPooledActor_ClearPooledActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PooledActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPooledActor_ClearPooledActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPooledActor, nullptr, "ClearPooledActor", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPooledActor_ClearPooledActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPooledActor_ClearPooledActor_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPooledActor_ClearPooledActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPooledActor_ClearPooledActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPooledActor::execClearPooledActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearPooledActor_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UPooledActor Function ClearPooledActor *********************************

// ********** Begin Interface UPooledActor Function GetActorPool ***********************************
struct PooledActor_eventGetActorPool_Parms
{
	UActorPool* ReturnValue;

	/** Constructor, initializes return property only **/
	PooledActor_eventGetActorPool_Parms()
		: ReturnValue(NULL)
	{
	}
};
UActorPool* IPooledActor::GetActorPool() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetActorPool instead.");
	PooledActor_eventGetActorPool_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UPooledActor_GetActorPool = FName(TEXT("GetActorPool"));
UActorPool* IPooledActor::Execute_GetActorPool(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPooledActor::StaticClass()));
	PooledActor_eventGetActorPool_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPooledActor_GetActorPool);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IPooledActor*)(O->GetNativeInterfaceAddress(UPooledActor::StaticClass())))
	{
		Parms.ReturnValue = I->GetActorPool_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UPooledActor_GetActorPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PooledActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPooledActor_GetActorPool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PooledActor_eventGetActorPool_Parms, ReturnValue), Z_Construct_UClass_UActorPool_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPooledActor_GetActorPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPooledActor_GetActorPool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPooledActor_GetActorPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPooledActor_GetActorPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPooledActor, nullptr, "GetActorPool", Z_Construct_UFunction_UPooledActor_GetActorPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPooledActor_GetActorPool_Statics::PropPointers), sizeof(PooledActor_eventGetActorPool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPooledActor_GetActorPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPooledActor_GetActorPool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PooledActor_eventGetActorPool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPooledActor_GetActorPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPooledActor_GetActorPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPooledActor::execGetActorPool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorPool**)Z_Param__Result=P_THIS->GetActorPool_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UPooledActor Function GetActorPool *************************************

// ********** Begin Interface UPooledActor Function OnPooledActorBeginPlay *************************
void IPooledActor::OnPooledActorBeginPlay()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPooledActorBeginPlay instead.");
}
static FName NAME_UPooledActor_OnPooledActorBeginPlay = FName(TEXT("OnPooledActorBeginPlay"));
void IPooledActor::Execute_OnPooledActorBeginPlay(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPooledActor::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UPooledActor_OnPooledActorBeginPlay);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IPooledActor*)(O->GetNativeInterfaceAddress(UPooledActor::StaticClass())))
	{
		I->OnPooledActorBeginPlay_Implementation();
	}
}
struct Z_Construct_UFunction_UPooledActor_OnPooledActorBeginPlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PooledActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPooledActor_OnPooledActorBeginPlay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPooledActor, nullptr, "OnPooledActorBeginPlay", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPooledActor_OnPooledActorBeginPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPooledActor_OnPooledActorBeginPlay_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPooledActor_OnPooledActorBeginPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPooledActor_OnPooledActorBeginPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPooledActor::execOnPooledActorBeginPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPooledActorBeginPlay_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UPooledActor Function OnPooledActorBeginPlay ***************************

// ********** Begin Interface UPooledActor Function OnPooledActorEndPlay ***************************
void IPooledActor::OnPooledActorEndPlay()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPooledActorEndPlay instead.");
}
static FName NAME_UPooledActor_OnPooledActorEndPlay = FName(TEXT("OnPooledActorEndPlay"));
void IPooledActor::Execute_OnPooledActorEndPlay(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPooledActor::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UPooledActor_OnPooledActorEndPlay);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IPooledActor*)(O->GetNativeInterfaceAddress(UPooledActor::StaticClass())))
	{
		I->OnPooledActorEndPlay_Implementation();
	}
}
struct Z_Construct_UFunction_UPooledActor_OnPooledActorEndPlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PooledActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPooledActor_OnPooledActorEndPlay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPooledActor, nullptr, "OnPooledActorEndPlay", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPooledActor_OnPooledActorEndPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPooledActor_OnPooledActorEndPlay_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPooledActor_OnPooledActorEndPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPooledActor_OnPooledActorEndPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPooledActor::execOnPooledActorEndPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPooledActorEndPlay_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UPooledActor Function OnPooledActorEndPlay *****************************

// ********** Begin Interface UPooledActor Function ReleasePooledActor *****************************
void IPooledActor::ReleasePooledActor()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReleasePooledActor instead.");
}
static FName NAME_UPooledActor_ReleasePooledActor = FName(TEXT("ReleasePooledActor"));
void IPooledActor::Execute_ReleasePooledActor(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPooledActor::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UPooledActor_ReleasePooledActor);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IPooledActor*)(O->GetNativeInterfaceAddress(UPooledActor::StaticClass())))
	{
		I->ReleasePooledActor_Implementation();
	}
}
struct Z_Construct_UFunction_UPooledActor_ReleasePooledActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PooledActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPooledActor_ReleasePooledActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPooledActor, nullptr, "ReleasePooledActor", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPooledActor_ReleasePooledActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPooledActor_ReleasePooledActor_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPooledActor_ReleasePooledActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPooledActor_ReleasePooledActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPooledActor::execReleasePooledActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReleasePooledActor_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UPooledActor Function ReleasePooledActor *******************************

// ********** Begin Interface UPooledActor *********************************************************
void UPooledActor::StaticRegisterNativesUPooledActor()
{
	UClass* Class = UPooledActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AssignActorPool", &IPooledActor::execAssignActorPool },
		{ "ClearPooledActor", &IPooledActor::execClearPooledActor },
		{ "GetActorPool", &IPooledActor::execGetActorPool },
		{ "OnPooledActorBeginPlay", &IPooledActor::execOnPooledActorBeginPlay },
		{ "OnPooledActorEndPlay", &IPooledActor::execOnPooledActorEndPlay },
		{ "ReleasePooledActor", &IPooledActor::execReleasePooledActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPooledActor;
UClass* UPooledActor::GetPrivateStaticClass()
{
	using TClass = UPooledActor;
	if (!Z_Registration_Info_UClass_UPooledActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PooledActor"),
			Z_Registration_Info_UClass_UPooledActor.InnerSingleton,
			StaticRegisterNativesUPooledActor,
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
	return Z_Registration_Info_UClass_UPooledActor.InnerSingleton;
}
UClass* Z_Construct_UClass_UPooledActor_NoRegister()
{
	return UPooledActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPooledActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/PooledActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPooledActor_AssignActorPool, "AssignActorPool" }, // 2070938248
		{ &Z_Construct_UFunction_UPooledActor_ClearPooledActor, "ClearPooledActor" }, // 2556372635
		{ &Z_Construct_UFunction_UPooledActor_GetActorPool, "GetActorPool" }, // 611563264
		{ &Z_Construct_UFunction_UPooledActor_OnPooledActorBeginPlay, "OnPooledActorBeginPlay" }, // 1102546869
		{ &Z_Construct_UFunction_UPooledActor_OnPooledActorEndPlay, "OnPooledActorEndPlay" }, // 660485157
		{ &Z_Construct_UFunction_UPooledActor_ReleasePooledActor, "ReleasePooledActor" }, // 1679282265
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPooledActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPooledActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPooledActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPooledActor_Statics::ClassParams = {
	&UPooledActor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPooledActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UPooledActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPooledActor()
{
	if (!Z_Registration_Info_UClass_UPooledActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPooledActor.OuterSingleton, Z_Construct_UClass_UPooledActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPooledActor.OuterSingleton;
}
UPooledActor::UPooledActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPooledActor);
// ********** End Interface UPooledActor ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Interfaces_PooledActor_h__Script_ObjectPool_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPooledActor, UPooledActor::StaticClass, TEXT("UPooledActor"), &Z_Registration_Info_UClass_UPooledActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPooledActor), 1035934253U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Interfaces_PooledActor_h__Script_ObjectPool_1895799220(TEXT("/Script/ObjectPool"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Interfaces_PooledActor_h__Script_ObjectPool_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Interfaces_PooledActor_h__Script_ObjectPool_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
