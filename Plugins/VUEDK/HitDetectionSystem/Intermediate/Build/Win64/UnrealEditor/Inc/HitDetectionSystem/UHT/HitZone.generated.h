// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/HitZone.h"

#ifdef HITDETECTIONSYSTEM_HitZone_generated_h
#error "HitZone.generated.h already included, missing '#pragma once' in HitZone.h"
#endif
#define HITDETECTIONSYSTEM_HitZone_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UHitZoneHandler;

// ********** Begin Interface UHitZone *************************************************************
#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_Interfaces_HitZone_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UHitZoneHandler* GetHitZoneHandler_Implementation() const { return NULL; }; \
	DECLARE_FUNCTION(execGetHitZoneHandler);


#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_Interfaces_HitZone_h_13_CALLBACK_WRAPPERS
HITDETECTIONSYSTEM_API UClass* Z_Construct_UClass_UHitZone_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_Interfaces_HitZone_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHitZone(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHitZone(UHitZone&&) = delete; \
	UHitZone(const UHitZone&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHitZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitZone); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHitZone) \
	virtual ~UHitZone() = default;


#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_Interfaces_HitZone_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHitZone(); \
	friend struct Z_Construct_UClass_UHitZone_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HITDETECTIONSYSTEM_API UClass* Z_Construct_UClass_UHitZone_NoRegister(); \
public: \
	DECLARE_CLASS2(UHitZone, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/HitDetectionSystem"), Z_Construct_UClass_UHitZone_NoRegister) \
	DECLARE_SERIALIZER(UHitZone)


#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_Interfaces_HitZone_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_Interfaces_HitZone_h_13_GENERATED_UINTERFACE_BODY() \
	FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_Interfaces_HitZone_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_Interfaces_HitZone_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHitZone() {} \
public: \
	typedef UHitZone UClassType; \
	typedef IHitZone ThisClass; \
	static UHitZoneHandler* Execute_GetHitZoneHandler(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_Interfaces_HitZone_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_Interfaces_HitZone_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_Interfaces_HitZone_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_Interfaces_HitZone_h_13_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_Interfaces_HitZone_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHitZone;

// ********** End Interface UHitZone ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_Interfaces_HitZone_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
