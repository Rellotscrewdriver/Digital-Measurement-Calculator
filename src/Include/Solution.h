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

	/////////////////////////////////////////////////
    /// \brief finds the shape to find it's solution
    /////////////////////////////////////////////////
	void Shape_finder2D_Area(int ShapeNum);
	void Shape_finder2D_Perimeter(int ShapeNum);
	void Shape_finder3D_Surface_Area(int ShapeNum);
	void Shape_finder3D_Volume(int ShapeNum);
	void Shape_finder3D_Total_Surface_Area(int ShapeNum);
	void Shape_finder3D_Curved_Surface_Area(int ShapeNum);

private:
	/////////////////////////////////////////////////
    /// \brief these functions are responsible for displaying solutions
    /////////////////////////////////////////////////

	//2D Shapes
	void Sol_SquareA();
	void Sol_SquareP();

	void Sol_CircleP();
	void Sol_CircleA();

	void Sol_RectangleA();
	void Sol_RectangleP();

	void Sol_ParallelogramA();
	void Sol_ParallelogramP();

	void Sol_PolygonA();

	void Sol_TrapeziumA();
	void Sol_QuadrilateralA();

	void Sol_TrapeziumP();
	void Sol_QuadrilateralP();

	//3D Shapes
	void Sol_CubeSA();
	void Sol_CubeV();

	void Sol_SphereSA();
	void Sol_SphereV();

	void Sol_CuboidSA();
	void Sol_CuboidV();

	//3D 2 Shapes
	void Sol_HemisphereTSA();
	void Sol_HemisphereCSA();
	void Sol_HemisphereV();

	void Sol_CylinderCSA();
	void Sol_CylinderTSA();
	void Sol_CylinderV();
	
	void Sol_ConeCSA();
	void Sol_ConeTSA();
	void Sol_ConeV();

	//triangle
	void Sol_TriangleAofE();
	void Sol_TriangleA();
	void Sol_TriangleAHF();
	void Sol_TriangleAofI();
	void Sol_TriangleP();
};

