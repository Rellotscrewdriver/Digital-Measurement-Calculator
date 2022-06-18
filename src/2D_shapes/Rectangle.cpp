#include "../Include/Shape_2D.h"
#include "../Include/Solution.h"

double Rectangle::PRectangle(double length, double width) {
	return 2 * (length + width);
}

double Rectangle::ARectangle(double length, double width) {
	return length * width;
}

void Solution::RectangleA(){
    cout << FORMULA  << "length * width\n";
   	cout << SOLUTION;
    cout << "= " << first_para << " * " << second_para << endl; 
}

void Solution::RectangleP(){
    cout << FORMULA  << "2 * (length + width)\n";
   	cout << SOLUTION;
    cout << "= 2 * (" << first_para << " + " << second_para << ")\n";
}