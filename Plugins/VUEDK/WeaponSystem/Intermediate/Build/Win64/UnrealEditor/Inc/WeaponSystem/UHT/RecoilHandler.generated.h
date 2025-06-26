// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shooter/Handlers/RecoilHandler.h"

#ifdef WEAPONSYSTEM_RecoilHandler_generated_h
#error "RecoilHandler.generated.h already included, missing '#pragma once' in RecoilHandler.h"
#endif
#define WEAPONSYSTEM_RecoilHandler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URecoilHandler ***********************************************************
WEAPONSYSTEM_API UClass* Z_Construct_UClass_URecoilHandler_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_RecoilHandler_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURecoilHandler(); \
	friend struct Z_Construct_UClass_URecoilHandler_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_URecoilHandler_NoRegister(); \
public: \
	DECLARE_CLASS2(URecoilHandler, UShooterHandlerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_URecoilHandler_NoRegister) \
	DECLARE_SERIALIZER(URecoilHandler)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_RecoilHandler_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URecoilHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URecoilHandler(URecoilHandler&&) = delete; \
	URecoilHandler(const URecoilHandler&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URecoilHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URecoilHandler); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URecoilHandler) \
	NO_API virtual ~URecoilHandler();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_RecoilHandler_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_RecoilHandler_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_RecoilHandler_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_RecoilHandler_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URecoilHandler;

// ********** End Class URecoilHandler *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_RecoilHandler_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
