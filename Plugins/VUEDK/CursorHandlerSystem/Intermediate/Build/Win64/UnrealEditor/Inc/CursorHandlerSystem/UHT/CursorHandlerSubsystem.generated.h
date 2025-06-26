// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CursorHandlerSubsystem.h"

#ifdef CURSORHANDLERSYSTEM_CursorHandlerSubsystem_generated_h
#error "CursorHandlerSubsystem.generated.h already included, missing '#pragma once' in CursorHandlerSubsystem.h"
#endif
#define CURSORHANDLERSYSTEM_CursorHandlerSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FInputDeviceId;
struct FPlatformUserId;

// ********** Begin Class UCursorHandlerSubsystem **************************************************
#define FID_ProjectEK_Plugins_VUEDK_CursorHandlerSystem_Source_CursorHandlerSystem_Public_CursorHandlerSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckUsingGamepad);


CURSORHANDLERSYSTEM_API UClass* Z_Construct_UClass_UCursorHandlerSubsystem_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_CursorHandlerSystem_Source_CursorHandlerSystem_Public_CursorHandlerSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCursorHandlerSubsystem(); \
	friend struct Z_Construct_UClass_UCursorHandlerSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CURSORHANDLERSYSTEM_API UClass* Z_Construct_UClass_UCursorHandlerSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UCursorHandlerSubsystem, ULocalPlayerSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CursorHandlerSystem"), Z_Construct_UClass_UCursorHandlerSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UCursorHandlerSubsystem)


#define FID_ProjectEK_Plugins_VUEDK_CursorHandlerSystem_Source_CursorHandlerSystem_Public_CursorHandlerSubsystem_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCursorHandlerSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCursorHandlerSubsystem(UCursorHandlerSubsystem&&) = delete; \
	UCursorHandlerSubsystem(const UCursorHandlerSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCursorHandlerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCursorHandlerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCursorHandlerSubsystem) \
	NO_API virtual ~UCursorHandlerSubsystem();


#define FID_ProjectEK_Plugins_VUEDK_CursorHandlerSystem_Source_CursorHandlerSystem_Public_CursorHandlerSubsystem_h_13_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_CursorHandlerSystem_Source_CursorHandlerSystem_Public_CursorHandlerSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_CursorHandlerSystem_Source_CursorHandlerSystem_Public_CursorHandlerSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_CursorHandlerSystem_Source_CursorHandlerSystem_Public_CursorHandlerSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_CursorHandlerSystem_Source_CursorHandlerSystem_Public_CursorHandlerSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCursorHandlerSubsystem;

// ********** End Class UCursorHandlerSubsystem ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_CursorHandlerSystem_Source_CursorHandlerSystem_Public_CursorHandlerSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
