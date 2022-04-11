#include "../3D_Shapes/Shape_3D.h"

Cube::Cube(double Side) {
	if (Measurement_Type == 1)
		SACube(Side);
	else if (Measurement_Type == 2)
		VCube(Side);
}

double Cube::SACube(double Side) {
    return 6 * (Side * Side);
}

double Cube::VCube(double Side) {
    return Side * Side * Side;
}
