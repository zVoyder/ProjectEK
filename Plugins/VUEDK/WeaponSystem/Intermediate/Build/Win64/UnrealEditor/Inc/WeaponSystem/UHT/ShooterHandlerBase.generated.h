// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shooter/Handlers/ShooterHandlerBase.h"

#ifdef WEAPONSYSTEM_ShooterHandlerBase_generated_h
#error "ShooterHandlerBase.generated.h already included, missing '#pragma once' in ShooterHandlerBase.h"
#endif
#define WEAPONSYSTEM_ShooterHandlerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UShootBarrel;

// ********** Begin Class UShooterHandlerBase ******************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_ShooterHandlerBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBehaviourShootFail); \
	DECLARE_FUNCTION(execOnBehaviourShootSuccess); \
	DECLARE_FUNCTION(execOnBehaviourDisabled); \
	DECLARE_FUNCTION(execOnBehaviourEnabled);


WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooterHandlerBase_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_ShooterHandlerBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShooterHandlerBase(); \
	friend struct Z_Construct_UClass_UShooterHandlerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooterHandlerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UShooterHandlerBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_UShooterHandlerBase_NoRegister) \
	DECLARE_SERIALIZER(UShooterHandlerBase)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_ShooterHandlerBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShooterHandlerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UShooterHandlerBase(UShooterHandlerBase&&) = delete; \
	UShooterHandlerBase(const UShooterHandlerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShooterHandlerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShooterHandlerBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShooterHandlerBase) \
	NO_API virtual ~UShooterHandlerBase();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_ShooterHandlerBase_h_13_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_ShooterHandlerBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_ShooterHandlerBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_ShooterHandlerBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_ShooterHandlerBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UShooterHandlerBase;

// ********** End Class UShooterHandlerBase ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_ShooterHandlerBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
