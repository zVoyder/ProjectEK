// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/TaskAchiever.h"

#ifdef QUESTSYSTEM_TaskAchiever_generated_h
#error "TaskAchiever.generated.h already included, missing '#pragma once' in TaskAchiever.h"
#endif
#define QUESTSYSTEM_TaskAchiever_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTaskAchiever ************************************************************
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Components_TaskAchiever_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAchieveTask);


QUESTSYSTEM_API UClass* Z_Construct_UClass_UTaskAchiever_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Components_TaskAchiever_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTaskAchiever(); \
	friend struct Z_Construct_UClass_UTaskAchiever_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QUESTSYSTEM_API UClass* Z_Construct_UClass_UTaskAchiever_NoRegister(); \
public: \
	DECLARE_CLASS2(UTaskAchiever, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), Z_Construct_UClass_UTaskAchiever_NoRegister) \
	DECLARE_SERIALIZER(UTaskAchiever)


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Components_TaskAchiever_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTaskAchiever(UTaskAchiever&&) = delete; \
	UTaskAchiever(const UTaskAchiever&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTaskAchiever); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTaskAchiever); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTaskAchiever) \
	NO_API virtual ~UTaskAchiever();


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Components_TaskAchiever_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Components_TaskAchiever_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Components_TaskAchiever_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Components_TaskAchiever_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Components_TaskAchiever_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTaskAchiever;

// ********** End Class UTaskAchiever **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Components_TaskAchiever_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
