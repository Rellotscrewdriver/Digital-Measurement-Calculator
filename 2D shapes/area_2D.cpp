#include "area_2D.h"

using namespace std;

string input = "input: ";

area_2D::area_2D(){
    int whichShape;
    cout << "Which 2D Shape do you wanna find the measure of:" << endl;
    cout << "type the number down below" << endl;
    cout << "1 Square" << endl;
    cout << "2 Rectangle" << endl;
    cout << "3 Triangle"<< endl;
    cout << "4 Parallelogram" <<endl;
    cout << input;
    cin >> whichShape;

    switch(whichShape){
        case 1:
            this->square();
        break;

        case 2:
            this->rectangle();
        break;

        case 3:
            this->triangle();
        break;

        case 4:
            this->parallelogram();
        break;
    }
}

area_2D::~area_2D(){}

void area_2D::rectangle(){
    cout << length * width << endl;
}

void area_2D::circle(){
    cout << "enter the radius of circle: ";
    cout << 22/7 * radius * radius << endl;
}

void area_2D::parallelogram(){
    cout << length * width << endl;
}

void area_2D::square(){
    cout << "Enter one side of square to find the area: ";
    cin >> sides;
    cout << 4 * sides << endl;
}

void area_2D::triangle(){
    cout << "Enter the Width: ";
    cin >> width;
    cout << "Enter the height(also known as length): ";
    cin >> length;
    cout << .5 * length * width << endl;
}
