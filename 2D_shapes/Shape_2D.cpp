#include "Shape_2D.h"
#include "../declarations.h"
#include "../exception_handling.h"


Shape_2D::Shape_2D()
{
    cout << "Enter any 2D shape respectively" << endl;
    cout << "1. Square \n";
    cout << "2. Rectangle \n";
    cout << "3. Parallelogram \n";
    cout << "4. Circle \n";
    cout << "5. Quadrilateral \n";
    cout << "6. Trapezium \n";
    cout << "7" << exit_str;
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

            case 7:
                cout << console_message;
                getchar();
            break;

            default:
                Exh.check_if_typed_string_and_invaild_number();
                Shape_2D();
            break;
        }

}
