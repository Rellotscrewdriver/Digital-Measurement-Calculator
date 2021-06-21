#include "../2D_Shapes/Shape_2D.h"

Rectangle::Rectangle(){
    shape = " Rectangle";
    cout << "What you wanna measure form" << shape << "?" << endl;
    cout << "1. Area" << endl;
    cout << "2. perimeter" << endl;
    cout << input; cin >> WhichShape;
    if(WhichShape == 1)
        this->ARectangle();
    else if (WhichShape == 2)
        this->PRectangle();
    else
        Exh.check_if_typed_string_and_invaild_number();
}
void Rectangle::PRectangle(){
    cout << "Specify the width and height for perimeter" << endl;
    cout << Text_length; cin >> length;
    cout << Text_width; cin >> width;
    Exh.check_if_typed_string();
    cout << output << 2 * (length + width);
    Shape_2D();
}
void Rectangle::ARectangle(){
    cout << "Specify the width and height for area respectively" << endl;
    cout << Text_height; cin >> height;
    cout << Text_width; cin >> width;
    Exh.check_if_typed_string();
    cout << output << height * width << endl;
    Shape_2D();
}
