#include "../3D_Shapes/Shape_3D.h"

double Cylinder::CSACylinder(double Radius, double Height) {
    return 2 * PI * Radius * Height;
}

double Cylinder::TSACylinder(double Radius, double Height) {
    return 2 * PI * Radius * (Radius + Height);
}

double Cylinder::VCylinder(double Radius, double Height) {
    return PI * Radius * Radius * Height;
}
