// Fill out your copyright notice in the Description page of Project Settings.


// ReSharper disable IdentifierTypo
#include "TriangulateDemoComponent.h"


void UTriangulateDemoComponent::CreateMesh(const TArray<FVector>& Points)
{

	TArray<FVector> TriangulatePoints;
	TArray<int> Triangles;
	
	
	TArray<FVector> Vertices;
	TArray<int> Indices;
	TArray<FVector> Normales;
	TArray<FVector2D> UV0;
	TArray<FColor> VertexColors;
	TArray<FProcMeshTangent> Tangents;
	
		
	UTriangulateFunctionLibrary::Triangulate(Points,TriangulatePoints,Triangles);

	//UBuildingLoaderHelper::Triangulate(points, nodes, triangles);

	const int NumPoints = Vertices.Num();
	for (const auto& Node : TriangulatePoints)
	{
		auto v = Node;
		v.X = v.X - GetRelativeLocation().X;
		v.Y = v.Y - GetRelativeLocation().Y;
		v.Z = 0;
		Vertices.Add(v);
		Normales.Add(FVector::UpVector);
	}


	UV0.Add(FVector2D(0, 0));
	UV0.Add(FVector2D(0, 1));
	UV0.Add(FVector2D(1, 1));
	UV0.Add(FVector2D(1, 0));
	

	for (const auto& Ind : Triangles)
	{
		Indices.Add(NumPoints + Ind);
	}

	Tangents.Init(FProcMeshTangent(), Normales.Num());
	VertexColors.Init(FColor(0.5, 0.5, 0.5), Normales.Num());

	const auto SectionIndex = GetNumSections();
	CreateMeshSection(SectionIndex, Vertices, Indices, Normales, UV0, VertexColors, Tangents, false);
	SetMaterial(SectionIndex, ProjectPolygonMaterial);
}

void UTriangulateDemoComponent::CreateMeshWithHoles(const TArray<FTriangulateContour>& OuterContour, const TArray<FTriangulateContour>& InnerContour)
{
	TArray<FVector> TriangulatePoints;
	TArray<int> Triangles;
	
	
	TArray<FVector> Vertices;
	TArray<int> Indices;
	TArray<FVector> Normales;
	TArray<FVector2D> UV0;
	TArray<FColor> VertexColors;
	TArray<FProcMeshTangent> Tangents;
	
	
	UTriangulateFunctionLibrary::TriangulateWithHoles(OuterContour,InnerContour,TriangulatePoints,Triangles);

	//UBuildingLoaderHelper::Triangulate(points, nodes, triangles);

	const int NumPoints = Vertices.Num();
	for (const auto& Node : TriangulatePoints)
	{
		auto v = Node;
		v.X = v.X - GetRelativeLocation().X;
		v.Y = v.Y - GetRelativeLocation().Y;
		v.Z = 0;
		Vertices.Add(v);
		Normales.Add(FVector::UpVector);
	}


	UV0.Add(FVector2D(0, 0));
	UV0.Add(FVector2D(0, 1));
	UV0.Add(FVector2D(1, 1));
	UV0.Add(FVector2D(1, 0));
	

	for (const auto& Ind : Triangles)
	{
		Indices.Add(NumPoints + Ind);
	}

	Tangents.Init(FProcMeshTangent(), Normales.Num());
	VertexColors.Init(FColor(0.5, 0.5, 0.5), Normales.Num());

	const auto SectionIndex = GetNumSections();
	CreateMeshSection(SectionIndex, Vertices, Indices, Normales, UV0, VertexColors, Tangents, false);
	SetMaterial(SectionIndex, ProjectPolygonMaterial);
}