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
        cout << "InValid Input" << endl;

    cout << "Type something and Press enter to quit now";
    cin >> dimensional;
    //^ sometimes the program quits unexceptionally so I put this input statment
}
