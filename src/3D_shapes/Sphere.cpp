#include "../Include/Shape_3D.h"
#include "../Include/Solution.h"

double Sphere::SASphere(double Radius) {
	return 4 * PI * Radius * Radius;
}

double Sphere::VSphere(double Radius) {
    return 4 / 3 * PI * Radius * (Radius * Radius * Radius);
}

void Solution::SphereSA(){
    cout << FORMULA  << "4 * PI * Radius * Radius" << endl;
    cout << SOLUTION;
    cout << "= 4 * PI * " << first_para << " * " << first_para << "\n";
    cout << "= 4 * PI * " << first_para * first_para << "\n";
    cout << "= 4 * " << 3.14 * first_para * first_para << endl;
}

void Solution::SphereV(){
    cout << FORMULA  << "4 * PI * Radius * (Radius * Radius * Radius)\n";
    cout << SOLUTION;
    cout << "= 4 * PI * (" << first_para << " * " << first_para << " * " << first_para << ")\n";
    cout << "= 4 * PI * (" << first_para * first_para << " * " << first_para << ")\n";
    cout << "= " << 4 * 3.14 << " * " << first_para * first_para * first_para << endl;       
}