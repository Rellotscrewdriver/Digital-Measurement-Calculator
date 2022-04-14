#include "../2D_Shapes/Shape_2D.h"

double Rectangle::PRectangle(double length, double width) {
	return 2 * (length + width);
}

double Rectangle::ARectangle(double length, double width) {
	return length * width;
}
