// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/QSUtility.h"

#ifdef QUESTSYSTEM_QSUtility_generated_h
#error "QSUtility.generated.h already included, missing '#pragma once' in QSUtility.h"
#endif
#define QUESTSYSTEM_QSUtility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UQuestData;
class UQuestManager;
class UTaskData;

// ********** Begin Class UQSUtility ***************************************************************
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Utility_QSUtility_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTrackQuest); \
	DECLARE_FUNCTION(execCompleteQuestNow); \
	DECLARE_FUNCTION(execDeactivateQuest); \
	DECLARE_FUNCTION(execActivateQuest); \
	DECLARE_FUNCTION(execAchieveTask); \
	DECLARE_FUNCTION(execGetQuestManager);


QUESTSYSTEM_API UClass* Z_Construct_UClass_UQSUtility_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Utility_QSUtility_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQSUtility(); \
	friend struct Z_Construct_UClass_UQSUtility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QUESTSYSTEM_API UClass* Z_Construct_UClass_UQSUtility_NoRegister(); \
public: \
	DECLARE_CLASS2(UQSUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestSystem"), Z_Construct_UClass_UQSUtility_NoRegister) \
	DECLARE_SERIALIZER(UQSUtility)


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Utility_QSUtility_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQSUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UQSUtility(UQSUtility&&) = delete; \
	UQSUtility(const UQSUtility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQSUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQSUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQSUtility) \
	NO_API virtual ~UQSUtility();


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Utility_QSUtility_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Utility_QSUtility_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Utility_QSUtility_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Utility_QSUtility_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Utility_QSUtility_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UQSUtility;

// ********** End Class UQSUtility *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Utility_QSUtility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
