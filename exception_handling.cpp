#include "exception_handling.h"
#include "declarations.h"
#include "2D_shapes/Shape_2D.h"

void Exception_Handling::check_if_typed_string() {
	if (cin.fail()) {
		cout << invaild_message_string << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		/*
            cin.sync()
            cin >> ws;

            these two syntaxes were removed due to their inconsitency
            with forward and backslash symbols
		*/
    }
    Shape_2D();
}

void Exception_Handling::check_if_typed_string_and_invaild_number() {
	if (cin.fail()) {
		cout << invaild_message_string << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	} else
		cout << invaild_message << endl;

}
