#include "../Include/Solution.h"

void Solution::CubeSA(double first){
    cout << FORMULA  << "6 * (Side * Side)" << endl;
    cout << SOLUTION;
    cout << "= 6 * (" << first << " * " << first << ")\n";
    cout << "= 6 * " << first * first << endl;
}

/* TODO: how about I make multiple approaches to solve the question? 
    like first * (first * first)
    or (first * first) * first
    through a random number
*/
void Solution::CubeV(double first){
    cout << FORMULA  << "Side * Side * Side" << endl;
    cout << SOLUTION;
    cout << "= " << first << " * " << first << " * " << first << "\n";
    cout << "= " << first << " * " << first * first << "\n";
}

void Solution::SphereSA(double first){
    cout << FORMULA  << "4 * PI * Radius * Radius" << endl;
    cout << SOLUTION;
    cout << "= 4 * PI * " << first << " * " << first << endl;
    cout << "= 4 * PI * " << first * first << endl;
    cout << "= 4 * " << 3.14 * first * first << endl;
}

void Solution::SphereV(double first){
    cout << FORMULA  << "4 * PI * Radius * (Radius * Radius * Radius)" << endl;
    cout << "/t-";
    cout << "/t3";
    cout << SOLUTION;
}
