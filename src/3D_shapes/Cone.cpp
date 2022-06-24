#include "../Include/Shape_3D.h"
#include "../Include/Solution.h"

double Cone::CSACone(double Radius, double Slant_Height) {
	return PI * Radius * Slant_Height;
}

double Cone::TSACone(double Radius, double Slant_Height) {
	return PI * Radius * (Slant_Height * Radius);
}

double Cone::VCone(double Radius, double Slant_Height) {
	return 1 / 3 * PI * (Radius * Radius) * Slant_Height;
}

void Solution::Sol_ConeCSA(){
    cout << FORMULA  << "PI * Radius * Slant Height\n";
    cout << SOLUTION;
    cout << "= 3.14 * " << first_para << " * " << second_para << "\n";
    cout << "= 3.14 * " << first_para * second_para << endl; 
}

void Solution::Sol_ConeTSA(){
    cout << FORMULA  << "PI * Radius * (Slant Height * Radius)\n";
    cout << SOLUTION;
    cout << "= PI * " << first_para << " * (" << second_para << " * " << first_para << ")\n";
    cout << "= PI * " << first_para << " * " << second_para * first_para << "\n";
    cout << "= PI * " << first_para * second_para * first_para << endl;
}

void Solution::Sol_ConeV(){
    cout << FORMULA << "1/3 * PI * (Radius * Radius) * Slant_Height\n";
    cout << SOLUTION;
    cout << "= 1/3 * PI * (" << first_para << " * " << first_para << ") * " << second_para << "\n";
    cout << "= 1/3 * PI * (" << first_para * first_para << ") * " << second_para << "\n";
    cout << "= 1/3 * PI * (" << first_para * first_para * second_para << "\n";
    cout << "= " << 1 / 3 * 3.14 << " * " << first_para * first_para * second_para << endl;
}    