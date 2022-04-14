#include "../3D_Shapes/Shape_3D.h"

double Cube::SACube(double Side) {
    return 6 * (Side * Side);
}

double Cube::VCube(double Side) {
    return Side * Side * Side;
}
