#ifndef HANDLE_EXCEPTION_H
#define HANDLE_EXCEPTION_H

#include "../2D_shapes/Shape_2D.h"
#include "../3D_shapes/Shape_3D.h"

using namespace std;

class Handle_Exception{
public:
	void check_if_user_entered_string_and_shape_3D(bool checkifshapeis3D);
	void check_if_user_entered_string_or_invaild_number();
	string negative_number_error_message = "Inputs Can't be Negative or Zero\n\n";

    bool check_one_condition(double FirstCondition);
    bool check_two_conditions(double FirstCondition, double SecondCondition);
    bool check_three_conditions(double FirstCondition, double SecondCondition, double ThirdCondition);
    bool check_four_conditions(double FirstCondition, double SecondCondition, double ThirdCondition, double FourthCondition);

private:
    void Stop_buffer_OverFlow();
    string invaild_message_string = "You typed a string or an invaild character, try again";
	string invaild_message_invaild_character = "\nInvaild Input Detected, try again";
};

#endif
