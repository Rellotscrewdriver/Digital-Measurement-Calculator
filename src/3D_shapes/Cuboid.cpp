#include "../Include/Shape_3D.h"
#include "../Include/Solution.h"

double Cuboid::SACuboid(double Length, double Width, double Depth) {
    return 2 * ((Length * Width) + (Width * Depth) + (Length * Depth));
}

double Cuboid::VCuboid(double Length, double Width, double Depth) {
    return Length * Width * Depth;
}

void Solution::Sol_CuboidSA(){
    cout << color::yellow << FORMULA << "2 * ((length * width) + (width * depth) + (length * depth))\n" << color::reset;
    cout << SOLUTION;
    cout << "= 2 * ((" << first_para << " * " << second_para 
         << ") + (" << second_para << " * " << third_para 
         << ") + (" << first_para << " * " << third_para << ")\n";
    cout << "= 2 * ((" << first_para * second_para 
         << ") + (" << second_para * third_para 
         << ") + (" << first_para * third_para << ")\n";
    cout << "= 2 * (" << first_para * second_para 
         << " + " << second_para * third_para 
         << " + " << first_para * third_para << ")\n";
    cout << "= 2 * (" << first_para * second_para + second_para * third_para + first_para * third_para << ")\n";
    cout << "= 2 * " << first_para * second_para + second_para * third_para + first_para * third_para << endl;
}

void Solution::Sol_CuboidV(){
    cout << color::yellow << FORMULA << "length * width * depth\n" << color::reset;
    cout << SOLUTION;
    cout << "= " << first_para << " * " << second_para << " * " << third_para << "\n";
    cout << "= " << first_para << " * " << second_para * third_para << endl;
}