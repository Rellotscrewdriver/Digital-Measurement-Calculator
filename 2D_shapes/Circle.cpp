#include "../2D_Shapes/Shape_2D.h"

Circle::Circle(){
    shape = "Circle";
    cout << "What you wanna measure from " << shape << " ?" << endl;
    cout << "1. Area" << endl;
    cout << "2. perimeter" << endl;
    cout << input; cin >> WhichShape;
    if(WhichShape == 1)
        this->ACircle();
    else if (WhichShape == 2)
        this->PCircle();
    else{
        Exh.check_if_typed_string_and_invaild_number();
        Circle();
    }
}

void Circle::ACircle(){
    cout << "Specify the radius to find the area of circle " << endl;
    cout << Text_radius; cin >> Radius;
    Exh.check_if_typed_string();
    if(Radius <= 0.0){
        cout << Exh.error_message;
    } else {
        cout << output << Pi * (2 * Radius) << endl << endl;
    }
    Shape_2D();
}

void Circle::PCircle(){
    cout << "Specify the radius to find the perimeter of circle " << endl;
    cout << Text_radius; cin >> Radius;
    Exh.check_if_typed_string();
    if(Radius <= 0.0){
        cout << Exh.error_message;
    } else {
        cout << output << 2 * Radius * Pi << endl << endl;
    }
    Shape_2D();
}
