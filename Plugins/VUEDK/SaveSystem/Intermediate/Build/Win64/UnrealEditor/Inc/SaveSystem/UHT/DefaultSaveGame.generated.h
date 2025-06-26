// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/Saves/DefaultSaveGame.h"

#ifdef SAVESYSTEM_DefaultSaveGame_generated_h
#error "DefaultSaveGame.generated.h already included, missing '#pragma once' in DefaultSaveGame.h"
#endif
#define SAVESYSTEM_DefaultSaveGame_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDefaultSaveGame *********************************************************
SAVESYSTEM_API UClass* Z_Construct_UClass_UDefaultSaveGame_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Saves_DefaultSaveGame_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDefaultSaveGame(); \
	friend struct Z_Construct_UClass_UDefaultSaveGame_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SAVESYSTEM_API UClass* Z_Construct_UClass_UDefaultSaveGame_NoRegister(); \
public: \
	DECLARE_CLASS2(UDefaultSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SaveSystem"), Z_Construct_UClass_UDefaultSaveGame_NoRegister) \
	DECLARE_SERIALIZER(UDefaultSaveGame)


#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Saves_DefaultSaveGame_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDefaultSaveGame(UDefaultSaveGame&&) = delete; \
	UDefaultSaveGame(const UDefaultSaveGame&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDefaultSaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDefaultSaveGame); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDefaultSaveGame) \
	NO_API virtual ~UDefaultSaveGame();


#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Saves_DefaultSaveGame_h_9_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Saves_DefaultSaveGame_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Saves_DefaultSaveGame_h_12_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Saves_DefaultSaveGame_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDefaultSaveGame;

// ********** End Class UDefaultSaveGame ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Saves_DefaultSaveGame_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
