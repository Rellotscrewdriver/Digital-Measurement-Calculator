#include "../Include/Shape_2D.h"
#include "../Include/Solution.h"

double Square::Psquare(double side) {
	return 4 * side;
}

double Square::Asquare(double side) {
	return side * side;
}

void Solution::Sol_SquareA(){
	cout << color::yellow << FORMULA << "side * side\n" << color::reset;
	cout << SOLUTION;
    cout << "= " << first_para << " * " << first_para << endl;
}

void Solution::Sol_SquareP(){
    cout << color::yellow << FORMULA << "4 * one side\n" << color::reset;
    cout << SOLUTION;
    cout << "= 4 * " << first_para << endl;
}