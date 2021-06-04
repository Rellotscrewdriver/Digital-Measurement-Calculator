#include "Shape_2D.h"

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
    cout << endl;
        switch(WhichShape){
            case 1:
                Square();
            break;

            case 2:
                Rectangle();
            break;

            case 3:
                Parallelogram();
            break;

            case 4:
                Circle();
            break;

            case 5:
                Quadrilateral();
            break;

            case 6:
                Trapezium();
            break;

            default:
                cout << "Invaild Input" << endl;
                Shape_2D();
            break;
        }

}
