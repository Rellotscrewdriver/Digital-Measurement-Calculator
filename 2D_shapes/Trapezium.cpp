#include "../2D_Shapes/Shape_2D.h"

double Trapezium::ATrapezium(double base1, double base2, double height) {
	return (base1 + base2) / 2 * height;
}

double Trapezium::PTrapezium(double SideA, double SideB, double SideC, double SideD) {
	return SideA + SideB + SideC + SideD;
}
