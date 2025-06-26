// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shooter/Interfaces/ShooterBehaviour.h"

#ifdef WEAPONSYSTEM_ShooterBehaviour_generated_h
#error "ShooterBehaviour.generated.h already included, missing '#pragma once' in ShooterBehaviour.h"
#endif
#define WEAPONSYSTEM_ShooterBehaviour_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UShooterBehaviour ****************************************************
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooterBehaviour_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Interfaces_ShooterBehaviour_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShooterBehaviour(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UShooterBehaviour(UShooterBehaviour&&) = delete; \
	UShooterBehaviour(const UShooterBehaviour&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShooterBehaviour); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShooterBehaviour); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShooterBehaviour) \
	virtual ~UShooterBehaviour() = default;


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Interfaces_ShooterBehaviour_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUShooterBehaviour(); \
	friend struct Z_Construct_UClass_UShooterBehaviour_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooterBehaviour_NoRegister(); \
public: \
	DECLARE_CLASS2(UShooterBehaviour, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_UShooterBehaviour_NoRegister) \
	DECLARE_SERIALIZER(UShooterBehaviour)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Interfaces_ShooterBehaviour_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Interfaces_ShooterBehaviour_h_11_GENERATED_UINTERFACE_BODY() \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Interfaces_ShooterBehaviour_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Interfaces_ShooterBehaviour_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IShooterBehaviour() {} \
public: \
	typedef UShooterBehaviour UClassType; \
	typedef IShooterBehaviour ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Interfaces_ShooterBehaviour_h_8_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Interfaces_ShooterBehaviour_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Interfaces_ShooterBehaviour_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UShooterBehaviour;

// ********** End Interface UShooterBehaviour ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Interfaces_ShooterBehaviour_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
