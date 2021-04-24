#include "Shape_2D.h"


const static string input = "your input: ";
string shape;
const string output = "Output: ";

Shape_2D::Shape_2D()
{
    cout << "Which 2D shape do you want to find the measure: " << endl;
    cout << "1. Square \n";
    cout << "2. Rectangle \n";
    cout << "3. Parallelogram \n";
    cout << "4. Circle \n";
    cout << "5. Quadrilateral \n";
    cout << "6. Trapezium \n";
    cout << input; cin >> WhichShape;

    switch(WhichShape){
        case 1:
            this->Square();
        break;
        case 2:
            this->Rectangle();
        break;
        case 3:
            this->Parallelogram();
        break;
        case 4:
            this->Circle();
        break;
        case 5:
            this->Quadrilateral();
        break;
        case 6:
            this->Trapezium();
        break;
    }

}

Shape_2D::~Shape_2D(){}

// Square class starting

void Shape_2D::Square(){
    shape = " Square";
    cout << "What you wanna measure form" << shape << "?" << endl;
    cout << "1. Area" << endl;
    cout << "2. perimeter" << endl;
    cout << input; cin >> WhichShape;
    if(WhichShape == 1)
        this->Asquare();
    else if (WhichShape == 2)
        this->Psquare();
    else
        cout << "try typing the correct value from above again?" << endl << input;
        cin >> WhichShape;
}

void Shape_2D::Psquare(){
    cout << "Specify one side of square to find out the perimeter " << endl;
    cout << input; cin >> side;
    cout << output << 4 * side << endl;
}

void Shape_2D::Asquare(){
    cout << "Specify one side of square to find out it's perimeter" << endl;
    cout << input; cin >> side;
    cout << output << side * side << endl;
}

//Square class ending

//Rectangle class start

void Shape_2D::Rectangle(){
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
        cout << "Try Again" << endl;
}
void Shape_2D::PRectangle(){
    cout << "Specify the width and height for perimeter" << endl;
    cout << Text_length; cin >> length;
    cout << Text_width; cin >> width;
    cout << output << 2 * (length + width);
}
void Shape_2D::ARectangle(){
    cout << "Specify the width and height for area respectively" << endl;
    cout << Text_height; cin >> height;
    cout << Text_width; cin >> width;
    cout << output << height * width << endl;
}

//Rectangle class ending

//Parallelogram class starting

void Shape_2D::Parallelogram(){
    shape = " Parallelogram";
    cout << "What you wanna measure form" << shape << "?" << endl;
    cout << "1. Area" << endl;
    cout << "2. perimeter" << endl;
    cout << input; cin >> WhichShape;
    if(WhichShape == 1)
        this->AParallelogram();
    else if (WhichShape == 2)
        this->PParallelogram();
    else
        cout << "Try Again" << endl;
}
void Shape_2D::AParallelogram(){
    cout << "Specify the width and height for area respectively" << endl;
    cout << Text_height; cin >> height;
    cout << Text_width; cin >> width;
    cout << output << height * width << endl;
}
void Shape_2D::PParallelogram(){
    cout << "Specify the width and height for perimeter" << endl;
    cout << Text_length; cin >> length;
    cout << Text_width; cin >> width;
    cout << output << 2 * (length + width);
}

//Parallelogram class ending

//Circle class Starting
void Shape_2D::Circle(){
    shape = " Circle";
    cout << "What you wanna measure form" << shape << "?" << endl;
    cout << "1. Area" << endl;
    cout << "2. perimeter" << endl;
    cout << input; cin >> WhichShape;
    if(WhichShape == 1)
        this->ACircle();
    else if (WhichShape == 2)
        this->PCircle();
    else
        cout << "Try Again" << endl;
}
void Shape_2D::ACircle(){
    cout << "Specify the radius to find the area of circle " << endl;
    cout << Text_radius; cin >> Radius;
    cout << output << Pi * (2 * Radius);
}
void Shape_2D::PCircle(){
    cout << "Specify the radius to find the perimeter of circle " << endl;
    cout << Text_radius; cin >> Radius;
    cout << output << 2 * Radius * Pi << endl;
}
//Circle class ending

//Quadrilateral class starting

void Shape_2D::Quadrilateral(){
    shape = " Quadrilateral";
    cout << "What you wanna measure form" << shape << "?" << endl;
    cout << "1. Area" << endl;
    cout << "2. perimeter" << endl;
    cout << input; cin >> WhichShape;
    if(WhichShape == 1)
        this->AQuadrilateral();
    else if (WhichShape == 2)
        this->PQuadrilateral();
    else
        cout << "Try Again" << endl;
}
void Shape_2D::PQuadrilateral(){

}

void Shape_2D::AQuadrilateral(){

}
//Quadrilateral class ending

//Trapezium class starting

void Shape_2D::Trapezium(){
    shape = " Trapezium";
    cout << "What you wanna measure form" << shape << "?" << endl;
    cout << "1. Area" << endl;
    cout << "2. perimeter" << endl;
    cout << input; cin >> WhichShape;
    if(WhichShape == 1)
        this->ATrapezium();
    else if (WhichShape == 2)
        this->PTrapezium();
    else
        cout << "Try Again" << endl;
}

void Shape_2D::ATrapezium(){
    cout << "specify the height, base1 and base2 repectively" << endl
    cout << Text_height; cin >> height;
    cout << "base1: "; cin >> base1;
    cout << "base2: "; cin >> base2;
    cout << output << half * height * (base1 + base2);

}
void Shape_2D::PTrapezium(){

}
//Trapezium class ending
