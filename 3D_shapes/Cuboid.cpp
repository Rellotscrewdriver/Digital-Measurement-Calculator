#include "Shape_3D.h"

double Cuboid::SACuboid(double Width, double Height, double Depth) {
    return 2 * ((Depth * Width) + (Width * Height) + (Height * Depth));
}

double Cuboid::VCuboid(double Width, double Height, double Depth) {
    return Depth * Height * Width;
}
