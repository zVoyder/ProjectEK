// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PooledActorBase.h"

#ifdef OBJECTPOOL_PooledActorBase_generated_h
#error "PooledActorBase.generated.h already included, missing '#pragma once' in PooledActorBase.h"
#endif
#define OBJECTPOOL_PooledActorBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APooledActorBase *********************************************************
OBJECTPOOL_API UClass* Z_Construct_UClass_APooledActorBase_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_PooledActorBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPooledActorBase(); \
	friend struct Z_Construct_UClass_APooledActorBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OBJECTPOOL_API UClass* Z_Construct_UClass_APooledActorBase_NoRegister(); \
public: \
	DECLARE_CLASS2(APooledActorBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectPool"), Z_Construct_UClass_APooledActorBase_NoRegister) \
	DECLARE_SERIALIZER(APooledActorBase) \
	virtual UObject* _getUObject() const override { return const_cast<APooledActorBase*>(this); }


#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_PooledActorBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APooledActorBase(APooledActorBase&&) = delete; \
	APooledActorBase(const APooledActorBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APooledActorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APooledActorBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(APooledActorBase) \
	NO_API virtual ~APooledActorBase();


#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_PooledActorBase_h_12_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_PooledActorBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_PooledActorBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_PooledActorBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APooledActorBase;

// ********** End Class APooledActorBase ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_PooledActorBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
