// Fill out your copyright notice in the Description page of Project Settings.


#include "TriangulateFunctionLibrary.h"

#include "Polyline3.h"
#include "triangle/triangulate.h"

int FTriangulateContour::LeftmostIndex() const 
{
	int minInd = 0;
	float minX = Points->GetData()[0].X;
	for (int i = 1; i < Points->Num(); i++)
	{
		if (Points->GetData()[i].X < minX)
		{
			minInd = i;
			minX = Points->GetData()[i].X;
		}
	}
	return minInd;
}

void UTriangulateFunctionLibrary::Triangulate(const TArray<FVector>& DataPoints, TArray<FVector>& Points, TArray<int>& Triangles)
{
	Eigen::MatrixXd V;
	Eigen::MatrixXi E;
	Eigen::MatrixXd H;

	Eigen::MatrixXd V2;
	Eigen::MatrixXi F2;

	TArray<float> inPoints;
	TArray<int> inEdges;
	TArray<float> holes;
	Points.Empty();
	Triangles.Empty();
	TSet<TPair<int, int>> addEdges;
	
	//Add first point
	Points.Add(DataPoints[0]);
	inPoints.Add(DataPoints[0].X);
	inPoints.Add(DataPoints[0].Y);

	
	for (int i = 1; i < DataPoints.Num(); i++) {
		auto node = DataPoints[i];
		
		Points.Add(node);
		inPoints.Add(node.X);
		inPoints.Add(node.Y);

		inEdges.Add(i-1);
		inEdges.Add(i);
		
	}
	if (DataPoints[0] != DataPoints.Last())
	{
		inEdges.Add(DataPoints.Num() - 1);
		inEdges.Add(0);
	}

	if (inPoints.Num() == 0) return;
	V.resize(inPoints.Num() / 2, 2);
	E.resize(inEdges.Num() / 2, 2);
	H.resize(holes.Num() / 2, 2);
	for (int i = 0; i < inPoints.Num(); i += 2) {
		V(i / 2, 0) = inPoints[i];
		V(i / 2, 1) = inPoints[i + 1];
	}
	for (int i = 0; i < inEdges.Num(); i += 2) {
		E(i / 2, 0) = inEdges[i];
		E(i / 2, 1) = inEdges[i + 1];
	}
	for (int i = 0; i < holes.Num(); i += 2) {
		H(i / 2, 0) = holes[i];
		H(i / 2, 1) = holes[i + 1];
	}

	if (inPoints.Num() < 6) return;

	// Triangulate the interior
	igl::triangle::triangulate(V, E, H, "", V2, F2);

	Points.Empty();

	for (int i = 0; i < V2.rows(); i++)
	{
		Points.Add(FVector(V2(i, 0), V2(i, 1), 0));
	}

	for (int i = 0; i < F2.rows(); i++)
	{
		Triangles.Add(F2(i, 0));
		Triangles.Add(F2(i, 2));
		Triangles.Add(F2(i, 1));
	}
}

void UTriangulateFunctionLibrary::MakeTriangulateContour(const TArray<FVector>& Points, FTriangulateContour& Contour)
{
	Contour = FTriangulateContour{&Points};
	return;
}

void UTriangulateFunctionLibrary::TriangulateWithHoles(const TArray<FTriangulateContour>& outer, const TArray<FTriangulateContour>& inner,
                                                       TArray<FVector>& points, TArray<int>& triangles, const FString& flags)
{

	Eigen::MatrixXd V;
	Eigen::MatrixXi E;
	Eigen::MatrixXd H;

	Eigen::MatrixXd V2;
	Eigen::MatrixXi F2;

	TArray<float> inPoints;
	TArray<int> inEdges;
	TArray<float> holes;
	points.Empty();
	triangles.Empty();
	TSet<TPair<int, int>> addEdges;
	TMap<FVector, int> nodeIds;
	int nodeId = 0;
	int prevId = -1;
	for (auto& way : outer)
	{
		int firstId = -1;
		for (int i = 0; i < way.Points->Num(); i++) {
			const FVector3d& node = way.Points->GetData()[i];
			
			if (!nodeIds.Contains(node)) {
				points.Add(node);
				nodeIds.Add(node, nodeId++);
				inPoints.Add(node.X);
				inPoints.Add(node.Y);
			}
			int id = nodeIds[node];
			if (i == 0) firstId = id;

			if (i > 0) {
				if (prevId != id) {
					if (!addEdges.Contains(TPair<int, int>(prevId, id))) {
						inEdges.Add(prevId);
						inEdges.Add(id);
						addEdges.Add(TPair<int, int>(prevId, id));
					}
				}
			}
			prevId = id;					
		}
		if (prevId != firstId) {
			if (!addEdges.Contains(TPair<int, int>(prevId, firstId))) {
				inEdges.Add(prevId);
				inEdges.Add(firstId);
				addEdges.Add(TPair<int, int>(prevId, firstId));
			}
		}
	}	
	for (const auto& way : inner)
	{
		int firstId = -1;
		for (int i = 0; i < way.Points->Num(); i++) {
			auto node = way.Points->GetData()[i];
			if (i == 0 || !(node - way.Points->GetData()[0]).IsNearlyZero()) {
				points.Add(node);
				
				if (!nodeIds.Contains(node)) {
					nodeIds.Add(node, nodeId++);
					inPoints.Add(node.X);
					inPoints.Add(node.Y);

				}
				int id = nodeIds[node];
				if (i == 0) firstId = id;

				if (i > 0) {
					if (prevId != id) {
						if (!addEdges.Contains(TPair<int, int>(prevId, id))) {
							inEdges.Add(prevId);
							inEdges.Add(id);
							addEdges.Add(TPair<int, int>(prevId, id));
						}
					}
				}
				prevId = id;
			}
		}

		if (prevId != firstId)
		{
			if (!addEdges.Contains(TPair<int, int>(prevId, firstId)))
			{
				inEdges.Add(prevId);
				inEdges.Add(firstId);
				addEdges.Add(TPair<int, int>(prevId, firstId));
			}
		}
		
		//add hole
		int ind = way.LeftmostIndex();
		int indMinus = (ind - 1 + way.Points->Num()) % way.Points->Num();
		int indPlus = (ind + 1 + way.Points->Num()) % way.Points->Num();
		while (way.Points->GetData()[indMinus].Equals(way.Points->GetData()[ind]) && indMinus != ind) indMinus = (indMinus - 1 + way.Points->Num()) % way.Points->Num();
		while (way.Points->GetData()[indPlus].Equals(way.Points->GetData()[ind]) && indPlus != ind) indPlus = (indPlus + 1 + way.Points->Num()) % way.Points->Num();
		auto delta = (way.Points->GetData()[indMinus] + way.Points->GetData()[indPlus] - way.Points->GetData()[ind] * 2).GetSafeNormal2D() * 10.0f;
		auto p = way.Points->GetData()[ind] + delta;
		holes.Add(p.X);
		holes.Add(p.Y);
	}	

	if (inPoints.Num() == 0) return;
	V.resize(inPoints.Num() / 2, 2);
	E.resize(inEdges.Num() / 2, 2);	
	H.resize(holes.Num() / 2, 2);
	for (int i = 0; i < inPoints.Num(); i += 2) {
		V(i/2, 0) = inPoints[i];
		V(i/2, 1) = inPoints[i + 1];			
	}
	for (int i = 0; i < inEdges.Num(); i += 2) {
		E(i / 2, 0) = inEdges[i];
		E(i / 2, 1) = inEdges[i + 1];
	}
	for (int i = 0; i < holes.Num(); i += 2) {
		H(i / 2, 0) = holes[i];
		H(i / 2, 1) = holes[i + 1];
	}	

	if (inPoints.Num() < 6) return;
	// Triangulate the interior
	igl::triangle::triangulate(V, E, H, std::string(TCHAR_TO_UTF8(*flags)), V2, F2);

	points.Empty();

	for (int i = 0; i < V2.rows(); i++)
	{
		points.Add(FVector(V2(i, 0), V2(i, 1), 0));
	}
	
	for (int i = 0; i < F2.rows(); i++)
	{				
		triangles.Add(F2(i, 0));
		triangles.Add(F2(i, 2));
		triangles.Add(F2(i, 1));
	}
}


