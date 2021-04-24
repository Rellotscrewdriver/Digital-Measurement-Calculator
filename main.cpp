#include "Shape_2D.h"
#include "Shape_3D.h"

string input = "your input: ";

int main()
{
    string dimensional;

    cout << "Enter The Dimensional in which you wanna find the measure of: " << endl;
    cout << input;
    cin >> dimensional;

    if(dimensional == "2d" || dimensional == "2D")
        Shape_2D();
    else if (dimensional == "3d" || dimensional == "3D")
        Shape_3D();
    else
        cout << "InValid Input, Try again" << endl;

    system("pause");

    return 0;
}
