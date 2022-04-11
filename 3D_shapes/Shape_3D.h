#ifndef SHAPE_3D_H
#define SHAPE_3D_H
#define PI 3.14

#include "../declarations.h"
#include "../exception_handling.h"
#include "../Display/Display.h"

class Shape_3D : public declarations {
public:
	int WhichShape3D;
    bool is3D = true;
	Shape_3D();
	void Shape_order_3D();
	void measurement_type_1();
	void measurement_type_2();
	Exception_Handling Exh;
	declarations var;
};

/*
    SA = Surface Area
    TSA = Total Surface Area
    LSA = Lateral Surface Area
    CSA = Curved surface Area
    V = Volume
*/

class Cube : public declarations {
public:
	Cube(double Side);
	double SACube(double Side);
	double VCube(double Side);
	Exception_Handling Exh;
};

class Cuboid : public declarations {
public:
	Cuboid(double Width, double Height, double Depth);
	double SACuboid(double Width, double Height, double Depth);
	double VCuboid(double Width, double Height, double Depth);
	Exception_Handling Exh;
};

class Hemisphere : public declarations {
public:
	Hemisphere(double Radius);
	double CSAHemisphere(double Radius);
	double TSAHemisphere(double Radius);
	Exception_Handling Exh;
	double VHemisphere(double Radius);
};

class Sphere : public declarations {
public:
	Sphere(double Radius);
	double SASphere(double Radius);
	double VSphere(double Radius);
	Exception_Handling Exh;
};

class Cone : public declarations {
public:
	Cone(double Radius, double Height);
	double CSACone(double Radius, double Height);
	double TSACone(double Radius, double Height);
	double VCone(double Radius, double Height);
	Exception_Handling Exh;
};

class Cylinder : public declarations {
public:
	Cylinder(double Radius, double Height);
	double CSACylinder(double Radius, double Height);
	double TSACylinder(double Radius, double Height);
	double VCylinder(double Radius, double Height);
	Exception_Handling Exh;
};



#endif
