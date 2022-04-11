#include "../2D_Shapes/Shape_2D.h"

Circle::Circle(double Radius) {
    if(Measurement_Type == 1){
        cout << output << this->ACircle(Radius);
    } else if(Measurement_Type == 2){
        cout << output << this->PCircle(Radius);
    }
}

double Circle::ACircle(double Radius) {
	return PI * (2 * Radius);
}

double Circle::PCircle(double Radius) {
	return 2 * Radius * PI;
}
