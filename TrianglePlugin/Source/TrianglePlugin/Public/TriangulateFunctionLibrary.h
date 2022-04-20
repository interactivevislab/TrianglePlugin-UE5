// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Polyline3.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TriangulateFunctionLibrary.generated.h"

using namespace UE::Geometry;

/**
 * struct for mesh contour
 */
USTRUCT(BlueprintType)
struct FTriangulateContour 
{
	GENERATED_BODY()
	
	/**
	 * @brief array of contour points
	 */
	const TArray<FVector>* Points;
	
	/**
	 * @brief calc index most left point
	 * @return  index most left point
	 */
	int LeftmostIndex() const;

	
};

UCLASS()
class TRIANGLEPLUGIN_API UTriangulateFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	
	/**
	 * @brief calc Vertex and triangles array of mesh from contour points
	 * @param DataPoints  array contour points
	 * @param Points array vertex points after triangulate
	 * @param Triangles array triangles points after triangulate
	 */
	UFUNCTION(BlueprintCallable, Category="Triangulate", meta=(Keywords="construct build", NativeMakeFunc))
	static void Triangulate(const TArray<FVector>& DataPoints, TArray<FVector>& Points, TArray<int>& Triangles);

	/**
	 * @brief Make FTriangulateContour from contour points
	 * @param Points array contour points
	 * @param Contour FTriangulateContour from contour points
	 */
	UFUNCTION(BlueprintPure, Category="Triangulate", meta=(Keywords="construct build", NativeMakeFunc))
	static void MakeTriangulateContour(const TArray<FVector>& Points, FTriangulateContour& Contour);

	/**
	 * @brief calc Vertex and triangles array of mesh from  array of outer contours and array of inner contours
	 * @param outer array of outer contours
	 * @param inner array of inner contours
	 * @param points array vertex points after triangulate
	 * @param triangles array triangles points after triangulate
	 * @param flags flags for igl lib
	 */
	UFUNCTION(BlueprintCallable, Category="Triangulate", meta=(Keywords="construct build", NativeMakeFunc))
	static void TriangulateWithHoles(const TArray<FTriangulateContour>& outer, const TArray<FTriangulateContour>& inner, TArray<FVector>& points, TArray
	                                 <int>& triangles, const FString& flags="");
private:
	
};
