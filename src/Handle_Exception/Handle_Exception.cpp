#include "Handle_Exception.h"
#define LIMIT 0.0

void Handle_Exception::check_if_user_entered_string_and_shape_3D(bool checkifshapeis3D) {
	if (cin.fail() && checkifshapeis3D == true) {
        Stop_buffer_OverFlow();
        Shape_3D();
    } else if(cin.fail() && checkifshapeis3D == false){
        Stop_buffer_OverFlow();
        Shape_2D();
    }
}

void Handle_Exception::check_if_user_entered_string_or_invaild_number(){
	if (cin.fail()) {
        Stop_buffer_OverFlow();
	} else
		cout << invaild_message_invaild_character << endl;
}

void Handle_Exception::Stop_buffer_OverFlow(){
        cout << invaild_message_string << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

bool Handle_Exception::check_one_condition(double FirstCondition){
    return (FirstCondition <= LIMIT);
}

bool Handle_Exception::check_two_conditions(double FirstCondition, double SecondCondition) {
    return (FirstCondition <= LIMIT && SecondCondition <= LIMIT)
    || (FirstCondition <= LIMIT || SecondCondition <= LIMIT);
}

bool Handle_Exception::check_three_conditions(double FirstCondition, double SecondCondition, double ThirdCondition) {
    return (FirstCondition <= LIMIT && SecondCondition <= LIMIT)
     || (FirstCondition <= LIMIT || SecondCondition <= LIMIT)
     || (ThirdCondition <= LIMIT);
}

bool Handle_Exception::check_four_conditions(double FirstCondition, double SecondCondition, double ThirdCondition, double FourthCondition) {
    return (FirstCondition <= LIMIT && SecondCondition <= LIMIT)
        || (FirstCondition <= LIMIT || SecondCondition <= LIMIT)
        || (ThirdCondition <= LIMIT && FourthCondition <= LIMIT)
        || (ThirdCondition <= LIMIT || FourthCondition <= LIMIT);
}
