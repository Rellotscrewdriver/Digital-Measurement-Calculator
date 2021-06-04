#include "../2D_Shapes/Shape_2D.h"

Circle::Circle(){
    shape = " Circle";
    cout << "What you wanna measure form" << shape << "?" << endl;
    cout << "1. Area" << endl;
    cout << "2. perimeter" << endl;
    cout << input; cin >> WhichShape;
    if(WhichShape == 1)
        this->ACircle();
    else if (WhichShape == 2)
        this->PCircle();
    else{
        cout << "Try Again" << endl;
        Circle();
    }
}
void Circle::ACircle(){
    cout << "Specify the radius to find the area of circle " << endl;
    cout << Text_radius; cin >> Radius;
    cout << output << Pi * (2 * Radius);
    Shape_2D();
}
void Circle::PCircle(){
    cout << "Specify the radius to find the perimeter of circle " << endl;
    cout << Text_radius; cin >> Radius;
    cout << output << 2 * Radius * Pi << endl;
    Shape_2D();
}
