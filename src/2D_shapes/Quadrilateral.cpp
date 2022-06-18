#include "../Include/Shape_2D.h"
#include "../Include/Solution.h"

double Quadrilateral::PQuadrilateral(double SideA, double SideB, double SideC, double SideD) {
	return SideA + SideB + SideC + SideD;
}

double Quadrilateral::AQuadrilateral(double diagonal, double base1, double base2) {
	double half = 0.5;
	return half * diagonal * base1 * base2;
}

void Solution::QuadrilateralP(){
    cout << FORMULA  << "side1 + side2 + side3 + side4\n";
   	cout << SOLUTION;
    cout << "= " << first_para << " + " << second_para << " + " << third_para << " + " << fourth_para << "\n";
    cout << "= " << first_para << " + " << second_para << " + " << third_para + fourth_para << "\n";
    cout << "= " << first_para << " + " << second_para + third_para + fourth_para << endl;
}

void Solution::QuadrilateralA(){
    cout << FORMULA  << "0.5 * diagonal * base1 * base2\n";
   	cout << SOLUTION;
	cout << "= 0.5 * " << first_para << " * " << second_para << " * " << third_para << "\n"; 
	cout << "= 0.5 * " << first_para << " * " << second_para * third_para << "\n";
	cout << "= 0.5 * " << first_para * second_para * third_para << endl; 
}
