#ifndef EXCEPTION_HANDLING_H
#define EXCEPTION_HANDLING_H
#include "declarations.h"


class Exception_Handling : public declarations {
public:
	void check_if_typed_string(bool checkifshapeis3D);
	void check_if_typed_string_and_invaild_number();
	string error_message = "Inputs Can't be Negative or Zero\n\n";

    bool check_one_condiiton(double FirstCondition);
    bool check_two_conditions(double FirstCondition, double SecondCondition);
    bool check_three_conditions(double FirstCondition, double SecondCondition, double ThirdCondition);
    bool check_four_conditions(double FirstCondition, double SecondCondition, double ThirdCondition, double FourthCondition);
private:
    void Stop_buffer_OverFlow(){
        cout << invaild_message_string << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    string invaild_message_string = "You typed a string or an invaild character, try again";
	string invaild_message = "\nInvaild Input Detected, try again";
};

#endif
