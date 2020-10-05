#include "area_2D.h"
#include "perimeter_2D.h"

using namespace std;

int main()
{
    string input = "input: ";
    string dimensional;
    //string
    cout << "Which Dimension do you wanna find out the measure, 2D or 3D" << endl;
    cout << input;
    cin >> dimensional;

    if(dimensional == "2D"){
        cout << "Which shape do want to choose: " << endl;
        cout << "Which 2D Shape do you wanna find the measure of:" << endl;
        cout << "type the number down below" << endl;
        cout << "1 Square" << endl;
        cout << "2 Rectangle" << endl;
        cout << "3 Triangle"<< endl;
        cout << "4 Parallelogram" <<endl;
        cout << input;
//        cin >> whichShape;
        area_2D();
    } else if(dimensional == "2d"){
        area_2D();
    } else if(dimensional == "3D"){

    } else if(dimensional == "3D"){

    } else {
        cout << "invaild input, restart the console and try again";
    }


    /* List of shapes in 2D
        rectangle
        square
        Circle
        Triangle

        List of shapes in 3D
        cuboid
        cude
        cylinder
        sphere(full sphere or half-hemisphere)
        Cone
        (surface area / lateral surface area / total surface area / volume)
    */
    return 0;
}
