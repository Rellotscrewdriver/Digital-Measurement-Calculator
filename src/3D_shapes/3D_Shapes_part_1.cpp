#include "Shape_3D.h"

double Sphere::SASphere(double Radius) {
	return 4 * PI * Radius * Radius;
}

double Sphere::VSphere(double Radius) {
    return 4 / 3 * PI * Radius * (Radius * Radius * Radius);
}

double Cuboid::SACuboid(double Width, double Height, double Depth) {
    return 2 * ((Depth * Width) + (Width * Height) + (Height * Depth));
}

double Cuboid::VCuboid(double Width, double Height, double Depth) {
    return Depth * Height * Width;
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
