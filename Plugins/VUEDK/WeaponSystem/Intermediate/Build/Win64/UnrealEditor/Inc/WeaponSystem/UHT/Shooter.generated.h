// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shooter/Shooter.h"

#ifdef WEAPONSYSTEM_Shooter_generated_h
#error "Shooter.generated.h already included, missing '#pragma once' in Shooter.h"
#endif
#define WEAPONSYSTEM_Shooter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APawn;
class UShootBarrel;
struct FShootData;

// ********** Begin Class UShooter *****************************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Shooter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetShootData); \
	DECLARE_FUNCTION(execShoot); \
	DECLARE_FUNCTION(execSetOwner); \
	DECLARE_FUNCTION(execInit);


WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooter_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Shooter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShooter(); \
	friend struct Z_Construct_UClass_UShooter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooter_NoRegister(); \
public: \
	DECLARE_CLASS2(UShooter, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_UShooter_NoRegister) \
	DECLARE_SERIALIZER(UShooter)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Shooter_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UShooter(UShooter&&) = delete; \
	UShooter(const UShooter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShooter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShooter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UShooter) \
	NO_API virtual ~UShooter();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Shooter_h_14_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Shooter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Shooter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Shooter_h_17_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Shooter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UShooter;

// ********** End Class UShooter *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Shooter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
