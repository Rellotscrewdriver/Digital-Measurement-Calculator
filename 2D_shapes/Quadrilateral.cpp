#include "../2D_Shapes/Shape_2D.h"

Quadrilateral::Quadrilateral(){
    cout << str_measure_type;
    cout << "1. Area" << endl;
    cout << "2. perimeter" << endl;
    cout << "3" << exit_str;
    cout << input; cin >> WhichShape;
    if(WhichShape == 1)
        this->AQuadrilateral();
    else if (WhichShape == 2)
        this->PQuadrilateral();
    else if (WhichShape == 3) {
        cout << console_message;
        getchar();
    } else {
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
    if( (SideA <= 0.0 && SideB <= 0.0) || (SideA <= 0.0 || SideB <= 0.0) ){
        cout << Exh.error_message;
    } else if( (SideC <= 0.0 && SideD <= 0.0) || (SideA <= 0.0 || SideB <= 0.0) ){
        cout << "Inputs Can't be Negative or Zero" << endl << endl;
    } else {
        cout << output << SideA + SideB + SideC + SideD << endl << endl;
    }
    Shape_2D();
}

void Quadrilateral::AQuadrilateral(){
    cout << "Enter the Diagonal and 2 heigths of triangle";
    cin >> diagonal;
    cin >> base1;
    cin >> base2;
    Exh.check_if_typed_string();
    if( (base1 <= 0.0 && base2 <= 0.0) || (base1 <= 0.0 || base2 <= 0.0) ){
        cout << Exh.error_message;
    } else if(diagonal <= 0.0){
        cout << Exh.error_message;
    } else {
        cout << half * diagonal * base1 * base2 << endl << endl;
    }
    Shape_2D();
}
