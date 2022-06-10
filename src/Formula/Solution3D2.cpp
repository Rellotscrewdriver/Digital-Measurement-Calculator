#include "../Include/Solution.h"

void Solution::HemisphereTSA(double first){
    cout << FORMULA  << "3 * PI * (Radius * Radius)" << endl;
    cout << SOLUTION;
    cout << "= PI * " << first << " * " << first << endl;
    cout << "= PI * " << first * first << endl;
}

void Solution::HemisphereCSA(double first){
    cout << FORMULA  << "2 * PI * (Radius * Radius)" << endl;
    cout << SOLUTION;
    cout << "= PI * " << first << " * " << first << endl;
    cout << "= PI * " << first * first << endl;
}

void Solution::HemisphereV(double first){
    cout << FORMULA  << "2 / 3 * PI * (Radius * Radius * Radius)" << endl;
    cout << SOLUTION;
    cout << "= PI * " << first << " * " << first << endl;
    cout << "= PI * " << first * first << endl;
}