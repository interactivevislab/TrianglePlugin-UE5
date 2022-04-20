// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrianglePlugin/Public/TriangulateFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriangulateFunctionLibrary() {}
// Cross Module References
	TRIANGLEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTriangulateContour();
	UPackage* Z_Construct_UPackage__Script_TrianglePlugin();
	TRIANGLEPLUGIN_API UClass* Z_Construct_UClass_UTriangulateFunctionLibrary_NoRegister();
	TRIANGLEPLUGIN_API UClass* Z_Construct_UClass_UTriangulateFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TriangulateContour;
class UScriptStruct* FTriangulateContour::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TriangulateContour.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TriangulateContour.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTriangulateContour, Z_Construct_UPackage__Script_TrianglePlugin(), TEXT("TriangulateContour"));
	}
	return Z_Registration_Info_UScriptStruct_TriangulateContour.OuterSingleton;
}
template<> TRIANGLEPLUGIN_API UScriptStruct* StaticStruct<FTriangulateContour>()
{
	return FTriangulateContour::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTriangulateContour_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTriangulateContour_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * struct for mesh contour\n */" },
		{ "ModuleRelativePath", "Public/TriangulateFunctionLibrary.h" },
		{ "ToolTip", "struct for mesh contour" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTriangulateContour_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTriangulateContour>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTriangulateContour_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TrianglePlugin,
		nullptr,
		&NewStructOps,
		"TriangulateContour",
		sizeof(FTriangulateContour),
		alignof(FTriangulateContour),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTriangulateContour_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriangulateContour_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTriangulateContour()
	{
		if (!Z_Registration_Info_UScriptStruct_TriangulateContour.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TriangulateContour.InnerSingleton, Z_Construct_UScriptStruct_FTriangulateContour_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TriangulateContour.InnerSingleton;
	}
	DEFINE_FUNCTION(UTriangulateFunctionLibrary::execTriangulateWithHoles)
	{
		P_GET_TARRAY_REF(FTriangulateContour,Z_Param_Out_outer);
		P_GET_TARRAY_REF(FTriangulateContour,Z_Param_Out_inner);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_points);
		P_GET_TARRAY_REF(int32,Z_Param_Out_triangles);
		P_GET_PROPERTY(FStrProperty,Z_Param_flags);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTriangulateFunctionLibrary::TriangulateWithHoles(Z_Param_Out_outer,Z_Param_Out_inner,Z_Param_Out_points,Z_Param_Out_triangles,Z_Param_flags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriangulateFunctionLibrary::execMakeTriangulateContour)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points);
		P_GET_STRUCT_REF(FTriangulateContour,Z_Param_Out_Contour);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTriangulateFunctionLibrary::MakeTriangulateContour(Z_Param_Out_Points,Z_Param_Out_Contour);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriangulateFunctionLibrary::execTriangulate)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_DataPoints);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTriangulateFunctionLibrary::Triangulate(Z_Param_Out_DataPoints,Z_Param_Out_Points,Z_Param_Out_Triangles);
		P_NATIVE_END;
	}
	void UTriangulateFunctionLibrary::StaticRegisterNativesUTriangulateFunctionLibrary()
	{
		UClass* Class = UTriangulateFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MakeTriangulateContour", &UTriangulateFunctionLibrary::execMakeTriangulateContour },
			{ "Triangulate", &UTriangulateFunctionLibrary::execTriangulate },
			{ "TriangulateWithHoles", &UTriangulateFunctionLibrary::execTriangulateWithHoles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriangulateFunctionLibrary_MakeTriangulateContour_Statics
	{
		struct TriangulateFunctionLibrary_eventMakeTriangulateContour_Parms
		{
			TArray<FVector> Points;
			FTriangulateContour Contour;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Contour;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriangulateFunctionLibrary_MakeTriangulateContour_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriangulateFunctionLibrary_MakeTriangulateContour_Statics::NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriangulateFunctionLibrary_MakeTriangulateContour_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriangulateFunctionLibrary_eventMakeTriangulateContour_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriangulateFunctionLibrary_MakeTriangulateContour_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangulateFunctionLibrary_MakeTriangulateContour_Statics::NewProp_Points_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriangulateFunctionLibrary_MakeTriangulateContour_Statics::NewProp_Contour = { "Contour", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriangulateFunctionLibrary_eventMakeTriangulateContour_Parms, Contour), Z_Construct_UScriptStruct_FTriangulateContour, METADATA_PARAMS(nullptr, 0) }; // 3472362958
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriangulateFunctionLibrary_MakeTriangulateContour_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangulateFunctionLibrary_MakeTriangulateContour_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangulateFunctionLibrary_MakeTriangulateContour_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangulateFunctionLibrary_MakeTriangulateContour_Statics::NewProp_Contour,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriangulateFunctionLibrary_MakeTriangulateContour_Statics::Function_MetaDataParams[] = {
		{ "Category", "Triangulate" },
		{ "Comment", "/**\n\x09 * @brief Make FTriangulateContour from contour points\n\x09 * @param Points array contour points\n\x09 * @param Contour FTriangulateContour from contour points\n\x09 */" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/TriangulateFunctionLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "@brief Make FTriangulateContour from contour points\n@param Points array contour points\n@param Contour FTriangulateContour from contour points" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriangulateFunctionLibrary_MakeTriangulateContour_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriangulateFunctionLibrary, nullptr, "MakeTriangulateContour", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTriangulateFunctionLibrary_MakeTriangulateContour_Statics::TriangulateFunctionLibrary_eventMakeTriangulateContour_Parms), Z_Construct_UFunction_UTriangulateFunctionLibrary_MakeTriangulateContour_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangulateFunctionLibrary_MakeTriangulateContour_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriangulateFunctionLibrary_MakeTriangulateContour_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangulateFunctionLibrary_MakeTriangulateContour_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriangulateFunctionLibrary_MakeTriangulateContour()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriangulateFunctionLibrary_MakeTriangulateContour_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriangulateFunctionLibrary_Triangulate_Statics
	{
		struct TriangulateFunctionLibrary_eventTriangulate_Parms
		{
			TArray<FVector> DataPoints;
			TArray<FVector> Points;
			TArray<int32> Triangles;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataPoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Triangles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriangulateFunctionLibrary_Triangulate_Statics::NewProp_DataPoints_Inner = { "DataPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriangulateFunctionLibrary_Triangulate_Statics::NewProp_DataPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriangulateFunctionLibrary_Triangulate_Statics::NewProp_DataPoints = { "DataPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriangulateFunctionLibrary_eventTriangulate_Parms, DataPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriangulateFunctionLibrary_Triangulate_Statics::NewProp_DataPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangulateFunctionLibrary_Triangulate_Statics::NewProp_DataPoints_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriangulateFunctionLibrary_Triangulate_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriangulateFunctionLibrary_Triangulate_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriangulateFunctionLibrary_eventTriangulate_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTriangulateFunctionLibrary_Triangulate_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriangulateFunctionLibrary_Triangulate_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriangulateFunctionLibrary_eventTriangulate_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriangulateFunctionLibrary_Triangulate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangulateFunctionLibrary_Triangulate_Statics::NewProp_DataPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangulateFunctionLibrary_Triangulate_Statics::NewProp_DataPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangulateFunctionLibrary_Triangulate_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangulateFunctionLibrary_Triangulate_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangulateFunctionLibrary_Triangulate_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangulateFunctionLibrary_Triangulate_Statics::NewProp_Triangles,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriangulateFunctionLibrary_Triangulate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Triangulate" },
		{ "Comment", "/**\n\x09 * @brief calc Vertex and triangles array of mesh from contour points\n\x09 * @param DataPoints  array contour points\n\x09 * @param Points array vertex points after triangulate\n\x09 * @param Triangles array triangles points after triangulate\n\x09 */" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/TriangulateFunctionLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "@brief calc Vertex and triangles array of mesh from contour points\n@param DataPoints  array contour points\n@param Points array vertex points after triangulate\n@param Triangles array triangles points after triangulate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriangulateFunctionLibrary_Triangulate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriangulateFunctionLibrary, nullptr, "Triangulate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTriangulateFunctionLibrary_Triangulate_Statics::TriangulateFunctionLibrary_eventTriangulate_Parms), Z_Construct_UFunction_UTriangulateFunctionLibrary_Triangulate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangulateFunctionLibrary_Triangulate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriangulateFunctionLibrary_Triangulate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangulateFunctionLibrary_Triangulate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriangulateFunctionLibrary_Triangulate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriangulateFunctionLibrary_Triangulate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics
	{
		struct TriangulateFunctionLibrary_eventTriangulateWithHoles_Parms
		{
			TArray<FTriangulateContour> outer;
			TArray<FTriangulateContour> inner;
			TArray<FVector> points;
			TArray<int32> triangles;
			FString flags;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_outer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_outer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_outer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_inner_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inner_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_inner;
		static const UECodeGen_Private::FStructPropertyParams NewProp_points_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_points;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_triangles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_triangles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_flags_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_flags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::NewProp_outer_Inner = { "outer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTriangulateContour, METADATA_PARAMS(nullptr, 0) }; // 3472362958
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::NewProp_outer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::NewProp_outer = { "outer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriangulateFunctionLibrary_eventTriangulateWithHoles_Parms, outer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::NewProp_outer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::NewProp_outer_MetaData)) }; // 3472362958
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::NewProp_inner_Inner = { "inner", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTriangulateContour, METADATA_PARAMS(nullptr, 0) }; // 3472362958
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::NewProp_inner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::NewProp_inner = { "inner", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriangulateFunctionLibrary_eventTriangulateWithHoles_Parms, inner), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::NewProp_inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::NewProp_inner_MetaData)) }; // 3472362958
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::NewProp_points_Inner = { "points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::NewProp_points = { "points", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriangulateFunctionLibrary_eventTriangulateWithHoles_Parms, points), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::NewProp_triangles_Inner = { "triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::NewProp_triangles = { "triangles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriangulateFunctionLibrary_eventTriangulateWithHoles_Parms, triangles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::NewProp_flags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::NewProp_flags = { "flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriangulateFunctionLibrary_eventTriangulateWithHoles_Parms, flags), METADATA_PARAMS(Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::NewProp_flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::NewProp_flags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::NewProp_outer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::NewProp_outer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::NewProp_inner_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::NewProp_inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::NewProp_points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::NewProp_points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::NewProp_triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::NewProp_triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::NewProp_flags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Triangulate" },
		{ "Comment", "/**\n\x09 * @brief calc Vertex and triangles array of mesh from  array of outer contours and array of inner contours\n\x09 * @param outer array of outer contours\n\x09 * @param inner array of inner contours\n\x09 * @param points array vertex points after triangulate\n\x09 * @param triangles array triangles points after triangulate\n\x09 * @param flags flags for igl lib\n\x09 */" },
		{ "CPP_Default_flags", "" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/TriangulateFunctionLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "@brief calc Vertex and triangles array of mesh from  array of outer contours and array of inner contours\n@param outer array of outer contours\n@param inner array of inner contours\n@param points array vertex points after triangulate\n@param triangles array triangles points after triangulate\n@param flags flags for igl lib" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriangulateFunctionLibrary, nullptr, "TriangulateWithHoles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::TriangulateFunctionLibrary_eventTriangulateWithHoles_Parms), Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTriangulateFunctionLibrary);
	UClass* Z_Construct_UClass_UTriangulateFunctionLibrary_NoRegister()
	{
		return UTriangulateFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTriangulateFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriangulateFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TrianglePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriangulateFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriangulateFunctionLibrary_MakeTriangulateContour, "MakeTriangulateContour" }, // 209536886
		{ &Z_Construct_UFunction_UTriangulateFunctionLibrary_Triangulate, "Triangulate" }, // 75867660
		{ &Z_Construct_UFunction_UTriangulateFunctionLibrary_TriangulateWithHoles, "TriangulateWithHoles" }, // 285945555
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriangulateFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TriangulateFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/TriangulateFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriangulateFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriangulateFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTriangulateFunctionLibrary_Statics::ClassParams = {
		&UTriangulateFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTriangulateFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriangulateFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriangulateFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UTriangulateFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTriangulateFunctionLibrary.OuterSingleton, Z_Construct_UClass_UTriangulateFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTriangulateFunctionLibrary.OuterSingleton;
	}
	template<> TRIANGLEPLUGIN_API UClass* StaticClass<UTriangulateFunctionLibrary>()
	{
		return UTriangulateFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriangulateFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_TileMap_Plugins_TrianglePlugin_Source_TrianglePlugin_Public_TriangulateFunctionLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TileMap_Plugins_TrianglePlugin_Source_TrianglePlugin_Public_TriangulateFunctionLibrary_h_Statics::ScriptStructInfo[] = {
		{ FTriangulateContour::StaticStruct, Z_Construct_UScriptStruct_FTriangulateContour_Statics::NewStructOps, TEXT("TriangulateContour"), &Z_Registration_Info_UScriptStruct_TriangulateContour, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTriangulateContour), 3472362958U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TileMap_Plugins_TrianglePlugin_Source_TrianglePlugin_Public_TriangulateFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTriangulateFunctionLibrary, UTriangulateFunctionLibrary::StaticClass, TEXT("UTriangulateFunctionLibrary"), &Z_Registration_Info_UClass_UTriangulateFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTriangulateFunctionLibrary), 3380405645U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TileMap_Plugins_TrianglePlugin_Source_TrianglePlugin_Public_TriangulateFunctionLibrary_h_339743674(TEXT("/Script/TrianglePlugin"),
		Z_CompiledInDeferFile_FID_TileMap_Plugins_TrianglePlugin_Source_TrianglePlugin_Public_TriangulateFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TileMap_Plugins_TrianglePlugin_Source_TrianglePlugin_Public_TriangulateFunctionLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_TileMap_Plugins_TrianglePlugin_Source_TrianglePlugin_Public_TriangulateFunctionLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TileMap_Plugins_TrianglePlugin_Source_TrianglePlugin_Public_TriangulateFunctionLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
