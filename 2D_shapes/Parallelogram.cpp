#include "../2D_Shapes/Shape_2D.h"

double Parallelogram::AParallelogram(double height, double width) {
	return height * width;
}
double Parallelogram::PParallelogram(double height, double width) {
	return 2 * (height + width);
}
