#include "../Include/Solution.h"

void Solution::CubeSA(){
    cout << FORMULA  << "6 * (Side * Side)" << endl;
    cout << SOLUTION;
    cout << "= 6 * (" << first_para << " * " << first_para << ")\n";
    cout << "= 6 * " << first_para * first_para << endl;
}

/* TODO: how about I make multiple approaches to solve the question? 
    like first_para * (first_para * first_para)
    or (first_para * first_para) * first_para
    through a random number
*/
void Solution::CubeV(){
    cout << FORMULA  << "Side * Side * Side" << endl;
    cout << SOLUTION;
    cout << "= " << first_para << " * " << first_para << " * " << first_para << "\n";
    cout << "= " << first_para << " * " << first_para * first_para << "\n";
}

void Solution::SphereSA(){
    cout << FORMULA  << "4 * PI * Radius * Radius" << endl;
    cout << SOLUTION;
    cout << "= 4 * PI * " << first_para << " * " << first_para << endl;
    cout << "= 4 * PI * " << first_para * first_para << endl;
    cout << "= 4 * " << 3.14 * first_para * first_para << endl;
}

void Solution::SphereV(){
    cout << FORMULA  << "4 * PI * Radius * (Radius * Radius * Radius)" << endl;
    cout << "/t-";
    cout << "/t3";
    cout << SOLUTION;
}

void Solution::CuboidSA(){
    cout << "Solution class member called" << endl;
}

void Solution::CuboidV(){
    cout << "Solution class member called" << endl;
}