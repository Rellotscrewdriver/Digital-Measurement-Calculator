#include "../2D_Shapes/Shape_2D.h"


Quadrilateral::Quadrilateral(){
    shape = " Quadrilateral";
    cout << "What you wanna measure form" << shape << "?" << endl;
    cout << "1. Area" << endl;
    cout << "2. perimeter" << endl;
    cout << input; cin >> WhichShape;
    if(WhichShape == 1)
        this->AQuadrilateral();
    else if (WhichShape == 2)
        this->PQuadrilateral();
    else{
        Exh.check_if_typed_string_and_invaild_number();
        Quadrilateral();
    }
}
void Quadrilateral::PQuadrilateral(){
    int SideA, SideB, SideC, SideD;
    cout << "Enter the each side of the quadrilateral: " << input;
    cin >> SideA;
    cin >> SideB;
    cin >> SideC;
    cin >> SideD;
    Exh.check_if_typed_string();
    cout << output << SideA + SideB + SideC + SideD;
    Shape_2D();
}

void Quadrilateral::AQuadrilateral(){
    cout << "Enter the Diagonal and 2 heigths of triangle";
    cin >> diagonal;
    cin >> base1;
    cin >> base2;
    Exh.check_if_typed_string();
    cout << 1/2 * diagonal * base1 * base2 << endl;
    Shape_2D();
}
