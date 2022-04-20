// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrianglePlugin/Public/TriangulateDemoComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriangulateDemoComponent() {}
// Cross Module References
	TRIANGLEPLUGIN_API UClass* Z_Construct_UClass_UTriangulateDemoComponent_NoRegister();
	TRIANGLEPLUGIN_API UClass* Z_Construct_UClass_UTriangulateDemoComponent();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent();
	UPackage* Z_Construct_UPackage__Script_TrianglePlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TRIANGLEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTriangulateContour();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTriangulateDemoComponent::execCreateMeshWithHoles)
	{
		P_GET_TARRAY_REF(FTriangulateContour,Z_Param_Out_OuterContour);
		P_GET_TARRAY_REF(FTriangulateContour,Z_Param_Out_InnerContour);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateMeshWithHoles(Z_Param_Out_OuterContour,Z_Param_Out_InnerContour);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriangulateDemoComponent::execCreateMesh)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateMesh(Z_Param_Out_Points);
		P_NATIVE_END;
	}
	void UTriangulateDemoComponent::StaticRegisterNativesUTriangulateDemoComponent()
	{
		UClass* Class = UTriangulateDemoComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateMesh", &UTriangulateDemoComponent::execCreateMesh },
			{ "CreateMeshWithHoles", &UTriangulateDemoComponent::execCreateMeshWithHoles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriangulateDemoComponent_CreateMesh_Statics
	{
		struct TriangulateDemoComponent_eventCreateMesh_Parms
		{
			TArray<FVector> Points;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriangulateDemoComponent_CreateMesh_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriangulateDemoComponent_CreateMesh_Statics::NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriangulateDemoComponent_CreateMesh_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriangulateDemoComponent_eventCreateMesh_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriangulateDemoComponent_CreateMesh_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangulateDemoComponent_CreateMesh_Statics::NewProp_Points_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriangulateDemoComponent_CreateMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangulateDemoComponent_CreateMesh_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangulateDemoComponent_CreateMesh_Statics::NewProp_Points,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriangulateDemoComponent_CreateMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Triangulate" },
		{ "Comment", "/**\n\x09 * @brief create mesh from an array contour points\n\x09 * @param Points array vertex points\n\x09 */" },
		{ "ModuleRelativePath", "Public/TriangulateDemoComponent.h" },
		{ "ToolTip", "@brief create mesh from an array contour points\n@param Points array vertex points" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriangulateDemoComponent_CreateMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriangulateDemoComponent, nullptr, "CreateMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTriangulateDemoComponent_CreateMesh_Statics::TriangulateDemoComponent_eventCreateMesh_Parms), Z_Construct_UFunction_UTriangulateDemoComponent_CreateMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangulateDemoComponent_CreateMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriangulateDemoComponent_CreateMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangulateDemoComponent_CreateMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriangulateDemoComponent_CreateMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriangulateDemoComponent_CreateMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriangulateDemoComponent_CreateMeshWithHoles_Statics
	{
		struct TriangulateDemoComponent_eventCreateMeshWithHoles_Parms
		{
			TArray<FTriangulateContour> OuterContour;
			TArray<FTriangulateContour> InnerContour;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OuterContour_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterContour_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OuterContour;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InnerContour_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerContour_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InnerContour;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriangulateDemoComponent_CreateMeshWithHoles_Statics::NewProp_OuterContour_Inner = { "OuterContour", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTriangulateContour, METADATA_PARAMS(nullptr, 0) }; // 3472362958
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriangulateDemoComponent_CreateMeshWithHoles_Statics::NewProp_OuterContour_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriangulateDemoComponent_CreateMeshWithHoles_Statics::NewProp_OuterContour = { "OuterContour", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriangulateDemoComponent_eventCreateMeshWithHoles_Parms, OuterContour), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriangulateDemoComponent_CreateMeshWithHoles_Statics::NewProp_OuterContour_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangulateDemoComponent_CreateMeshWithHoles_Statics::NewProp_OuterContour_MetaData)) }; // 3472362958
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriangulateDemoComponent_CreateMeshWithHoles_Statics::NewProp_InnerContour_Inner = { "InnerContour", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTriangulateContour, METADATA_PARAMS(nullptr, 0) }; // 3472362958
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriangulateDemoComponent_CreateMeshWithHoles_Statics::NewProp_InnerContour_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriangulateDemoComponent_CreateMeshWithHoles_Statics::NewProp_InnerContour = { "InnerContour", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriangulateDemoComponent_eventCreateMeshWithHoles_Parms, InnerContour), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriangulateDemoComponent_CreateMeshWithHoles_Statics::NewProp_InnerContour_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangulateDemoComponent_CreateMeshWithHoles_Statics::NewProp_InnerContour_MetaData)) }; // 3472362958
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriangulateDemoComponent_CreateMeshWithHoles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangulateDemoComponent_CreateMeshWithHoles_Statics::NewProp_OuterContour_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangulateDemoComponent_CreateMeshWithHoles_Statics::NewProp_OuterContour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangulateDemoComponent_CreateMeshWithHoles_Statics::NewProp_InnerContour_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangulateDemoComponent_CreateMeshWithHoles_Statics::NewProp_InnerContour,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriangulateDemoComponent_CreateMeshWithHoles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Triangulate" },
		{ "Comment", "/**\n\x09 * @brief  create multipolygon mesh from an array of inner contours  and array of outer contours\n\x09 * @param OuterContour array of outer contours\n\x09 * @param InnerContour array of inner contours\n\x09 */" },
		{ "ModuleRelativePath", "Public/TriangulateDemoComponent.h" },
		{ "ToolTip", "@brief  create multipolygon mesh from an array of inner contours  and array of outer contours\n@param OuterContour array of outer contours\n@param InnerContour array of inner contours" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriangulateDemoComponent_CreateMeshWithHoles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriangulateDemoComponent, nullptr, "CreateMeshWithHoles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTriangulateDemoComponent_CreateMeshWithHoles_Statics::TriangulateDemoComponent_eventCreateMeshWithHoles_Parms), Z_Construct_UFunction_UTriangulateDemoComponent_CreateMeshWithHoles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangulateDemoComponent_CreateMeshWithHoles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriangulateDemoComponent_CreateMeshWithHoles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriangulateDemoComponent_CreateMeshWithHoles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriangulateDemoComponent_CreateMeshWithHoles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriangulateDemoComponent_CreateMeshWithHoles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTriangulateDemoComponent);
	UClass* Z_Construct_UClass_UTriangulateDemoComponent_NoRegister()
	{
		return UTriangulateDemoComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTriangulateDemoComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectPolygonMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectPolygonMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriangulateDemoComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProceduralMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TrianglePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriangulateDemoComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriangulateDemoComponent_CreateMesh, "CreateMesh" }, // 1076616483
		{ &Z_Construct_UFunction_UTriangulateDemoComponent_CreateMeshWithHoles, "CreateMeshWithHoles" }, // 82970606
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriangulateDemoComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object LOD Mobility Trigger" },
		{ "IncludePath", "TriangulateDemoComponent.h" },
		{ "ModuleRelativePath", "Public/TriangulateDemoComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriangulateDemoComponent_Statics::NewProp_ProjectPolygonMaterial_MetaData[] = {
		{ "Category", "Triangulate" },
		{ "Comment", "/**\n\x09 * @brief  Polygon material\n\x09 */" },
		{ "ModuleRelativePath", "Public/TriangulateDemoComponent.h" },
		{ "ToolTip", "@brief  Polygon material" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriangulateDemoComponent_Statics::NewProp_ProjectPolygonMaterial = { "ProjectPolygonMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriangulateDemoComponent, ProjectPolygonMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriangulateDemoComponent_Statics::NewProp_ProjectPolygonMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriangulateDemoComponent_Statics::NewProp_ProjectPolygonMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriangulateDemoComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriangulateDemoComponent_Statics::NewProp_ProjectPolygonMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriangulateDemoComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriangulateDemoComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTriangulateDemoComponent_Statics::ClassParams = {
		&UTriangulateDemoComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTriangulateDemoComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriangulateDemoComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTriangulateDemoComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriangulateDemoComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriangulateDemoComponent()
	{
		if (!Z_Registration_Info_UClass_UTriangulateDemoComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTriangulateDemoComponent.OuterSingleton, Z_Construct_UClass_UTriangulateDemoComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTriangulateDemoComponent.OuterSingleton;
	}
	template<> TRIANGLEPLUGIN_API UClass* StaticClass<UTriangulateDemoComponent>()
	{
		return UTriangulateDemoComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriangulateDemoComponent);
	struct Z_CompiledInDeferFile_FID_TileMap_Plugins_TrianglePlugin_Source_TrianglePlugin_Public_TriangulateDemoComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TileMap_Plugins_TrianglePlugin_Source_TrianglePlugin_Public_TriangulateDemoComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTriangulateDemoComponent, UTriangulateDemoComponent::StaticClass, TEXT("UTriangulateDemoComponent"), &Z_Registration_Info_UClass_UTriangulateDemoComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTriangulateDemoComponent), 2134838323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TileMap_Plugins_TrianglePlugin_Source_TrianglePlugin_Public_TriangulateDemoComponent_h_3119102516(TEXT("/Script/TrianglePlugin"),
		Z_CompiledInDeferFile_FID_TileMap_Plugins_TrianglePlugin_Source_TrianglePlugin_Public_TriangulateDemoComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TileMap_Plugins_TrianglePlugin_Source_TrianglePlugin_Public_TriangulateDemoComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
