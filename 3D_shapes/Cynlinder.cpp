#include "../3D_Shapes/Shape_3D.h"

Cylinder::Cylinder(double Radius, double Height) {

	if (WhichShape == 1)
		this->CSACylinder(Radius, Height);
	else if (WhichShape == 2)
		this->TSACylinder(Radius, Height);
	else if (WhichShape == 3)
		this->VCylinder(Radius, Height);

}

double Cylinder::CSACylinder(double Radius, double Height) {
    return 2 * PI * Radius * Height;
}

double Cylinder::TSACylinder(double Radius, double Height) {
    return 2 * PI * Radius * (Radius + Height);
}

double Cylinder::VCylinder(double Radius, double Height) {
    return PI * Radius * Radius * Height;
}
