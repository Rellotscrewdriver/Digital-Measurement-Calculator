#include "Shape_3D.h"

Cuboid::Cuboid(double Width, double Height, double Depth) {
	if (Measurement_Type == 1)
		SACuboid(Width, Height, Depth);
	else if (Measurement_Type == 2)
		VCuboid(Width, Height, Depth);
}

double Cuboid::SACuboid(double Width, double Height, double Depth) {
    return 2 * ((Depth * Width) + (Width * Height) + (Height * Depth));
}

double Cuboid::VCuboid(double Width, double Height, double Depth) {
    return Depth * Height * Width;
}
