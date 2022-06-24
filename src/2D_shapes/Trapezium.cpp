#include "../Include/Shape_2D.h"
#include "../Include/Solution.h"

double Trapezium::ATrapezium(double height, double base1, double base2) {
	return (base1 + base2) / 2 * height;
}

double Trapezium::PTrapezium(double SideA, double SideB, double SideC, double SideD) {
	return SideA + SideB + SideC + SideD;
}

void Solution::Sol_TrapeziumA(){
    cout << FORMULA << "2 * height / (base1 + base2)\n";
    cout << SOLUTION;
    cout << "= 2 * " << first_para << " / (" << second_para << " + " << third_para << ")\n"; 
    cout << "= 2 * " << first_para << " / (" << second_para + third_para << ")\n";   
    cout << "= " << 2 * first_para << " / " << second_para + third_para << "\n";   
}

void Solution::Sol_TrapeziumP(){
    cout << FORMULA << "Side1 + Side2 + Side3 + Side4\n";
    cout << SOLUTION;
    cout << "= " <<first_para << " + " << second_para << " + " << third_para << " + " << fourth_para << "\n";
    cout << "= " <<first_para << " + " << second_para << " + " << third_para + fourth_para << "\n";
    cout << "= " <<first_para << " + " << second_para + third_para + fourth_para << endl;
}
