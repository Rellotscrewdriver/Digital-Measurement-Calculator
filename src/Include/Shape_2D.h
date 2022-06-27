#pragma once
#define PI 3.14

#include "../Include/declarations.h"
#include "../Include/Handle_Exception.h"
#include "../Include/Display.h"
#include "../Include/parameter.h"

class Shape_2D {
public:
    int WhichShape;
    int Measurement_Type;
    string Measurement_Name;

    /////////////////////////////////////////////////
    /// \brief asks for user the input the 2D shape
    /////////////////////////////////////////////////
	Shape_2D();

	/////////////////////////////////////////////////
    /// \brief matches the shape or action given by the user in Shape_2D()
    ///
    /// matches the shape or action given by the user in Shape_2D()
    /// if it matches then Which_Shape Variable will store it
    /// else it will output an error message and let the user try again
    /////////////////////////////////////////////////
	void Shape_order_2D();

	/////////////////////////////////////////////////
    /// \brief matches the meaasurement type or action given by the user
    ///
    /// matches the meaasurement type or action given by the user
    /// if it matches then Which_Shape Variable will store it
    /// else it will output an error message and let the user try again
    /////////////////////////////////////////////////
	void measurement_type();

	/////////////////////////////////////////////////
    /// \brief matches the type of area or action given by the user of the triangle
    ///
    /// this function matches the type of area or action given by the user of the triangle
    /// if it matches then Which_Shape Variable will store it
    /// else it will output an error message and let the user try again
    /////////////////////////////////////////////////
    void measurement_type_triangle();
	Display dis;
};

// A = Area, P = Perimeter

/////////////////////////////////////////////////
/// \brief calculates the shape given by the user from parameter class
///
///	\param depending upon the user
///
/// \return calculated Measurement type of shape given by the user
/////////////////////////////////////////////////
class Square {
public:
	double Asquare(double side);
	double Psquare(double side);
};

class Rectangle {
public:
	double ARectangle(double length, double width);
	double PRectangle(double length, double width);
};

class Parallelogram {
public:
	double AParallelogram(double height, double width);
	double PParallelogram(double height, double width);
};

class Circle {
public:
	double ACircle(double Radius);
	double PCircle(double Radius);
};

class Quadrilateral {
public:
	double PQuadrilateral(double SideA, double SideB, double SideC, double SideD);
	double AQuadrilateral(double diagonal, double base1, double base2);
};

class Trapezium {
public:
	double ATrapezium(double height, double base1, double base2);
	double PTrapezium(double SideA, double SideB, double SideC, double SideD);
};

class Polygon {
public:
	bool isnegative = false;
	double answer = 1 - 1;
	double number_of_sides[10];

	double APolygon(double Radius, double Apothem);
	void PPolygon(double side);
};

class Triangle {
public:
    double side_perimeter;
    // E = equilateral, I = isosceles, HF = heron's formula

    /////////////////////////////////////////////////
	/// \brief matches the type area of triangle given by the user
	/////////////////////////////////////////////////
    void filter_area_of_triangle();

	double ATriangle(double base, double height);
	double AofETriangle(double Side);
    double AofITriangle(double SideA, double SideB);
    double AHFTriangle(double SideA, double SideB, double SideC);
	double PTriangle(double SideA, double SideB, double SideC);
};
