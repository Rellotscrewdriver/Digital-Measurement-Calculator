#ifndef DISPLAY_H
#define DISPLAY_H

#include "../declarations.h"

class Display {
public:
	string Shape_Name;
    string dimensional;

	const string exit_str = " exit the program\n";
    const string switch_to_3D = " switch to 3D";
    const string switch_to_2D = " Switch to 2D";
	const string input = "Input: ";
	const string output = "Output: ";
	const string console_message = "Press any key to continue...";
	const string str_measure_type = "\nEnter the measure type\n";
    const string previous_step = " Previous step ";

    string triangle = "Triangle";
    string Equilateral_triangle = "Equilateral Triangle";
    string Isosceles_triangle = "Isosceles Triangle";
    string herons_triangle = "Triangle with three sides";
    //
	bool dimension_compare2D(string parameter);
    bool dimension_compare3D(string parameter);
    bool user_typed_exit(string parameter);

    void enter_dimension();
	void select_dimension(string dimensional);


    void list_2D_Shapes_text();
    void list_3D_Shapes_text();
	void measurement_type_2D_text();
	void measurement_type1_3D_text();
	void measurement_type2_3D_text();
    void measurement_type_triangle_text();

    string one_parameter_text(int ShapeNum);
    string two_parameters_text(int ShapeNum, int input_step);
    string three_parameters_text(int ShapeNum, int input_step);
    string three_four_parameters_text(int ShapeNum);
    string triangle_special(int ShapeNum, int input_step);

private:

};

#endif
