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

	const string input = "Input: ";
	const string output = "Output: ";
	const string exit_str = ". exit the program\n";
	const string console_message = "Press any key to continue...";
	const string str_measure_type = "Enter the measure type\n";
    const string previous_step = ". Previous step\n";

protected:
	string Text_radius = "radius: ";
	string Text_width = "width: ";
	string Text_length = "length: ";
	string Text_height = "height: ";

};

#endif
