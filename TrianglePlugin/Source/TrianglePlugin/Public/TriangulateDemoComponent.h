// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"
#include "TriangulateFunctionLibrary.h"
#include "TriangulateDemoComponent.generated.h"

/**
 * 
 */
UCLASS(meta=(BlueprintSpawnableComponent))
class TRIANGLEPLUGIN_API UTriangulateDemoComponent : public UProceduralMeshComponent
{
	GENERATED_BODY()

public:
	/**
	 * @brief create mesh from an array contour points
	 * @param Points array vertex points
	 */
	UFUNCTION(BlueprintCallable, Category="Triangulate")
		void CreateMesh(const TArray<FVector>& Points);
	
	/**
	 * @brief  create multipolygon mesh from an array of inner contours  and array of outer contours
	 * @param OuterContour array of outer contours
	 * @param InnerContour array of inner contours
	 */
	UFUNCTION(BlueprintCallable, Category="Triangulate")
		void CreateMeshWithHoles(const TArray<FTriangulateContour>& OuterContour, const TArray<FTriangulateContour>& InnerContour);
		
	/**
	 * @brief  Polygon material
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Triangulate")
	UMaterialInterface* ProjectPolygonMaterial;	
};
