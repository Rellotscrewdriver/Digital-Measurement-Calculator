#include "../3D_Shapes/Shape_3D.h"

Sphere::Sphere(double Radius) {
	if (WhichShape == 1)
		this->SASphere(Radius);
	else if (WhichShape == 2)
		this->VSphere(Radius);
}

double Sphere::SASphere(double Radius) {
	return 4 * PI * Radius * Radius;
}

double Sphere::VSphere(double Radius) {
    return 4 / 3 * PI * Radius * (Radius * Radius * Radius);
}
