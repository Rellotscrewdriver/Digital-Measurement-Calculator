#include "../Include/Shape_2D.h"
#include "../Include/Solution.h"

double Parallelogram::AParallelogram(double height, double width) {
	return height * width;
}

double Parallelogram::PParallelogram(double height, double width) {
	return 2 * (height + width);
}

void Solution::Sol_ParallelogramA(){
   cout << color::yellow << FORMULA << "width * height\n" << color::reset;
   cout << SOLUTION;
   cout << "= " << first_para << " * " << second_para << "\n";
}

void Solution::Sol_ParallelogramP(){
   cout << color::yellow << FORMULA << "2 * (width * height)\n" << color::reset;
   cout << SOLUTION;
   cout << "= 2 * (" << first_para << " * " << second_para << ")\n";
   cout << "= 2 * (" << first_para * second_para << ")\n";
   cout << "= 2 * " << first_para * second_para << "\n";
}