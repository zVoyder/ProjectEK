// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/InputModeType.h"

#ifdef INPUTSHANDLERSYSTEM_InputModeType_generated_h
#error "InputModeType.generated.h already included, missing '#pragma once' in InputModeType.h"
#endif
#define INPUTSHANDLERSYSTEM_InputModeType_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Data_InputModeType_h

// ********** Begin Enum EInputModeType ************************************************************
#define FOREACH_ENUM_EINPUTMODETYPE(op) \
	op(EInputModeType::InputModeNone) \
	op(EInputModeType::InputModeGameplay) \
	op(EInputModeType::InputModeUI) 

enum class EInputModeType : uint8;
template<> struct TIsUEnumClass<EInputModeType> { enum { Value = true }; };
template<> INPUTSHANDLERSYSTEM_API UEnum* StaticEnum<EInputModeType>();
// ********** End Enum EInputModeType **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
