#include "../2D_Shapes/Shape_2D.h"

Parallelogram::Parallelogram(){
    shape = " Parallelogram";
    cout << "What you wanna measure form" << shape << "?" << endl;
    cout << "1. Area" << endl;
    cout << "2. perimeter" << endl;
    cout << input; cin >> WhichShape;
    if(WhichShape == 1)
        this->AParallelogram();
    else if (WhichShape == 2)
        this->PParallelogram();
    else{
        cout << "Try Again" << endl;
        Parallelogram();
    }
}
void Parallelogram::AParallelogram(){
    cout << "Specify the width and height for area respectively" << endl;
    cout << Text_height; cin >> height;
    cout << Text_width; cin >> width;
    cout << output << height * width << endl;
    Shape_2D();
}
void Parallelogram::PParallelogram(){
    cout << "Specify the width and height for perimeter" << endl;
    cout << Text_length; cin >> length;
    cout << Text_width; cin >> width;
    cout << output << 2 * (length + width);
    Shape_2D();
}