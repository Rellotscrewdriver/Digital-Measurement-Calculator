#ifndef SHAPE_2D_H
#define SHAPE_2D_H
#define PI 3.14

#include "../declarations.h"
#include "../exception_handling.h"
#include "../Display/Display.h"

class Shape_2D : public declarations {
public:
	Shape_2D();
	void Shape_order_2D();
	void measurement_type();

	Display dis;
	Exception_Handling Exh;
};

/*
    A = Area
    P = Perimeter
*/

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

class Parallelogram : public declarations {
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
	double ATrapezium(double base1, double base2, double height);
	double PTrapezium(double SideA, double SideB, double SideC, double SideD);
};

class Polygon : public declarations {
public:
	Exception_Handling Exh;
	bool isnegative = false;
	double answer;
	double number_of_sides[10];

	double APolygon(double Radius, double Apothem);
	void PPolygon(double side);
};

#endif // SHAPE_2D_H
