#include "../Include/Shape_3D.h"
#include "../Include/Solution.h"

double Hemisphere::CSAHemisphere(double Radius) {
    return 2 * PI * (Radius * Radius);
}

double Hemisphere::TSAHemisphere(double Radius) {
    return 3 * PI * (Radius * Radius);
}
double Hemisphere::VHemisphere(double Radius) {
    return 2 / 3 * PI * (Radius * Radius * Radius);
}

void Solution::Sol_HemisphereTSA(){
    cout << FORMULA  << "3 * PI * (Radius * Radius)\n";
    cout << SOLUTION;
    cout << "= 3 * PI * (" << first_para << " * " << first_para << ")\n";
    cout << "= 3 * PI * (" << first_para * first_para << ")\n";
    cout << "= " << 3 * 3.14 << " * (" << first_para * first_para << ")" << endl;
}

void Solution::Sol_HemisphereCSA(){
    cout << FORMULA  << "2 * PI * (Radius * Radius)\n";
    cout << SOLUTION;
    cout << "= 2 * PI * (" << first_para << " * " << first_para << ")\n";
    cout << "= 2 * PI * (" << first_para * first_para << ")\n";
    cout << "= " << 2 * 3.14 << " * (" << first_para * first_para << ")" << endl;
}

void Solution::Sol_HemisphereV(){
    cout << FORMULA  << "2 / 3 * PI * (Radius * Radius * Radius)\n";
    cout << SOLUTION;
    cout << "= 2 / 3 * PI * (" << first_para << " * " << first_para << " * " << first_para << ")\n";
    cout << "= 2 / 3 * PI * (" << first_para * first_para * first_para << ")\n";
    cout << "= " << 2 / 3 * PI << " * (" << first_para * first_para * first_para << ")" << endl;
}
