#include "../Include/Solution.h"

void Solution::SqrtA(){
    cout << FORMULA << "4 * side" << endl;
    cout << SOLUTION;
    cout << "= 4 * " << first_para << endl;
}

void Solution::SqrtP(){
    cout << FORMULA  << "side * side" << endl;
    cout << SOLUTION;
    cout << "= " << first_para << " * " << first_para << endl;
}

void Solution::CircleP(){
    cout << FORMULA  << "2 * pi * r" << endl;
    cout << SOLUTION;
    cout << "= 2 * PI * " << first_para << "\n";
    cout << "= 2 * " << first_para * 3.14 << endl;
}

void Solution::CircleA(){
    cout << FORMULA  << "pi * r * r" << endl;
    cout << SOLUTION;
    cout << "= PI * " << first_para << " * " << first_para << endl;
    cout << "= PI * " << first_para * first_para << endl;
}

void Solution::TriangleAofE(double first){
    cout << FORMULA << "(sqrt(3) / 4) * Side * Side\n";
    cout << SOLUTION;
    cout << "= PI ";

}