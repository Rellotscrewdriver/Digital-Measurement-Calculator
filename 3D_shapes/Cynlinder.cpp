#include "../3D_Shapes/Shape_3D.h"

Cylinder::Cylinder(){
    shape = "Cylinder";
    cout << "What you wanna measure from " << shape << " ?" << endl;
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
    else{
        Exh.check_if_typed_string_and_invaild_number();
        Cylinder();
    }
}

void Cylinder::CSACylinder(){
    cin >> Radius;
    cin >> height;
    Exh.check_if_typed_string();
    if( (height <= 0.0 && Radius <= 0.0) || (height <= 0.0 || Radius <= 0.0) )
        cout << Exh.error_message;
    else
        cout << 2 * pi * Radius * height << endl;
    Shape_3D();
}
void Cylinder::TSACylinder(){
    cout << Text_radius;
    cin >> Radius;
    cin >> height;
    Exh.check_if_typed_string();
    if( (height <= 0.0 && Radius <= 0.0) || (height <= 0.0 || Radius <= 0.0) )
        cout << Exh.error_message;
    else
        cout << 2 * pi * Radius * (Radius + height) << endl;
    Shape_3D();
}

void Cylinder::VCylinder(){
    cout << Text_radius;
    cin >> Radius;
    cout << Text_height;
    cin >> height;
    Exh.check_if_typed_string();
    if( (height <= 0.0 && Radius <= 0.0) || (height <= 0.0 || Radius <= 0.0) )
        cout << Exh.error_message;
    else
        cout << pi * Radius * Radius * height << endl;
    Shape_3D();
}
