// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/QSFactory.h"

#ifdef QUESTSYSTEM_QSFactory_generated_h
#error "QSFactory.generated.h already included, missing '#pragma once' in QSFactory.h"
#endif
#define QUESTSYSTEM_QSFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UQSFactory ***************************************************************
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQSFactory_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Utility_QSFactory_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQSFactory(); \
	friend struct Z_Construct_UClass_UQSFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QUESTSYSTEM_API UClass* Z_Construct_UClass_UQSFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UQSFactory, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestSystem"), Z_Construct_UClass_UQSFactory_NoRegister) \
	DECLARE_SERIALIZER(UQSFactory)


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Utility_QSFactory_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQSFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UQSFactory(UQSFactory&&) = delete; \
	UQSFactory(const UQSFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQSFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQSFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQSFactory) \
	NO_API virtual ~UQSFactory();


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Utility_QSFactory_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Utility_QSFactory_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Utility_QSFactory_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Utility_QSFactory_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UQSFactory;

// ********** End Class UQSFactory *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Utility_QSFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
