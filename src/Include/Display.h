#pragma once

#include "../Include/declarations.h"


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

    /////////////////////////////////////////////////
    /// \brief makes a "-----" in the console
    ///
    /// \param Choose custom symbol
    /// \param Number of Rules
    /////////////////////////////////////////////////
    void horizontal_rule(char symbol, int NoofNumbers);

    /////////////////////////////////////////////////
    /// \brief Shows a Welcome Message
    /////////////////////////////////////////////////
    void Welcome_Message();

    /////////////////////////////////////////////////
    /// \brief compares whatever the user has input
    ///
    /// \param 2D or 3D or e/exit
    /// \return true or false depending upon user input
    ///
    /// these functions compare whatever the user has input
    /// they are usually used in select dimension to find out whether
    /// the user has inputted the right parameter in enter_dimension()
    /////////////////////////////////////////////////
	bool dimension_compare2D(string parameter);
    bool dimension_compare3D(string parameter);
    bool user_typed_exit(string parameter);

    /////////////////////////////////////////////////
    /// \brief this function asks the user to input 2d or 3d dimension
    /////////////////////////////////////////////////
    void enter_dimension();

    /////////////////////////////////////////////////
    /// \brief selects the appropriate dimension enter by user in enter_dimension()
    ///
    /// \param dimension in string
    /////////////////////////////////////////////////
	void select_dimension(string dimensional);

    /////////////////////////////////////////////////
    /// \brief text list which outputs in the console
    /////////////////////////////////////////////////
    void list_2D_Shapes_text();
    void list_3D_Shapes_text();
	void measurement_type_2D_text();
	void measurement_type1_3D_text();
	void measurement_type2_3D_text();
    void measurement_type_triangle_text();

    /////////////////////////////////////////////////
    /// \brief text which appears to ask to type the appropriate input
    ///
    /// \param Shape Number
    /// \param Input Step
    /// \return string which directs user to input. Eg-: "Input Radius: "
    ///
    /// these functions tell user to input appropriate parameters in the console
    /// like "Input Radius" of Sphere, Circle or Whatever the user has inputted
    /// before. then it checks the shape number if there's only one parameter
    /// or else it will take input step which is done when the user inputs another parameter
    /// Eg-: "Input Length: " if the user types an appropriate input
    /// then it will proceed to show "Input Height: "
    /////////////////////////////////////////////////
    string one_parameter_text(int ShapeNum);
    string two_parameters_text(int ShapeNum, int input_step);
    string three_parameters_text(int ShapeNum, int input_step);
    string three_four_parameters_text(int ShapeNum);
    string triangle_special(int ShapeNum, int input_step);
};
