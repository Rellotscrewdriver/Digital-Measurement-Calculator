#include "../3D_Shapes/Shape_3D.h"

double Sphere::SASphere(double Radius) {
	return 4 * PI * Radius * Radius;
}

double Sphere::VSphere(double Radius) {
    return 4 / 3 * PI * Radius * (Radius * Radius * Radius);
}
