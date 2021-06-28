#include "exception_handling.h"
#include "declarations.h"
#include <limits>

void Exception_Handling::check_if_typed_string(){
    if(cin.fail()){
        cout << "You typed a string, try again" << endl << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.sync();//discards all that is left in buffer
        cin >> ws; //discards all the whitespace before any operation
    }
}

void Exception_Handling::check_if_typed_string_and_invaild_number(){
    if(cin.fail()){
        cout << "You typed a string, try again" << endl << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.sync();
        cin >> ws;
    } else {
        cout << "Invaild Input Detected" << endl << endl;
    }
}
