#include "../2D_Shapes/Shape_2D.h"

Parallelogram::Parallelogram(double height, double width) {
    declarations dec;
	if (dec.Measurement_Type == 1)
		this->AParallelogram(height, width);
	else if (dec.Measurement_Type == 2)
		this->PParallelogram(height, width);
}
double Parallelogram::AParallelogram(double height, double width) {
	return height * width;
}
double Parallelogram::PParallelogram(double height, double width) {
	return 2 * (height + width);
}
