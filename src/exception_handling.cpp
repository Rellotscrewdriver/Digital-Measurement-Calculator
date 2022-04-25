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
        Stop_buffer_OverFlow();
	} else
		cout << invaild_message << endl;
}

bool Exception_Handling::check_one_condiiton(double FirstCondition){
    return (FirstCondition <= LIMIT);
}

bool Exception_Handling::check_two_conditions(double FirstCondition, double SecondCondition) {
    return (FirstCondition <= LIMIT && SecondCondition <= LIMIT)
    || (FirstCondition <= LIMIT || SecondCondition <= LIMIT);
}

bool Exception_Handling::check_three_conditions(double FirstCondition, double SecondCondition, double ThirdCondition) {
    return (FirstCondition <= LIMIT && SecondCondition <= LIMIT)
     || (FirstCondition <= LIMIT || SecondCondition <= LIMIT)
     || (ThirdCondition <= LIMIT);
}

bool Exception_Handling::check_four_conditions(double FirstCondition, double SecondCondition, double ThirdCondition, double FourthCondition) {
    return (FirstCondition <= LIMIT && SecondCondition <= LIMIT)
        || (FirstCondition <= LIMIT || SecondCondition <= LIMIT)
        || (ThirdCondition <= LIMIT && FourthCondition <= LIMIT)
        || (ThirdCondition <= LIMIT || FourthCondition <= LIMIT);
}
