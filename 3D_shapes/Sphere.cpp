#include "../3D_Shapes/Shape_3D.h"

Sphere::Sphere(){
    shape = " Sphere";
    cout << "What you wanna measure form " << shape << " ?" << endl;
    cout << "1. Surface Area" << endl;
    cout << "2. Volume" << endl;
    cout << "3. Hemisphere";
    cin >> WhichShape;
    if(WhichShape == 1)
        SASphere();
    else if (WhichShape == 2)
        VSphere();
    else if (WhichShape == 3)
        Hemisphere();
    else
        Exh.check_if_typed_string_and_invaild_number();
}

void Sphere::SASphere(){
    cout << "specify the radius" << input;
    cin >> Radius;
    Exh.check_if_typed_string();
    cout << 4 * pi * Radius * Radius << endl;

}

void Sphere::VSphere(){
    cout << "specify the radius" << input;
    cin >> Radius;
    Exh.check_if_typed_string();
    cout << output << 4/3 * pi * Radius * (Radius * Radius * Radius) << endl;
    Shape_3D();
}
