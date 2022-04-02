#ifndef DECLARATIONS_H
#define DECLARATIONS_H

#include <iostream>
#include <string>
#include <limits>

using namespace std;


class declarations {
public:
	//this variable is responsible for taking input
	int WhichShape;
	string shape;
	const string input = "Input: ";
	const string output = "Output: ";
	const string exit_str = ". exit the program\n";
	const string console_message = "Press any key to continue...";
	const string str_measure_type = "Enter the measure type\n";

protected:
    //these data types were changed from double to float due to less precision thus saving some memory
	float length;
	float width;
	float height;
    float number_of_sides[10];
	float side;
	const float Pi = 3.14f;
	float pi = 22 / 7;
	float Diameter = Radius / 2;
	float Radius;
	float base1;
	float base2;
	float half = 0.5f;
	float diagonal;
	float slant_height;
	float apothem;

    string previous_step = ". Previous step\n";

	string Text_radius = "radius: ";
	string Text_width = "width: ";
	string Text_length = "length: ";
	string Text_height = "height: ";

};

#endif
