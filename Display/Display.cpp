#include "display.h"
#include "../exception_handling.h"
#include "../2D_shapes/Shape_2D.h"
#include "../3D_shapes/Shape_3D.h"

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
        Exception_Handling Exh;
        Exh.check_if_typed_string_and_invaild_number();
        enter_dimension();
	}
}
