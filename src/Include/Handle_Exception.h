#ifndef HANDLE_EXCEPTION_H
#define HANDLE_EXCEPTION_H

#include "../Include/Shape_2D.h"
#include "../Include/Shape_3D.h"

using namespace std;

class Handle_Exception{
public:
    /////////////////////////////////////////////////
    /// \brief checks whether the user entered string and acts accordinly
    ///
    /// \param  check if shape is 3D
    ///
    /// checks whether the user entered string and the string
    /// of the shape was 3D, it will show the error and recurse
    /// back to shape_3D(), if it's not 3D, we assume it's 2D
    /// and it will recurse back to shape_2D()
    /////////////////////////////////////////////////
	void check_if_user_entered_string_and_shape_3D(bool checkifshapeis3D);

    /////////////////////////////////////////////////
    /// \brief checks whether the user entered string or invaild Number
    ///
    /// this function checks whether the user entered string or invaild Number
    /// if it was string, then the user will receive the error message stating
    /// that a stribg was entered where integer should be, if it was invaild number
    /// which doesn't match any other shape, it will show the invaild number message
    /////////////////////////////////////////////////
	void check_if_user_entered_string_or_invaild_number();

	string negative_number_error_message = "Inputs Can't be Negative or Zero\n\n";

    /////////////////////////////////////////////////
    /// \brief checks whether the user typed a negative number
    ///
    /// \param  FirstCondition
    /// \param  SecondCondition
    /// \param  ThirdCondition
    /// \param  FourthCondition
    /// \return true or false depending upon the user entered
    ///
    /// This function checks conditions of different parameters and prints true or false
    /// whatever the output is, the if statement will do accordingly
    /////////////////////////////////////////////////
    bool check_one_condition(double FirstCondition);
    bool check_two_conditions(double FirstCondition, double SecondCondition);
    bool check_three_conditions(double FirstCondition, double SecondCondition, double ThirdCondition);
    bool check_four_conditions(double FirstCondition, double SecondCondition, double ThirdCondition, double FourthCondition);

private:
    /////////////////////////////////////////////////
    /// \brief stops buffer overflow
    ///
    /// This function stops buffer overflow, therefore stopping the program to crash
    /////////////////////////////////////////////////
    void Stop_buffer_OverFlow();
    string invaild_message_string = "You typed a string or an invaild character, try again";
	string invaild_message_invaild_character = "\nInvaild Input Detected, try again";
};

#endif
