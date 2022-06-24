#pragma once
#define PI 3.14

#include "../Include/Handle_Exception.h"
#include "../Include/Display.h"
#include "../Include/parameter.h"
#include "../Include/file-log.h"

class Shape_3D {
public:
    int Which_Shape;
    int Measurement_Type;
    string Measurement_Name;
	int Which_Shape_3D;    
    std::ofstream Log; 
    
    bool is_3D = true;
    /////////////////////////////////////////////////
    /// \brief asks for user the input the 3D shape
    /////////////////////////////////////////////////
	Shape_3D();

	/////////////////////////////////////////////////
    /// \brief matches the shape or action given by the user in Shape_3D()
    ///
    /// matches the shape or action given by the user in Shape_3D()
    /// if it matches then Which_Shape Variable will store it
    /// else it will output an error message and let the user try again
    /////////////////////////////////////////////////
	void Shape_order_3D();

	/////////////////////////////////////////////////
    /// \brief matches the meaasurement type or action given by the user
    ///
    /// matches the meaasurement type or action given by the user
    /// if it matches then Which_Shape Variable will store it
    /// else it will output an error message and let the user try again
    /////////////////////////////////////////////////
	void measurement_type_1();
	void measurement_type_2();
};

/*
    SA = Surface Area
    TSA = Total Surface Area
    CSA = Curved surface Area
    V = Volume
*/

/////////////////////////////////////////////////
/// \brief calculates the shape given by the user from parameter class
///
///	\param depending upon the user
///
/// \return calculated Measurement type of shape given by the user
/////////////////////////////////////////////////
class Cube {
public:
	double SACube(double Side);
	double VCube(double Side);
};

class Cuboid {
public:
	double SACuboid(double Length, double Width, double Depth);
	double VCuboid(double Length, double Width, double Depth);
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

