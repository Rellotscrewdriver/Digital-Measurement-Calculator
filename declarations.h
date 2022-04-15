#ifndef DECLARATIONS_H
#define DECLARATIONS_H

#include <iostream>
#include <string>
#include <limits>

using namespace std;

class declarations {
public:
	//these variables are responsible for taking input
	int WhichShape;
	int Measurement_Type;
	string dimensional;
	string Measurement_Name;
	string ShapeName;

protected:
	string Text_radius = "radius: ";
	string Text_width = "width: ";
	string Text_length = "length: ";
	string Text_height = "height: ";

};

#endif
