#include "../3D_Shapes/Shape_3D.h"

Cylinder::Cylinder(){
    shape = "Cylinder";
    cout << "What you wanna measure form" << shape << "?" << endl;
    cout << "1. Curved Surface Area" << endl;
    cout << "2. Total Surface Area" << endl;
    cout << "3. Volume" << endl;
    cin >> WhichShape;
    if(WhichShape == 1)
        this->CSACylinder();
    else if (WhichShape == 2)
        this->TSACylinder();
    else if (WhichShape == 3)
        this->VCylinder();
    else
        cout << "Try Again" << endl;
        Cylinder();
}

void Cylinder::CSACylinder(){
    cin >> radius;
    cin >> height;
    cout << 2 * pi * radius * height << endl;
    Shape_3D();
}
void Cylinder::TSACylinder(){
    cout << Text_radius; cin >> radius;
    cin >> height;
    cout << 2 * pi * radius * (radius + height) << endl;
    Shape_3D();
}
void Cylinder::VCylinder(){
    cout << Text_radius; cin >> radius;
    cout << Text_height; cin >> height;
    cout << pi * radius * radius * height << endl;
    Shape_3D();
}
