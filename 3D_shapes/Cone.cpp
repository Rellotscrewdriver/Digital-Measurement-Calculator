#include "Shape_3D.h"

double Cone::CSACone(double Radius, double Height) {
	return PI * Radius * Height;
}

double Cone::TSACone(double Radius, double Height) {
    //use slant height
	return PI * Radius * (Height * Radius);
}

double Cone::VCone(double Radius, double Height) {
	return 1 / 3 * PI * (Radius * Radius) * Height;
}
