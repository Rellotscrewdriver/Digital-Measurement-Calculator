#include "../3D_Shapes/Shape_3D.h"

double Hemisphere::CSAHemisphere(double Radius) {
    return 2 * PI * (Radius * Radius);
}
double Hemisphere::TSAHemisphere(double Radius) {
    return 3 * PI * (Radius * Radius);
}
double Hemisphere::VHemisphere(double Radius) {
    return 2 / 3 * PI * (Radius * Radius * Radius);
}
