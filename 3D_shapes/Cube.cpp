#include "../3D_Shapes/Shape_3D.h"

Cube::Cube(){
    //shape = "Cube ";
    cout << "What you wanna measure form " << "?" << endl;
    cout << "1. Surface Area" << endl;
    cout << "2. Volume" << endl;
    cout << input; cin >> WhichShape;
    if(WhichShape == 1)
        SACube();
    else if (WhichShape == 2)
        VCube();
    else{
        cout << "Try Again" << endl;
        Cube();
    }
}

void Cube::SACube(){
    cout << "Specify one side of cube to find the area" << endl;
    cout << input; cin >> side;
    cout << output << 6 * (side * side);
    Shape_3D();
}

void Cube::VCube(){
    cout << "specify one side of cube to find it's volume" << endl;
    cout << input; cin >> side;
    cout << output << side * side * side;
    Shape_3D();
}