#include "../Include/Shape_3D.h"

double Cone::CSACone(double Radius, double Slant_Height) {
	return PI * Radius * Slant_Height;
}

double Cone::TSACone(double Radius, double Slant_Height) {
	return PI * Radius * (Slant_Height * Radius);
}

double Cone::VCone(double Radius, double Slant_Height) {
	return 1 / 3 * PI * (Radius * Radius) * Slant_Height;
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

double Hemisphere::TSAHemisphere(double Radius) {
    return 3 * PI * (Radius * Radius);
}
double Hemisphere::VHemisphere(double Radius) {
    return 2 / 3 * PI * (Radius * Radius * Radius);
}
