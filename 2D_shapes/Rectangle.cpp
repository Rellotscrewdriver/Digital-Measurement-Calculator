#include "../2D_Shapes/Shape_2D.h"

Rectangle::Rectangle(double length, double width) {
	if (WhichShape == 1)
		this->ARectangle(length, width);
	else if (WhichShape == 2)
		this->PRectangle(length, width);
}

double Rectangle::PRectangle(double length, double width) {
	return 2 * (length + width);
}

double Rectangle::ARectangle(double length, double width) {
	return length * width;
}
