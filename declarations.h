#ifndef DECLARATIONS_H
#define DECLARATIONS_H

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class declarations{
    public:
        //this variable is responsible for taking input
        int WhichShape;
        string shape;
        const string input = "your input: ";
        const string output = "Output: ";
    protected:
        int length;
        int width;
        int height;
        int side;
        const float Pi = 3.14;
        int pi = 22/7;
        int Radius;
        int Diameter = Radius/2;
        int base1;
        int base2;
        int half = 0.5;
        int diagonal;
        int slant_height;
        int radius;
        string Text_radius = "radius: ";
        string Text_width = "width: ";
        string Text_length = "length: ";
        string Text_height = "height: ";

};

#endif
