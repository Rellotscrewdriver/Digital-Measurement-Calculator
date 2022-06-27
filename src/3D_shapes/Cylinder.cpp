#include "../Include/Shape_3D.h"
#include "../Include/Solution.h"

double Cylinder::CSACylinder(double Radius, double Height) {
    return 2 * PI * Radius * Height;
}

double Cylinder::TSACylinder(double Radius, double Height) {
    return 2 * PI * Radius * (Radius + Height);
}

double Cylinder::VCylinder(double Radius, double Height) {
    return PI * Radius * Radius * Height;
}

void Solution::Sol_CylinderCSA(){
    cout << FORMULA << "2 * PI * Radius * Height \n";
    cout << SOLUTION;
    cout << "= 2 * pi * " << first_para << " * " << second_para << "\n";
    cout << "= 2 * pi * " << first_para * second_para << "\n";
    cout << "= 2 * " << 3.14 * first_para * second_para << endl;
}

void Solution::Sol_CylinderTSA(){
    cout << FORMULA << "2 * PI * Radius * (Radius + Height) \n";
    cout << SOLUTION;
    cout << "= 2 * PI * " << first_para << " * (" << first_para << " + " << second_para << ")\n";
    cout << "= 2 * PI * " << first_para << " * (" << first_para + second_para << ")\n";
    cout << "= 2 * PI * " << first_para * first_para + second_para << "\n";
    cout << "= 2 * " << 3.14 * first_para * first_para + second_para << endl;
}

void Solution::Sol_CylinderV(){
    cout << FORMULA << "PI * Radius * Radius * Height \n";
    cout << SOLUTION;
    cout << "= PI * " << first_para << " * " << first_para << " * " << second_para << "\n";
    cout << "= PI * " << first_para << " * " << first_para * second_para << "\n";
    cout << "= PI * " << first_para * first_para * second_para << endl;
}