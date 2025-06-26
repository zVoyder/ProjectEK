// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shooter/Handlers/SpreadHandler.h"

#ifdef WEAPONSYSTEM_SpreadHandler_generated_h
#error "SpreadHandler.generated.h already included, missing '#pragma once' in SpreadHandler.h"
#endif
#define WEAPONSYSTEM_SpreadHandler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnStartedChangeSpread ************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_SpreadHandler_h_14_DELEGATE \
WEAPONSYSTEM_API void FOnStartedChangeSpread_DelegateWrapper(const FMulticastScriptDelegate& OnStartedChangeSpread, float DefaultSpread, float Spread);


// ********** End Delegate FOnStartedChangeSpread **************************************************

// ********** Begin Delegate FOnProcessingSpread ***************************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_SpreadHandler_h_19_DELEGATE \
WEAPONSYSTEM_API void FOnProcessingSpread_DelegateWrapper(const FMulticastScriptDelegate& OnProcessingSpread, float Spread);


// ********** End Delegate FOnProcessingSpread *****************************************************

// ********** Begin Delegate FOnCompletedChangeSpread **********************************************
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_SpreadHandler_h_25_DELEGATE \
WEAPONSYSTEM_API void FOnCompletedChangeSpread_DelegateWrapper(const FMulticastScriptDelegate& OnCompletedChangeSpread, float DefaultSpread, float Spread);


// ********** End Delegate FOnCompletedChangeSpread ************************************************

// ********** Begin Class USpreadHandler ***********************************************************
WEAPONSYSTEM_API UClass* Z_Construct_UClass_USpreadHandler_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_SpreadHandler_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpreadHandler(); \
	friend struct Z_Construct_UClass_USpreadHandler_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEAPONSYSTEM_API UClass* Z_Construct_UClass_USpreadHandler_NoRegister(); \
public: \
	DECLARE_CLASS2(USpreadHandler, UShooterHandlerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystem"), Z_Construct_UClass_USpreadHandler_NoRegister) \
	DECLARE_SERIALIZER(USpreadHandler)


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_SpreadHandler_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpreadHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USpreadHandler(USpreadHandler&&) = delete; \
	USpreadHandler(const USpreadHandler&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpreadHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpreadHandler); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpreadHandler) \
	NO_API virtual ~USpreadHandler();


#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_SpreadHandler_h_31_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_SpreadHandler_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_SpreadHandler_h_34_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_SpreadHandler_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USpreadHandler;

// ********** End Class USpreadHandler *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Handlers_SpreadHandler_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
