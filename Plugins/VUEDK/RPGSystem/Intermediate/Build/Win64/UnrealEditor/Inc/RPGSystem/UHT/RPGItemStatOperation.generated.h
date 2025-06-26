// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RPGItemsGeneration/RPGItemStatOperation.h"

#ifdef RPGSYSTEM_RPGItemStatOperation_generated_h
#error "RPGItemStatOperation.generated.h already included, missing '#pragma once' in RPGItemStatOperation.h"
#endif
#define RPGSYSTEM_RPGItemStatOperation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URPGItemStatOperation ****************************************************
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemStatOperation_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_RPGItemStatOperation_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGItemStatOperation(); \
	friend struct Z_Construct_UClass_URPGItemStatOperation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemStatOperation_NoRegister(); \
public: \
	DECLARE_CLASS2(URPGItemStatOperation, UStatOperation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_URPGItemStatOperation_NoRegister) \
	DECLARE_SERIALIZER(URPGItemStatOperation)


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_RPGItemStatOperation_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGItemStatOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URPGItemStatOperation(URPGItemStatOperation&&) = delete; \
	URPGItemStatOperation(const URPGItemStatOperation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGItemStatOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGItemStatOperation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGItemStatOperation) \
	NO_API virtual ~URPGItemStatOperation();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_RPGItemStatOperation_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_RPGItemStatOperation_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_RPGItemStatOperation_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_RPGItemStatOperation_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URPGItemStatOperation;

// ********** End Class URPGItemStatOperation ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_RPGItemStatOperation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
