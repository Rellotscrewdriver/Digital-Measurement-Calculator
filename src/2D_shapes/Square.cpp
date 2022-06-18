#include "../Include/Shape_2D.h"
#include "../Include/Solution.h"

double Square::Psquare(double side) {
	return 4 * side;
}

double Square::Asquare(double side) {
	return side * side;
}

void Solution::SquareA(){
	cout << FORMULA  << "side * side" << endl;
	cout << SOLUTION;
    cout << "= " << first_para << " * " << first_para << endl;
}

void Solution::SquareP(){
    cout << FORMULA << "4 * one side" << endl;
    cout << SOLUTION;
    cout << "= 4 * " << first_para << endl;
}