#include "../3D_Shapes/Shape_3D.h"

Hemisphere::Hemisphere(double Radius) {
	if (WhichShape == 1)
		this->CSAHemisphere(Radius);
	else if (WhichShape == 2)
		this->TSAHemisphere(Radius);
	else if (WhichShape == 3)
		this->VHemisphere(Radius);
}

double Hemisphere::CSAHemisphere(double Radius) {
    return 2 * PI * (Radius * Radius);
}
double Hemisphere::TSAHemisphere(double Radius) {
    return 3 * PI * (Radius * Radius);
}
double Hemisphere::VHemisphere(double Radius) {
    return 2 / 3 * PI * (Radius * Radius * Radius);
}
