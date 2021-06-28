#include "Shape_3D.h"

Cuboid::Cuboid(){
    shape = "Cuboid ";
    cout << "What you wanna measure form "<< shape <<"?" << endl;
    cout << "1. Surface Area" << endl;
    cout << "2. Volume" << endl;
    cout << input; cin >> WhichShape;
    if(WhichShape == 1)
        SACuboid();
    else if (WhichShape == 2)
        VCuboid();
    else{
        Exh.check_if_typed_string_and_invaild_number();
        Cuboid();
    }
}

void Cuboid::SACuboid(){
    cout << "specify Height, Width and Height to find it's Surface Area" << endl;
    cout << Text_width;
    cin >> width;
    cout << endl;
    cout << Text_height;
    cin >> height;
    cout << endl;
    cout << Text_length;
    cin >> length;
    cout << endl;
    Exh.check_if_typed_string();
    if( (width <= 0.0 && height <= 0.0) || (height <= 0.0 || width <= 0.0) )
        cout << Exh.error_message;
    else if(length <= 0.0)
        cout << Exh.error_message;
    else
        cout << 2 * ((length * width) + (width * height) + (height * length)) << endl;

    Shape_3D();
}

void Cuboid::VCuboid(){
    cout << "specify width, height and volume to find it's volume" << endl;
    cout << Text_width; cin >> width;
    cout << Text_height; cin >> height;
    cout << Text_length; cin >> length;
    Exh.check_if_typed_string();
    if( (width <= 0.0 && height <= 0.0) || (height <= 0.0 || width <= 0.0) )
        cout << Exh.error_message;
    else if(length <= 0.0)
        cout << Exh.error_message;
    else
        cout << length * height * width << endl << endl;
    Shape_3D();
}
