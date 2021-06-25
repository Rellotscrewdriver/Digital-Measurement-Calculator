#ifndef DECLARATIONS_H
#define DECLARATIONS_H

#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>
#include <ctime>

using namespace std;

class declarations{
    public:
        //this variable is responsible for taking input
        int WhichShape;
        string shape;
        const string input = "Input: ";
        const string output = "Output: ";
        time_t timetoday;

    protected:
        double length;
        double width;
        double height;
        double side;
        const float Pi = 3.14;
        double pi = 22/7;
        double Radius;
        double Diameter = Radius/2;
        double base1;
        double base2;
        float half = 0.5;
        double diagonal;
        double slant_height;

        string Text_radius = "radius: ";
        string Text_width = "width: ";
        string Text_length = "length: ";
        string Text_height = "height: ";

};

#endif
