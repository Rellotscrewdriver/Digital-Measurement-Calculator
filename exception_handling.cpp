#include "exception_handling.h"
#include "declarations.h"
#include <limits>

void Exception_Handling::check_if_typed_string(){
    if(cin.fail()){
        cout << "You typed a string, try again" << endl << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void Exception_Handling::check_if_typed_string_and_invaild_number(){
    if(cin.fail()){
        cout << "You typed a string, try again" << endl << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else {
        cout << "Invaild Input Detected" << endl << endl;
    }
}

void Exception_Handling::check_if_number_is_negative(){
//fuck this thing... it doesn't work and C++ doesn't have simple exceptions
    if(length <= 0.0 || width <= 0.0 || height <= 0.0 || side <= 0.0){
        cout << "Opps, Measurements can't be Zero" << endl;
    } else if(Radius <= 0.0 || base1 <= 0.0 || base2 <= 0.0){
        cout << "Opps, Measurements can't be Zero" << endl;
    } else if(diagonal <= 0.0 || slant_height <= 0.0){
        cout << "Opps, Measurements can't be Zero" << endl;
    }
}


