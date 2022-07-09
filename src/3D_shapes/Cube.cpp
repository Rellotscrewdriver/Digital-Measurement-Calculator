#include "../Include/Shape_3D.h"
#include "../Include/Solution.h"

double Cube::SACube(double Side) {
    return 6 * (Side * Side);
}

double Cube::VCube(double Side) {
    return Side * Side * Side;
}

void Solution::Sol_CubeSA(){
    cout << color::yellow << FORMULA << "6 * (Side * Side)\n" << color::reset;
    cout << SOLUTION;
    cout << "= 6 * (" << first_para << " * " << first_para << ")\n";
    cout << "= 6 * " << first_para * first_para << endl;
}


void Solution::Sol_CubeV(){
    cout << color::yellow << FORMULA << "Side * Side * Side\n" << color::reset;
    cout << SOLUTION;
    cout << "= " << first_para << " * " << first_para << " * " << first_para << "\n";
    cout << "= " << first_para << " * " << first_para * first_para << "\n";
}
