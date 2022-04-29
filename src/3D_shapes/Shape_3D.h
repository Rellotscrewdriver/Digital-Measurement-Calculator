#pragma once
#define PI 3.14

#include "../Handle_Exception/Handle_Exception.h"
#include "../Display/Display.h"
#include "../Parameters/parameter.h"

class Shape_3D {
public:
    int Which_Shape;
    int Measurement_Type;
    string Measurement_Name;
	int Which_Shape_3D;
    bool is_3D = true;
	Shape_3D();
	void Shape_order_3D();
	void measurement_type_1();
	void measurement_type_2();
};

/*
    SA = Surface Area
    TSA = Total Surface Area
    LSA = Lateral Surface Area
    CSA = Curved surface Area
    V = Volume
*/

class Cube {
public:
	double SACube(double Side);
	double VCube(double Side);
};

class Cuboid {
public:
	double SACuboid(double Width, double Height, double Depth);
	double VCuboid(double Width, double Height, double Depth);
};

class Hemisphere {
public:
	double CSAHemisphere(double Radius);
	double TSAHemisphere(double Radius);
	double VHemisphere(double Radius);
};

class Sphere {
public:
	double SASphere(double Radius);
	double VSphere(double Radius);
};

class Cone {
public:
	double CSACone(double Radius, double Slant_Height);
	double TSACone(double Radius, double Slant_Height);
	double VCone(double Radius, double Slant_Height);
};

class Cylinder {
public:
	double CSACylinder(double Radius, double Height);
	double TSACylinder(double Radius, double Height);
	double VCylinder(double Radius, double Height);
};

