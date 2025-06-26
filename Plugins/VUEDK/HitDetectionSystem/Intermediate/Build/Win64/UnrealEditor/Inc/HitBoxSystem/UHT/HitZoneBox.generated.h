// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HitZones/HitZoneBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HITBOXSYSTEM_HitZoneBox_generated_h
#error "HitZoneBox.generated.h already included, missing '#pragma once' in HitZoneBox.h"
#endif
#define HITBOXSYSTEM_HitZoneBox_generated_h

#define FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneBox_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHitZoneBox(); \
	friend struct Z_Construct_UClass_UHitZoneBox_Statics; \
public: \
	DECLARE_CLASS(UHitZoneBox, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HitBoxSystem"), NO_API) \
	DECLARE_SERIALIZER(UHitZoneBox) \
	virtual UObject* _getUObject() const override { return const_cast<UHitZoneBox*>(this); }


#define FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneBox_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHitZoneBox(UHitZoneBox&&); \
	UHitZoneBox(const UHitZoneBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHitZoneBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitZoneBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHitZoneBox) \
	NO_API virtual ~UHitZoneBox();


#define FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneBox_h_11_PROLOG
#define FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneBox_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneBox_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneBox_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HITBOXSYSTEM_API UClass* StaticClass<class UHitZoneBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
