#include "Shape_3D.h"

Cone::Cone(double Radius, double Height) {
	if (Measurement_Type == 1)
		this->CSACone(Radius, Height);
	else if (Measurement_Type == 2)
		this->TSACone(Radius, Height);
	else if (Measurement_Type == 3)
		this->VCone(Radius, Height);
}

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
