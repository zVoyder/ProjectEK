// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UObjects/Quests/QuestParallel.h"

#ifdef QUESTSYSTEM_QuestParallel_generated_h
#error "QuestParallel.generated.h already included, missing '#pragma once' in QuestParallel.h"
#endif
#define QUESTSYSTEM_QuestParallel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UQuestParallel ***********************************************************
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestParallel_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestParallel_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestParallel(); \
	friend struct Z_Construct_UClass_UQuestParallel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestParallel_NoRegister(); \
public: \
	DECLARE_CLASS2(UQuestParallel, UQuestBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestSystem"), Z_Construct_UClass_UQuestParallel_NoRegister) \
	DECLARE_SERIALIZER(UQuestParallel)


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestParallel_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestParallel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UQuestParallel(UQuestParallel&&) = delete; \
	UQuestParallel(const UQuestParallel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestParallel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestParallel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestParallel) \
	NO_API virtual ~UQuestParallel();


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestParallel_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestParallel_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestParallel_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestParallel_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UQuestParallel;

// ********** End Class UQuestParallel *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestParallel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
