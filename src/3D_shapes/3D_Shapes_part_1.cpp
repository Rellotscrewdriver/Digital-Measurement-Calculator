#include "../Include/Shape_3D.h"

double Sphere::SASphere(double Radius) {
	return 4 * PI * Radius * Radius;
}

double Sphere::VSphere(double Radius) {
    return 4 / 3 * PI * Radius * (Radius * Radius * Radius);
}

double Cuboid::SACuboid(double Length, double Width, double Depth) {
    return 2 * ((Length * Width) + (Width * Depth) + (Length * Depth));
}

double Cuboid::VCuboid(double Length, double Width, double Depth) {
    return Length * Width * Depth;
}

double Cube::SACube(double Side) {
    return 6 * (Side * Side);
}

double Cube::VCube(double Side) {
    return Side * Side * Side;
}

double Hemisphere::CSAHemisphere(double Radius) {
    return 2 * PI * (Radius * Radius);
}
