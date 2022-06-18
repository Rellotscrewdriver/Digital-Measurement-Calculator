#pragma once

#include "../Include/declarations.h"
#include "../Include/parameter.h"
#define SOLUTION "\nSolution:\n"
#define FORMULA "\nFormula: "

class Solution {
public:
	double first_para;
	double second_para;
	double third_para;
	double fourth_para;

	void Shape_finder2D_Area(int ShapeNum);
	void Shape_finder2D_Perimeter(int ShapeNum);

	void Shape_finder3D_Surface_Area(int ShapeNum);
	void Shape_finder3D_Volume(int ShapeNum);
	void Shape_finder3D_Total_Surface_Area(int ShapeNum);
	void Shape_finder3D_Curved_Surface_Area(int ShapeNum);

	// template <typename RS>
	// RS Rand_Situation(RS if_situ, RS else_sit){
	// 	if(rand_god == 1){
	// 		if_situ;
	// 	} else {
 // 			else_sit;
	// 	}
	// }
private:
	//2D Shapes
	void SquareA();
	void SquareP();

	void CircleP();
	void CircleA();

	void RectangleA();
	void RectangleP();

	void ParallelogramA();
	void ParallelogramP();

	void PolygonA();

	void TrapeziumA();
	void QuadrilateralA();

	void TrapeziumP();
	void QuadrilateralP();

	//3D Shapes
	void CubeSA();
	void CubeV();

	void SphereSA();
	void SphereV();

	void CuboidSA();
	void CuboidV();

	//3D 2 Shapes
	void HemisphereTSA();
	void HemisphereCSA();
	void HemisphereV();

	void CylinderCSA();
	void CylinderTSA();
	void CylinderV();
	
	void ConeCSA();
	void ConeTSA();
	void ConeV();

	//triangle
	void TriangleAofE();
	void TriangleA();
	void TriangleAHF();
	void TriangleAofI();
	void TriangleP();
};

