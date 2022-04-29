#pragma once
#define PI 3.14

#include "../declarations.h"
#include "../Handle_Exception/Handle_Exception.h"
#include "../Display/Display.h"
#include "../Parameters/parameter.h"

class Shape_2D {
public:
    int WhichShape;
    int Measurement_Type;
    string Measurement_Name;
	Shape_2D();
	void Shape_order_2D();
	void measurement_type();
    void measurement_type_triangle();
	Display dis;
};

// A = Area, P = Perimeter

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
	double answer;
	double number_of_sides[10];

	double APolygon(double Radius, double Apothem);
	void PPolygon(double side);
};

class Triangle {
public:
    double side_perimeter;
    // E = equilateral, I = isosceles, HF = heron's formula
    void filter_area_of_triangle();
	double ATriangle(double base, double height);
	double AofETriangle(double Side);
    double AofITriangle(double SideA, double SideB);
    double AHFTriangle(double SideA, double SideB, double SideC);
	double PTriangle(double SideA, double SideB, double SideC);
};
