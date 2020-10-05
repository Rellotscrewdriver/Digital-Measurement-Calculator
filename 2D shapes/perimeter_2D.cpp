#include "perimeter_2D.h"
#include "area_2D.h"

using namespace std;

perimeter_2D::perimeter_2D()
{
    cout << "Which 2D Shape do you wanna find the measure of:" << endl;
    cout << "type the number down below" << endl;
    cout << "1 Square" << endl;
    cout << "2 Rectangle" << endl;
    cout << "3 Triangle"<< endl;
    cout << "4 Parallelogram" <<endl;
    //cout << input;
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

perimeter_2D::~perimeter_2D(){}


