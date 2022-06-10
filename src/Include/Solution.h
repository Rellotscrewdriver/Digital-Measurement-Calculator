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
	void Triangle(int ShapeNum);

	void Shape_finder3D_Surface_Area(int ShapeNum);
	void Shape_finder3D_Volume(int ShapeNum);
	void Shape_finder3D_Total_Surface_Area(int ShapeNum);
	void Shape_finder3D_Curved_Surface_Area(int ShapeNum);

	void SqrtA();
	void SqrtP();

	void CircleP();
	void CircleA();

	void CubeSA(double first);
	void CubeV(double first);

	void SphereSA(double first);
	void SphereV(double first);

	void HemisphereTSA(double first);
	void HemisphereCSA(double first);
	void HemisphereV(double first);

	void TriangleAofE(double first);
};

