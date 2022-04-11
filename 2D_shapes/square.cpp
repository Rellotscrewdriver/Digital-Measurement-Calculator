#include "../2D_Shapes/Shape_2D.h"

//experiment
Square::Square(double side) {
	if (Measurement_Type == 1)
		cout << output << this->Asquare(side);
	else if (Measurement_Type == 2)
		cout << output << this->Psquare(side);
}

double Square::Psquare(double side) {
	return 4 * side;
}

double Square::Asquare(double side) {
	return side * side;
}
