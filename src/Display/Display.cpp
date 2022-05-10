#include "../Include/Display.h"
#include "../Include/Handle_Exception.h"
#include "../Include/Shape_2D.h"
#include "../Include/Shape_3D.h"

bool Display::dimension_compare2D(string parameter){
    return parameter == "2d" || parameter == "2D";
}

bool Display::dimension_compare3D(string parameter){
    return parameter == "3d" || parameter == "3D";
}

bool Display::user_typed_exit(string parameter){
    return parameter == "exit" || parameter == "e";
}

void Display::enter_dimension(){
	cout << "Enter The Dimension: ";
	cin >> dimensional;
    select_dimension(dimensional);
}

void Display::select_dimension(string dimensional){
    if(dimension_compare2D(dimensional)){
        Shape_2D();
    } else if(dimension_compare3D(dimensional)){
        Shape_3D();
    } else if (user_typed_exit(dimensional)) {
		cout << console_message;
		getchar();
	} else {
        Handle_Exception  H_Exp;
        H_Exp.check_if_user_entered_string_or_invaild_number();
        enter_dimension();
	}
}
