// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/PoolsUtility.h"

#ifdef OBJECTPOOL_PoolsUtility_generated_h
#error "PoolsUtility.generated.h already included, missing '#pragma once' in PoolsUtility.h"
#endif
#define OBJECTPOOL_PoolsUtility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UActorPool;
class UObject;
struct FGameplayTag;

// ********** Begin Class UPoolsUtility ************************************************************
#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Utility_PoolsUtility_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPoolByClass); \
	DECLARE_FUNCTION(execGetPool);


OBJECTPOOL_API UClass* Z_Construct_UClass_UPoolsUtility_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Utility_PoolsUtility_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoolsUtility(); \
	friend struct Z_Construct_UClass_UPoolsUtility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OBJECTPOOL_API UClass* Z_Construct_UClass_UPoolsUtility_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoolsUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ObjectPool"), Z_Construct_UClass_UPoolsUtility_NoRegister) \
	DECLARE_SERIALIZER(UPoolsUtility)


#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Utility_PoolsUtility_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoolsUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoolsUtility(UPoolsUtility&&) = delete; \
	UPoolsUtility(const UPoolsUtility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoolsUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoolsUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoolsUtility) \
	NO_API virtual ~UPoolsUtility();


#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Utility_PoolsUtility_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Utility_PoolsUtility_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Utility_PoolsUtility_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Utility_PoolsUtility_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Utility_PoolsUtility_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoolsUtility;

// ********** End Class UPoolsUtility **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Utility_PoolsUtility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
