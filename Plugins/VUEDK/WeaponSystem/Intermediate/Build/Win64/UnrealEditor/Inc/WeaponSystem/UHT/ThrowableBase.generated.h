// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Thrower/Throwables/ThrowableBase.h"

#ifdef WEAPONSYSTEM_ThrowableBase_generated_h
#error "ThrowableBase.generated.h already included, missing '#pragma once' in ThrowableBase.h"
#endif
#define WEAPONSYSTEM_ThrowableBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AThrowableBase ***********************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Throwables_ThrowableBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnThrowableLifeSpanEnd_Implementation(); \
	virtual FVector GetCustomAxisSpin_Implementation() const; \
	DECLARE_FUNCTION(execEndThrowableLifeSpan); \
	DECLARE_FUNCTION(execOnThrowableLifeSpanEnd); \
	DECLARE_FUNCTION(execGetCustomAxisSpin);


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Throwables_ThrowableBase_h_13_CALLBACK_WRAPPERS
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AThrowableBase_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Throwables_ThrowableBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThrowableBase(); \
	friend struct Z_Construct_UClass_AThrowableBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_AThrowableBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AThrowableBase, APooledActorBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_AThrowableBase_NoRegister) \
	DECLARE_SERIALIZER(AThrowableBase)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Throwables_ThrowableBase_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AThrowableBase(AThrowableBase&&) = delete; \
	AThrowableBase(const AThrowableBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThrowableBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThrowableBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AThrowableBase) \
	NO_API virtual ~AThrowableBase();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Throwables_ThrowableBase_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Throwables_ThrowableBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Throwables_ThrowableBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Throwables_ThrowableBase_h_13_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Throwables_ThrowableBase_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Throwables_ThrowableBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AThrowableBase;

// ********** End Class AThrowableBase *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Throwables_ThrowableBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
