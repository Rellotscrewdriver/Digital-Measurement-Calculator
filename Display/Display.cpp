#include "display.h"
#include "../exception_handling.h"
#include "../2D_shapes/Shape_2D.h"
#include "../3D_shapes/Shape_3D.h"

#define NEWLINE cout << "\n";


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
	cin >> var.dimensional;
    select_dimension();
}

void Display::select_dimension(){
    if(dimension_compare2D(var.dimensional)){
        Shape_2D();
    } else if(dimension_compare3D(var.dimensional)){
        Shape_3D();
    } else if (user_typed_exit(var.dimensional)) {
        declarations variables;
		cout << variables.console_message;
		getchar();
	} else {
        Exception_Handling Exh;
        Exh.check_if_typed_string_and_invaild_number();
        enter_dimension();
	}
}

void Display::list_2D_Shapes_text(){
    cout << "Enter any 2D shape respectively\n"
		 << "1. Square \n2. Rectangle \n3. Parallelogram \n4. Circle \n5. Quadrilateral \n6. Trapezium \n7. Polygon \n"
	     << "8" << switch_to_3D
		 << "9" << exit_str << endl;
}

void Display::list_3D_Shapes_text(){
	cout << "Enter any 3D shape respectively\n"
		 << "1. Cube \n2. Cuboid \n3. Sphere \n4. Hemisphere \n5. Cone \n6. Cylinder \n"
	     << "7" << switch_to_2D
         << "8" << exit_str << endl;
}

void Display::measurement_type_2D_text(){
    cout << var.str_measure_type
		 << "1. Area\n"
		 << "2. perimeter\n"
		 << "3" << var.previous_step
		 << "4" << exit_str
		 << var.input;
}

void Display::measurement_type1_3D_text(){
	cout << var.str_measure_type
	     << "1. Surface Area"
	     << "2. Volume"
	     << "3" << var.previous_step
	     << "4" << exit_str
	     << var.input;
}

void Display::measurement_type2_3D_text(){
	cout << var.str_measure_type
		 << "1. Curved Surface Area\n"
		 << "2. Total Surface Area\n"
		 << "3. Volume\n"
		 << "4" << var.previous_step
		 << "5" << exit_str;
}
