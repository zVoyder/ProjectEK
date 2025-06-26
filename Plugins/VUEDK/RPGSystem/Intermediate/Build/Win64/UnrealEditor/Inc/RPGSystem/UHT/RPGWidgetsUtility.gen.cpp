// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/RPGWidgetsUtility.h"
#include "Blueprint/UserWidget.h"
#include "Fonts/SlateFontInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRPGWidgetsUtility() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USlateBrushAsset_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGWidgetsUtility();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGWidgetsUtility_NoRegister();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FPaintContext();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URPGWidgetsUtility Function DrawCustomPolygon ****************************
struct Z_Construct_UFunction_URPGWidgetsUtility_DrawCustomPolygon_Statics
{
	struct RPGWidgetsUtility_eventDrawCustomPolygon_Parms
	{
		FPaintContext Context;
		TArray<FVector2D> Points;
		USlateBrushAsset* Brush;
		int32 ZOrder;
		FLinearColor Tint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|WidgetsUtility" },
		{ "CPP_Default_Tint", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_ZOrder", "0" },
		{ "ModuleRelativePath", "Public/UI/RPGWidgetsUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Brush;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawCustomPolygon_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawCustomPolygon_Parms, Context), Z_Construct_UScriptStruct_FPaintContext, METADATA_PARAMS(0, nullptr) }; // 668724891
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawCustomPolygon_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawCustomPolygon_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawCustomPolygon_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawCustomPolygon_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawCustomPolygon_Parms, Brush), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawCustomPolygon_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawCustomPolygon_Parms, ZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOrder_MetaData), NewProp_ZOrder_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawCustomPolygon_Statics::NewProp_Tint = { "Tint", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawCustomPolygon_Parms, Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tint_MetaData), NewProp_Tint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGWidgetsUtility_DrawCustomPolygon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawCustomPolygon_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawCustomPolygon_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawCustomPolygon_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawCustomPolygon_Statics::NewProp_Brush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawCustomPolygon_Statics::NewProp_ZOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawCustomPolygon_Statics::NewProp_Tint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGWidgetsUtility_DrawCustomPolygon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGWidgetsUtility_DrawCustomPolygon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGWidgetsUtility, nullptr, "DrawCustomPolygon", Z_Construct_UFunction_URPGWidgetsUtility_DrawCustomPolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGWidgetsUtility_DrawCustomPolygon_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGWidgetsUtility_DrawCustomPolygon_Statics::RPGWidgetsUtility_eventDrawCustomPolygon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGWidgetsUtility_DrawCustomPolygon_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGWidgetsUtility_DrawCustomPolygon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGWidgetsUtility_DrawCustomPolygon_Statics::RPGWidgetsUtility_eventDrawCustomPolygon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGWidgetsUtility_DrawCustomPolygon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGWidgetsUtility_DrawCustomPolygon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGWidgetsUtility::execDrawCustomPolygon)
{
	P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context);
	P_GET_TARRAY(FVector2D,Z_Param_Points);
	P_GET_OBJECT(USlateBrushAsset,Z_Param_Brush);
	P_GET_PROPERTY(FIntProperty,Z_Param_ZOrder);
	P_GET_STRUCT(FLinearColor,Z_Param_Tint);
	P_FINISH;
	P_NATIVE_BEGIN;
	URPGWidgetsUtility::DrawCustomPolygon(Z_Param_Out_Context,Z_Param_Points,Z_Param_Brush,Z_Param_ZOrder,Z_Param_Tint);
	P_NATIVE_END;
}
// ********** End Class URPGWidgetsUtility Function DrawCustomPolygon ******************************

// ********** Begin Class URPGWidgetsUtility Function DrawLabelsAroundPolygon **********************
struct Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics
{
	struct RPGWidgetsUtility_eventDrawLabelsAroundPolygon_Parms
	{
		FPaintContext Context;
		TArray<FVector2D> Points;
		FVector2D Center;
		TArray<FText> Labels;
		int32 ZOrder;
		FSlateFontInfo FontInfo;
		FLinearColor TextColor;
		float TextOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|WidgetsUtility" },
		{ "CPP_Default_FontInfo", "()" },
		{ "CPP_Default_TextColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_TextOffset", "10.000000" },
		{ "CPP_Default_ZOrder", "0" },
		{ "ModuleRelativePath", "Public/UI/RPGWidgetsUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Labels_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FontInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Labels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Labels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FontInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TextOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawLabelsAroundPolygon_Parms, Context), Z_Construct_UScriptStruct_FPaintContext, METADATA_PARAMS(0, nullptr) }; // 668724891
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawLabelsAroundPolygon_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawLabelsAroundPolygon_Parms, Center), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::NewProp_Labels_Inner = { "Labels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::NewProp_Labels = { "Labels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawLabelsAroundPolygon_Parms, Labels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Labels_MetaData), NewProp_Labels_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawLabelsAroundPolygon_Parms, ZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOrder_MetaData), NewProp_ZOrder_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::NewProp_FontInfo = { "FontInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawLabelsAroundPolygon_Parms, FontInfo), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FontInfo_MetaData), NewProp_FontInfo_MetaData) }; // 72193436
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawLabelsAroundPolygon_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextColor_MetaData), NewProp_TextColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::NewProp_TextOffset = { "TextOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawLabelsAroundPolygon_Parms, TextOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::NewProp_Labels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::NewProp_Labels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::NewProp_ZOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::NewProp_FontInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::NewProp_TextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::NewProp_TextOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGWidgetsUtility, nullptr, "DrawLabelsAroundPolygon", Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::RPGWidgetsUtility_eventDrawLabelsAroundPolygon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::RPGWidgetsUtility_eventDrawLabelsAroundPolygon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGWidgetsUtility::execDrawLabelsAroundPolygon)
{
	P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_Points);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Center);
	P_GET_TARRAY_REF(FText,Z_Param_Out_Labels);
	P_GET_PROPERTY(FIntProperty,Z_Param_ZOrder);
	P_GET_STRUCT(FSlateFontInfo,Z_Param_FontInfo);
	P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TextOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	URPGWidgetsUtility::DrawLabelsAroundPolygon(Z_Param_Out_Context,Z_Param_Out_Points,Z_Param_Out_Center,Z_Param_Out_Labels,Z_Param_ZOrder,Z_Param_FontInfo,Z_Param_TextColor,Z_Param_TextOffset);
	P_NATIVE_END;
}
// ********** End Class URPGWidgetsUtility Function DrawLabelsAroundPolygon ************************

// ********** Begin Class URPGWidgetsUtility Function DrawPolygon **********************************
struct Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics
{
	struct RPGWidgetsUtility_eventDrawPolygon_Parms
	{
		FPaintContext Context;
		int32 NumberOfSides;
		FVector2D Radius;
		USlateBrushAsset* Brush;
		FVector2D OutCenter;
		TArray<FVector2D> OutPoints;
		int32 ZOrder;
		FLinearColor Tint;
		USlateBrushAsset* BorderBrush;
		FLinearColor BorderTint;
		float BorderThickness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|WidgetsUtility" },
		{ "CPP_Default_BorderBrush", "None" },
		{ "CPP_Default_BorderThickness", "1.000000" },
		{ "CPP_Default_BorderTint", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Tint", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_ZOrder", "0" },
		{ "ModuleRelativePath", "Public/UI/RPGWidgetsUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tint_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderTint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfSides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Brush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCenter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BorderBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderTint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BorderThickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawPolygon_Parms, Context), Z_Construct_UScriptStruct_FPaintContext, METADATA_PARAMS(0, nullptr) }; // 668724891
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::NewProp_NumberOfSides = { "NumberOfSides", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawPolygon_Parms, NumberOfSides), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawPolygon_Parms, Radius), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawPolygon_Parms, Brush), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::NewProp_OutCenter = { "OutCenter", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawPolygon_Parms, OutCenter), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawPolygon_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawPolygon_Parms, ZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOrder_MetaData), NewProp_ZOrder_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::NewProp_Tint = { "Tint", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawPolygon_Parms, Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tint_MetaData), NewProp_Tint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::NewProp_BorderBrush = { "BorderBrush", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawPolygon_Parms, BorderBrush), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::NewProp_BorderTint = { "BorderTint", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawPolygon_Parms, BorderTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderTint_MetaData), NewProp_BorderTint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::NewProp_BorderThickness = { "BorderThickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawPolygon_Parms, BorderThickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::NewProp_NumberOfSides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::NewProp_Brush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::NewProp_OutCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::NewProp_OutPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::NewProp_OutPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::NewProp_ZOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::NewProp_Tint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::NewProp_BorderBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::NewProp_BorderTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::NewProp_BorderThickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGWidgetsUtility, nullptr, "DrawPolygon", Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::RPGWidgetsUtility_eventDrawPolygon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::RPGWidgetsUtility_eventDrawPolygon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGWidgetsUtility::execDrawPolygon)
{
	P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfSides);
	P_GET_STRUCT(FVector2D,Z_Param_Radius);
	P_GET_OBJECT(USlateBrushAsset,Z_Param_Brush);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutCenter);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_OutPoints);
	P_GET_PROPERTY(FIntProperty,Z_Param_ZOrder);
	P_GET_STRUCT(FLinearColor,Z_Param_Tint);
	P_GET_OBJECT(USlateBrushAsset,Z_Param_BorderBrush);
	P_GET_STRUCT(FLinearColor,Z_Param_BorderTint);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BorderThickness);
	P_FINISH;
	P_NATIVE_BEGIN;
	URPGWidgetsUtility::DrawPolygon(Z_Param_Out_Context,Z_Param_NumberOfSides,Z_Param_Radius,Z_Param_Brush,Z_Param_Out_OutCenter,Z_Param_Out_OutPoints,Z_Param_ZOrder,Z_Param_Tint,Z_Param_BorderBrush,Z_Param_BorderTint,Z_Param_BorderThickness);
	P_NATIVE_END;
}
// ********** End Class URPGWidgetsUtility Function DrawPolygon ************************************

// ********** Begin Class URPGWidgetsUtility Function DrawPolygonWithProgress **********************
struct Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics
{
	struct RPGWidgetsUtility_eventDrawPolygonWithProgress_Parms
	{
		FPaintContext Context;
		int32 NumberOfSides;
		FVector2D Radius;
		TArray<float> Progresses;
		USlateBrushAsset* Brush;
		FVector2D OutCenter;
		TArray<FVector2D> OutPoints;
		int32 ZOrder;
		FLinearColor Tint;
		USlateBrushAsset* BorderBrush;
		FLinearColor BorderTint;
		float BorderThickness;
		float MinShrink;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|WidgetsUtility" },
		{ "CPP_Default_BorderBrush", "None" },
		{ "CPP_Default_BorderThickness", "1.000000" },
		{ "CPP_Default_BorderTint", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_MinShrink", "0.200000" },
		{ "CPP_Default_Tint", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_ZOrder", "0" },
		{ "ModuleRelativePath", "Public/UI/RPGWidgetsUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tint_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderTint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfSides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Progresses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Progresses;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Brush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCenter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BorderBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderTint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BorderThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinShrink;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawPolygonWithProgress_Parms, Context), Z_Construct_UScriptStruct_FPaintContext, METADATA_PARAMS(0, nullptr) }; // 668724891
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_NumberOfSides = { "NumberOfSides", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawPolygonWithProgress_Parms, NumberOfSides), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawPolygonWithProgress_Parms, Radius), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_Progresses_Inner = { "Progresses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_Progresses = { "Progresses", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawPolygonWithProgress_Parms, Progresses), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawPolygonWithProgress_Parms, Brush), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_OutCenter = { "OutCenter", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawPolygonWithProgress_Parms, OutCenter), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawPolygonWithProgress_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawPolygonWithProgress_Parms, ZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOrder_MetaData), NewProp_ZOrder_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_Tint = { "Tint", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawPolygonWithProgress_Parms, Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tint_MetaData), NewProp_Tint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_BorderBrush = { "BorderBrush", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawPolygonWithProgress_Parms, BorderBrush), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_BorderTint = { "BorderTint", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawPolygonWithProgress_Parms, BorderTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderTint_MetaData), NewProp_BorderTint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_BorderThickness = { "BorderThickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawPolygonWithProgress_Parms, BorderThickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_MinShrink = { "MinShrink", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGWidgetsUtility_eventDrawPolygonWithProgress_Parms, MinShrink), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_NumberOfSides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_Progresses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_Progresses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_Brush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_OutCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_OutPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_OutPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_ZOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_Tint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_BorderBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_BorderTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_BorderThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::NewProp_MinShrink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGWidgetsUtility, nullptr, "DrawPolygonWithProgress", Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::RPGWidgetsUtility_eventDrawPolygonWithProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::RPGWidgetsUtility_eventDrawPolygonWithProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGWidgetsUtility::execDrawPolygonWithProgress)
{
	P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfSides);
	P_GET_STRUCT(FVector2D,Z_Param_Radius);
	P_GET_TARRAY(float,Z_Param_Progresses);
	P_GET_OBJECT(USlateBrushAsset,Z_Param_Brush);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutCenter);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_OutPoints);
	P_GET_PROPERTY(FIntProperty,Z_Param_ZOrder);
	P_GET_STRUCT(FLinearColor,Z_Param_Tint);
	P_GET_OBJECT(USlateBrushAsset,Z_Param_BorderBrush);
	P_GET_STRUCT(FLinearColor,Z_Param_BorderTint);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BorderThickness);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinShrink);
	P_FINISH;
	P_NATIVE_BEGIN;
	URPGWidgetsUtility::DrawPolygonWithProgress(Z_Param_Out_Context,Z_Param_NumberOfSides,Z_Param_Radius,Z_Param_Progresses,Z_Param_Brush,Z_Param_Out_OutCenter,Z_Param_Out_OutPoints,Z_Param_ZOrder,Z_Param_Tint,Z_Param_BorderBrush,Z_Param_BorderTint,Z_Param_BorderThickness,Z_Param_MinShrink);
	P_NATIVE_END;
}
// ********** End Class URPGWidgetsUtility Function DrawPolygonWithProgress ************************

// ********** Begin Class URPGWidgetsUtility *******************************************************
void URPGWidgetsUtility::StaticRegisterNativesURPGWidgetsUtility()
{
	UClass* Class = URPGWidgetsUtility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DrawCustomPolygon", &URPGWidgetsUtility::execDrawCustomPolygon },
		{ "DrawLabelsAroundPolygon", &URPGWidgetsUtility::execDrawLabelsAroundPolygon },
		{ "DrawPolygon", &URPGWidgetsUtility::execDrawPolygon },
		{ "DrawPolygonWithProgress", &URPGWidgetsUtility::execDrawPolygonWithProgress },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URPGWidgetsUtility;
UClass* URPGWidgetsUtility::GetPrivateStaticClass()
{
	using TClass = URPGWidgetsUtility;
	if (!Z_Registration_Info_UClass_URPGWidgetsUtility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RPGWidgetsUtility"),
			Z_Registration_Info_UClass_URPGWidgetsUtility.InnerSingleton,
			StaticRegisterNativesURPGWidgetsUtility,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_URPGWidgetsUtility.InnerSingleton;
}
UClass* Z_Construct_UClass_URPGWidgetsUtility_NoRegister()
{
	return URPGWidgetsUtility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URPGWidgetsUtility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/RPGWidgetsUtility.h" },
		{ "ModuleRelativePath", "Public/UI/RPGWidgetsUtility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGWidgetsUtility_DrawCustomPolygon, "DrawCustomPolygon" }, // 1777992316
		{ &Z_Construct_UFunction_URPGWidgetsUtility_DrawLabelsAroundPolygon, "DrawLabelsAroundPolygon" }, // 67323518
		{ &Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygon, "DrawPolygon" }, // 4146326684
		{ &Z_Construct_UFunction_URPGWidgetsUtility_DrawPolygonWithProgress, "DrawPolygonWithProgress" }, // 2737909466
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGWidgetsUtility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URPGWidgetsUtility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGWidgetsUtility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGWidgetsUtility_Statics::ClassParams = {
	&URPGWidgetsUtility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGWidgetsUtility_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGWidgetsUtility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URPGWidgetsUtility()
{
	if (!Z_Registration_Info_UClass_URPGWidgetsUtility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGWidgetsUtility.OuterSingleton, Z_Construct_UClass_URPGWidgetsUtility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGWidgetsUtility.OuterSingleton;
}
URPGWidgetsUtility::URPGWidgetsUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URPGWidgetsUtility);
URPGWidgetsUtility::~URPGWidgetsUtility() {}
// ********** End Class URPGWidgetsUtility *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_UI_RPGWidgetsUtility_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGWidgetsUtility, URPGWidgetsUtility::StaticClass, TEXT("URPGWidgetsUtility"), &Z_Registration_Info_UClass_URPGWidgetsUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGWidgetsUtility), 2942177629U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_UI_RPGWidgetsUtility_h__Script_RPGSystem_984018465(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_UI_RPGWidgetsUtility_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_UI_RPGWidgetsUtility_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
