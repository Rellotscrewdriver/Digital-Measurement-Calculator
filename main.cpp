#include "2D_shapes/Shape_2D.h"
#include "3D_Shapes/Shape_3D.h"

string input = "your input: ";

int main()
{

    string dimensional;

    cout << "Enter The Dimensional in which you wanna find the measure of: ";
    cin >> dimensional;

    if(dimensional == "2d" || dimensional == "2D"){
        cout << endl;
        Shape_2D();
    }
    else if (dimensional == "3d" || dimensional == "3D"){
        cout << endl;
        Shape_3D();
    }
    else{
        cout << "InValid Input, Try again\n" << endl;
        //main();
        cout << endl;
    }

    cout << endl;

    system("pause");

    return 0;
}
