#include "../2D_Shapes/Shape_2D.h"

double Quadrilateral::PQuadrilateral(double SideA, double SideB, double SideC, double SideD) {
	return SideA + SideB + SideC + SideD;
}

double Quadrilateral::AQuadrilateral(double diagonal, double base1, double base2) {
	double half = 0.5;
	return half * diagonal * base1 * base2;
}
