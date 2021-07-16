#ifndef EXCEPTION_HANDLING_H
#define EXCEPTION_HANDLING_H
#include "declarations.h"

class Exception_Handling : public declarations {
public:
	void check_if_typed_string();
	void check_if_typed_string_and_invaild_number();
	string error_message = "Inputs Can't be Negative or Zero\n\n";

private:
	string invaild_message_string = "You typed a string or an invaild character, try again";
	string invaild_message = "\nInvaild Input Detected, try again";
};

#endif
