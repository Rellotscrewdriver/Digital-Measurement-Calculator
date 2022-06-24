#include "../Include/Shape_2D.h"
#include "../Include/Solution.h"

double Parallelogram::AParallelogram(double height, double width) {
	return height * width;
}

double Parallelogram::PParallelogram(double height, double width) {
	return 2 * (height + width);
}

void Solution::Sol_ParallelogramA(){
   cout << FORMULA  << "width * height\n";
   cout << SOLUTION;
   cout << "= " << first_para << " * " << second_para << "\n";
}

void Solution::Sol_ParallelogramP(){
   cout << FORMULA  << "2 * (width * height)\n";
   cout << SOLUTION;
   cout << "= 2 * (" << first_para << " * " << second_para << ")\n";
   cout << "= 2 * (" << first_para * second_para << ")\n";
   cout << "= 2 * " << first_para * second_para << "\n";
}