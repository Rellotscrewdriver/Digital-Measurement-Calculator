#include "../3D_Shapes/Shape_3D.h"

Sphere::Sphere(){
    shape = "Sphere";
    cout << "What you wanna measure form " << shape <<"?" << endl;
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
    else{
        cout << "Try Again" << endl;
        Sphere();
    }
}

void Sphere::SASphere(){
    cout << "specify the radius" << input;
    cin >> radius;
    cout << 4 * pi * radius * radius << endl;
    Shape_3D();
}

void Sphere::VSphere(){
    cout << "specify the radius" << input;
    cin >> radius;
    cout << output << 4/3 * pi * radius * (radius * radius * radius) << endl;
    Shape_3D();
}
