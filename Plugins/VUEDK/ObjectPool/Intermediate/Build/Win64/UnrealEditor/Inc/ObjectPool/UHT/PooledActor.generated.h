// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/PooledActor.h"

#ifdef OBJECTPOOL_PooledActor_generated_h
#error "PooledActor.generated.h already included, missing '#pragma once' in PooledActor.h"
#endif
#define OBJECTPOOL_PooledActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UActorPool;

// ********** Begin Interface UPooledActor *********************************************************
#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Interfaces_PooledActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClearPooledActor_Implementation() {}; \
	virtual void ReleasePooledActor_Implementation() {}; \
	virtual UActorPool* GetActorPool_Implementation() const { return NULL; }; \
	virtual void AssignActorPool_Implementation(UActorPool* InActorPool) {}; \
	virtual void OnPooledActorEndPlay_Implementation() {}; \
	virtual void OnPooledActorBeginPlay_Implementation() {}; \
	DECLARE_FUNCTION(execClearPooledActor); \
	DECLARE_FUNCTION(execReleasePooledActor); \
	DECLARE_FUNCTION(execGetActorPool); \
	DECLARE_FUNCTION(execAssignActorPool); \
	DECLARE_FUNCTION(execOnPooledActorEndPlay); \
	DECLARE_FUNCTION(execOnPooledActorBeginPlay);


#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Interfaces_PooledActor_h_14_CALLBACK_WRAPPERS
OBJECTPOOL_API UClass* Z_Construct_UClass_UPooledActor_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Interfaces_PooledActor_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPooledActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPooledActor(UPooledActor&&) = delete; \
	UPooledActor(const UPooledActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPooledActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPooledActor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPooledActor) \
	virtual ~UPooledActor() = default;


#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Interfaces_PooledActor_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPooledActor(); \
	friend struct Z_Construct_UClass_UPooledActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OBJECTPOOL_API UClass* Z_Construct_UClass_UPooledActor_NoRegister(); \
public: \
	DECLARE_CLASS2(UPooledActor, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ObjectPool"), Z_Construct_UClass_UPooledActor_NoRegister) \
	DECLARE_SERIALIZER(UPooledActor)


#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Interfaces_PooledActor_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Interfaces_PooledActor_h_14_GENERATED_UINTERFACE_BODY() \
	FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Interfaces_PooledActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Interfaces_PooledActor_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPooledActor() {} \
public: \
	typedef UPooledActor UClassType; \
	typedef IPooledActor ThisClass; \
	static void Execute_AssignActorPool(UObject* O, UActorPool* InActorPool); \
	static void Execute_ClearPooledActor(UObject* O); \
	static UActorPool* Execute_GetActorPool(const UObject* O); \
	static void Execute_OnPooledActorBeginPlay(UObject* O); \
	static void Execute_OnPooledActorEndPlay(UObject* O); \
	static void Execute_ReleasePooledActor(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Interfaces_PooledActor_h_11_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Interfaces_PooledActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Interfaces_PooledActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Interfaces_PooledActor_h_14_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Interfaces_PooledActor_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPooledActor;

// ********** End Interface UPooledActor ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Interfaces_PooledActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
