// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/ObjectPoolFactory.h"

#ifdef OBJECTPOOL_ObjectPoolFactory_generated_h
#error "ObjectPoolFactory.generated.h already included, missing '#pragma once' in ObjectPoolFactory.h"
#endif
#define OBJECTPOOL_ObjectPoolFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UActorPool;
class UWorld;
struct FActorPoolData;

// ********** Begin Class UObjectPoolFactory *******************************************************
#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Factories_ObjectPoolFactory_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreatePool);


OBJECTPOOL_API UClass* Z_Construct_UClass_UObjectPoolFactory_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Factories_ObjectPoolFactory_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectPoolFactory(); \
	friend struct Z_Construct_UClass_UObjectPoolFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OBJECTPOOL_API UClass* Z_Construct_UClass_UObjectPoolFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectPoolFactory, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ObjectPool"), Z_Construct_UClass_UObjectPoolFactory_NoRegister) \
	DECLARE_SERIALIZER(UObjectPoolFactory)


#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Factories_ObjectPoolFactory_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectPoolFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectPoolFactory(UObjectPoolFactory&&) = delete; \
	UObjectPoolFactory(const UObjectPoolFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectPoolFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectPoolFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectPoolFactory) \
	NO_API virtual ~UObjectPoolFactory();


#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Factories_ObjectPoolFactory_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Factories_ObjectPoolFactory_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Factories_ObjectPoolFactory_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Factories_ObjectPoolFactory_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Factories_ObjectPoolFactory_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectPoolFactory;

// ********** End Class UObjectPoolFactory *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Factories_ObjectPoolFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
