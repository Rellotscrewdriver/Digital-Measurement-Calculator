#ifndef SHAPE_2D_H
#define SHAPE_2D_H
#define PI 3.14

#include "../declarations.h"
#include "../exception_handling.h"
#include "../Display/Display.h"


class Shape_2D : public declarations {
public:
    Display dis;
	Shape_2D();
	bool is3D = false;
	void Shape_order_2D();
	void measurement_type();
	Exception_Handling Exh;
	declarations var;
};

/*
    A = Area
    P = Perimeter
*/

class Square : public declarations {
public:
	Exception_Handling Exh;
	Square(double side);
	double Asquare(double side);
	double Psquare(double side);
};

class Rectangle : public declarations {
public:
	Exception_Handling Exh;
	Rectangle(double length, double width);
	double ARectangle(double length, double width);
	double PRectangle(double length, double width);

};

class Parallelogram : public declarations {
public:
	Exception_Handling Exh;
	Parallelogram(double height, double width);
	double AParallelogram(double height, double width);
	double PParallelogram(double height, double width);
};

class Circle : public declarations{
public:

	Exception_Handling Exh;
	Circle(double Radius);
	double ACircle(double Radius);
	double PCircle(double Radius);
};

class Quadrilateral : public declarations {
public:
	Exception_Handling Exh;
	double PQuadrilateral(double SideA, double SideB, double SideC, double SideD);
	double AQuadrilateral(double diagonal, double base1, double base2);
};

class Trapezium : public declarations {
public:
	Exception_Handling Exh;
	double ATrapezium(double base1, double base2, double height);
	double PTrapezium(double SideA, double SideB, double SideC, double SideD);
};

class Polygon : public declarations {
public:
	Exception_Handling Exh;
	bool isnegative = false;
	float answer;
	int number_of_sides[10];

	double APolygon(double Radius, double Apothem);
	double PPolygon(double side);
};

#endif // SHAPE_2D_H
