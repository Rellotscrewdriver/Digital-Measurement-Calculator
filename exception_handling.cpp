#include "exception_handling.h"
#include "declarations.h"
#include "2D_shapes/Shape_2D.h"
#include "3D_shapes/Shape_3D.h"
#define LIMIT 0.0

void Exception_Handling::check_if_typed_string(bool checkifshapeis3D) {
	if (cin.fail() && checkifshapeis3D == true) {
        Stop_buffer_OverFlow();
        Shape_3D();
    } else if(cin.fail() && checkifshapeis3D == false){
        Stop_buffer_OverFlow();
        Shape_2D();
    }
}

void Exception_Handling::check_if_typed_string_and_invaild_number() {
	if (cin.fail()) {
		cout << invaild_message_string << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	} else
		cout << invaild_message << endl;
}

bool Exception_Handling::check_one_condiiton(float FirstCondition){
    return (FirstCondition <= LIMIT);
}

bool Exception_Handling::check_two_conditions(float FirstCondition, float SecondCondition) {
    return (FirstCondition <= LIMIT && SecondCondition <= LIMIT) || (FirstCondition <= LIMIT || SecondCondition <= LIMIT);
}

bool Exception_Handling::check_three_conditions(float FirstCondition, float SecondCondition, float ThirdCondition) {
    return (FirstCondition <= LIMIT && SecondCondition <= LIMIT) || (FirstCondition <= LIMIT || SecondCondition <= LIMIT) || (ThirdCondition <= LIMIT);
}

bool Exception_Handling::check_four_conditions(float FirstCondition, float SecondCondition, float ThirdCondition, float FourthCondition) {
    return (FirstCondition <= LIMIT && SecondCondition <= LIMIT)
        || (FirstCondition <= LIMIT || SecondCondition <= LIMIT)
        || (ThirdCondition <= LIMIT && FourthCondition <= LIMIT)
        || (ThirdCondition <= LIMIT || FourthCondition <= LIMIT);
}
