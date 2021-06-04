#include "../3D_Shapes/Shape_3D.h"

Hemisphere::Hemisphere(){
    shape = "Hemisphere";
    cout << "What you wanna measure form" << shape << "?" << endl;
    cout << "1. Curved Surface Area" << endl;
    cout << "2. Total Surface Area" << endl;
    cout << "3. Volume" << endl;
    cin >> WhichShape;
    if(WhichShape == 1)
        this->CSAHemisphere();
    else if (WhichShape == 2)
        this->TSAHemisphere();
    else if (WhichShape == 3)
        this->VHemisphere();
    else{
        cout << "Try Again" << endl;
        Hemisphere();
    }

}

void Hemisphere::CSAHemisphere(){
    cout << "Specify the radius to find the Curved Surface area of hemisphere: ";
    cout << Text_radius; cin >> radius;
    cout << output << 2 * pi * (radius * radius) << endl;
    Shape_3D();
}
void Hemisphere::TSAHemisphere(){
    cout << "Specify the radius to find the Total Surface Area of hemisphere: ";
    cout << Text_radius; cin >> radius;
    cout << output << 3 * pi * (radius * radius) << endl;
    Shape_3D();
}
void Hemisphere::VHemisphere(){
    cout << "Specify the radius to find the volume of hemisphere: ";
    cout << Text_radius; cin >> radius;
    cout << output << 2/3 * pi * (radius * radius * radius) << endl;
    Shape_3D();
}
