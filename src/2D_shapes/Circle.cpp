#include "../Include/Shape_2D.h"
#include "../Include/Solution.h"

double Circle::ACircle(double Radius) {
	return PI * (2 * Radius);
}

double Circle::PCircle(double Radius) {
	return 2 * Radius * PI;
}

void Solution::Sol_CircleP(){
    cout << FORMULA  << "2 * pi * r\n";
    cout << SOLUTION;
    cout << "= 2 * PI * " << first_para << "\n";
    cout << "= 2 * " << first_para * 3.14 << endl;
}

void Solution::Sol_CircleA(){
    cout << FORMULA  << "pi * r * r\n";
    cout << SOLUTION;
    cout << "= PI * " << first_para << " * " << first_para << "\n";
    cout << "= PI * " << first_para * first_para << endl;
}
