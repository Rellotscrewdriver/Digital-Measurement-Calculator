#include "../2D_Shapes/Shape_2D.h"

Square::Square(){
    shape = " Square";
    cout << "What you wanna measure form" << shape << "?" << endl;
    cout << "1. Area" << endl;
    cout << "2. perimeter" << endl;
    cout << input; cin >> WhichShape;
    if(WhichShape == 1)
        this->Asquare();
    else if (WhichShape == 2)
        this->Psquare();
    else{
        Exh.check_if_typed_string_and_invaild_number();
        Square();
    }
}

void Square::Psquare(){
    cout << "Specify one side of square to find out the perimeter " << endl;
    cout << input; cin >> side;
    Exh.check_if_typed_string();
    cout << output << 4 * side << endl;
    Shape_2D();
}

void Square::Asquare(){
    cout << "Specify one side of square to find out it's perimeter" << endl;
    cout << input; cin >> side;
    Exh.check_if_typed_string();
    cout << output << side * side << endl;
    Shape_2D();
}
