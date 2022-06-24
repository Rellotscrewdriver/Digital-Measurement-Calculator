#include "../Include/Shape_3D.h"
#include "../Include/Solution.h"

double Cube::SACube(double Side) {
    return 6 * (Side * Side);
}

double Cube::VCube(double Side) {
    return Side * Side * Side;
}

void Solution::Sol_CubeSA(){
    cout << FORMULA  << "6 * (Side * Side)" << endl;
    cout << SOLUTION;
    cout << "= 6 * (" << first_para << " * " << first_para << ")\n";
    cout << "= 6 * " << first_para * first_para << endl;
}


void Solution::Sol_CubeV(){
    cout << FORMULA  << "Side * Side * Side" << endl;
    cout << SOLUTION;
    cout << "= " << first_para << " * " << first_para << " * " << first_para << "\n";
    cout << "= " << first_para << " * " << first_para * first_para << "\n";
}
