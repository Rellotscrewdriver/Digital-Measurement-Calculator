#include "../Include/Solution.h"

void Solution::HemisphereTSA(){
    cout << FORMULA  << "3 * PI * (Radius * Radius)" << endl;
    cout << SOLUTION;
    cout << "= PI * " << first_para << " * " << first_para << endl;
    cout << "= PI * " << first_para * first_para << endl;
}

void Solution::HemisphereCSA(){
    cout << FORMULA  << "2 * PI * (Radius * Radius)" << endl;
    cout << SOLUTION;
    cout << "= PI * " << first_para << " * " << first_para << endl;
    cout << "= PI * " << first_para * first_para << endl;
}

void Solution::HemisphereV(){
    cout << FORMULA  << "2 / 3 * PI * (Radius * Radius * Radius)" << endl;
    cout << SOLUTION;
    cout << "= PI * " << first_para << " * " << first_para << endl;
    cout << "= PI * " << first_para * first_para << endl;
}

void Solution::CylinderCSA(){
    cout << "Solution class member called" << endl;
}

void Solution::CylinderTSA(){
    cout << "Solution class member called" << endl;
}

void Solution::CylinderV(){
    cout << "Solution class member called" << endl;
}

void Solution::ConeCSA(){
    cout << "Solution class member called" << endl;
}

void Solution::ConeTSA(){
    cout << "Solution class member called" << endl;
}

void Solution::ConeV(){
    cout << "Solution class member called" << endl;
}    
