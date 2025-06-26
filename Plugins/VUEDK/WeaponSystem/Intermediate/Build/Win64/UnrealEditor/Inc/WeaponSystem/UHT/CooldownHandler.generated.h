// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shooter/Handlers/CooldownHandler.h"

#ifdef WEAPONSYSTEM_CooldownHandler_generated_h
#error "CooldownHandler.generated.h already included, missing '#pragma once' in CooldownHandler.h"
#endif
#define WEAPONSYSTEM_CooldownHandler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCooldownHandler *********************************************************
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UCooldownHandler_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_CooldownHandler_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCooldownHandler(); \
	friend struct Z_Construct_UClass_UCooldownHandler_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_UCooldownHandler_NoRegister(); \
public: \
	DECLARE_CLASS2(UCooldownHandler, UShooterHandlerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_UCooldownHandler_NoRegister) \
	DECLARE_SERIALIZER(UCooldownHandler)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_CooldownHandler_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCooldownHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCooldownHandler(UCooldownHandler&&) = delete; \
	UCooldownHandler(const UCooldownHandler&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCooldownHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCooldownHandler); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCooldownHandler) \
	NO_API virtual ~UCooldownHandler();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_CooldownHandler_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_CooldownHandler_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_CooldownHandler_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_CooldownHandler_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCooldownHandler;

// ********** End Class UCooldownHandler ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_CooldownHandler_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
