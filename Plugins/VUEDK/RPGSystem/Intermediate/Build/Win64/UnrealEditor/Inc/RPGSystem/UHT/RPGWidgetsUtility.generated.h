// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/RPGWidgetsUtility.h"

#ifdef RPGSYSTEM_RPGWidgetsUtility_generated_h
#error "RPGWidgetsUtility.generated.h already included, missing '#pragma once' in RPGWidgetsUtility.h"
#endif
#define RPGSYSTEM_RPGWidgetsUtility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class USlateBrushAsset;
struct FLinearColor;
struct FPaintContext;
struct FSlateFontInfo;

// ********** Begin Class URPGWidgetsUtility *******************************************************
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_UI_RPGWidgetsUtility_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDrawLabelsAroundPolygon); \
	DECLARE_FUNCTION(execDrawPolygonWithProgress); \
	DECLARE_FUNCTION(execDrawPolygon); \
	DECLARE_FUNCTION(execDrawCustomPolygon);


RPGSYSTEM_API UClass* Z_Construct_UClass_URPGWidgetsUtility_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_UI_RPGWidgetsUtility_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGWidgetsUtility(); \
	friend struct Z_Construct_UClass_URPGWidgetsUtility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_URPGWidgetsUtility_NoRegister(); \
public: \
	DECLARE_CLASS2(URPGWidgetsUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_URPGWidgetsUtility_NoRegister) \
	DECLARE_SERIALIZER(URPGWidgetsUtility)


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_UI_RPGWidgetsUtility_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGWidgetsUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URPGWidgetsUtility(URPGWidgetsUtility&&) = delete; \
	URPGWidgetsUtility(const URPGWidgetsUtility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGWidgetsUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGWidgetsUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGWidgetsUtility) \
	NO_API virtual ~URPGWidgetsUtility();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_UI_RPGWidgetsUtility_h_11_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_UI_RPGWidgetsUtility_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_UI_RPGWidgetsUtility_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_UI_RPGWidgetsUtility_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_UI_RPGWidgetsUtility_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URPGWidgetsUtility;

// ********** End Class URPGWidgetsUtility *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_UI_RPGWidgetsUtility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
