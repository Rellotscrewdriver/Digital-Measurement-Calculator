#include "../2D_Shapes/Shape_2D.h"

double Parallelogram::AParallelogram(double height, double width) {
	return height * width;
}

double Parallelogram::PParallelogram(double height, double width) {
	return 2 * (height + width);
}

double Square::Psquare(double side) {
	return 4 * side;
}

double Square::Asquare(double side) {
	return side * side;
}

double Trapezium::ATrapezium(double base1, double base2, double height) {
	return (base1 + base2) / 2 * height;
}

double Trapezium::PTrapezium(double SideA, double SideB, double SideC, double SideD) {
	return SideA + SideB + SideC + SideD;
}

double Circle::ACircle(double Radius) {
	return PI * (2 * Radius);
}

double Circle::PCircle(double Radius) {
	return 2 * Radius * PI;
}