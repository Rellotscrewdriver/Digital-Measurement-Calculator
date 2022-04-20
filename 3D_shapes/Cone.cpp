#include "Shape_3D.h"

double Cone::CSACone(double Radius, double Slant_Height) {
	return PI * Radius * Slant_Height;
}

double Cone::TSACone(double Radius, double Slant_Height) {
	return PI * Radius * (Slant_Height * Radius);
}

double Cone::VCone(double Radius, double Slant_Height) {
	return 1 / 3 * PI * (Radius * Radius) * Slant_Height;
}
