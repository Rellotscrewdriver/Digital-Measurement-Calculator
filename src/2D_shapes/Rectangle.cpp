#include "../Include/Shape_2D.h"
#include "../Include/Solution.h"

double DIC_Rectangle::PRectangle(double length, double width) {
	return 2 * (length + width);
}

double DIC_Rectangle::ARectangle(double length, double width) {
	return length * width;
}

void Solution::Sol_RectangleA(){
    cout << color::yellow << FORMULA  << "length * width\n" << color::reset;
   	cout << SOLUTION;
    cout << "= " << first_para << " * " << second_para << endl; 
}

void Solution::Sol_RectangleP(){
    cout << color::yellow << FORMULA  << "2 * (length + width)\n" << color::reset;
   	cout << SOLUTION;
    cout << "= 2 * (" << first_para << " + " << second_para << ")\n";
}