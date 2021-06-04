#include "Shape_3D.h"
#include "../declarations.h"

Cone::Cone(){
    shape = "Cone";
    cout << "What you wanna measure form" << shape << "?" << endl;
    cout << "1. Curved Surface Area" << endl;
    cout << "2. Total Surface Area(Right Circular)" << endl;
    cout << "3. Volume" << endl;
    cin >> WhichShape;
    if(WhichShape == 1)
        this->CSACone();
    else if (WhichShape == 2)
        this->TSACone();
    else if (WhichShape == 2)
        this->VCone();
    else{
        cout << "Try Again" << endl;
        Cone();
    }
}

void Cone::CSACone(){
    cout << "specify the radius to find Curved surface area of cone";
    cout << Text_radius; cin >> radius;
    cout << "Output:" << pi * radius * length << endl;
    Shape_3D();
}
void Cone::TSACone(){
    cin >> radius;
    cin >> slant_height;
    cout << pi * radius * (slant_height * radius) << endl;
    Shape_3D();
}
void Cone::VCone(){
    cout << "";
    cin >> radius;
    cin >> height;
    cout << 1/3 * pi * (radius * radius) * height << endl;
    Shape_3D();
}
