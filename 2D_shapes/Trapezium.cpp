#include "../2D_Shapes/Shape_2D.h"

Trapezium::Trapezium(){
    shape = " Trapezium";
    cout << "What you wanna measure form" << shape << "?" << endl;
    cout << "1. Area" << endl;
    cout << "2. perimeter" << endl;
    cout << input; cin >> WhichShape;
    if(WhichShape == 1)
        this->ATrapezium();
    else if (WhichShape == 2)
        this->PTrapezium();
    else{
        Exh.check_if_typed_string_and_invaild_number();
        Trapezium();
    }
}

void Trapezium::ATrapezium(){
    cout << "specify the height, base1 and base2 repectively" << endl;
    cout << Text_height; cin >> height;
    cout << "base1: "; cin >> base1;
    cout << "base2: "; cin >> base2;
    Exh.check_if_typed_string();
    cout << output << base1 + base2/2 * height;
    Shape_2D();
}
void Trapezium::PTrapezium(){
    int SideA, SideB, SideC, SideD;
    cout << "Enter the each side of the quadrilateral: ";
    cout << "Side_A: "; cin >> SideA;
    cout << "Side_B: "; cin >> SideB;
    cout << "Side_C: "; cin >> SideC;
    cout << "Side_D: "; cin >> SideD;
    Exh.check_if_typed_string();
    cout << output << SideA + SideB + SideC + SideD;
    Shape_2D();
}
