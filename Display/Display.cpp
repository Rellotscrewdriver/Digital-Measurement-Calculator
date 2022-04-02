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
	cin >> dimensional;
    select_dimension();
}

void Display::select_dimension(){
    if(dimension_compare2D(dimensional)){
        Shape_2D();
    } else if(dimension_compare3D(dimensional)){
        Shape_3D();
    } else if (user_typed_exit(dimensional)) {
        declarations variables;
		cout << variables.console_message;
		getchar();
	} else {
        Exception_Handling Exh;
        Exh.check_if_typed_string_and_invaild_number();
        enter_dimension();
	}
}

void Display::list_2D_Shapes(){
    cout << "Enter any 2D shape respectively\n" 
		 << "1. Square \n2. Rectangle \n3. Parallelogram \n4. Circle \n5. Quadrilateral \n6. Trapezium \n7. Polygon \n" 
	     << "8" << switch_to_3D 
		 << "9" << exit_str << endl;
}

void Display::list_3D_Shapes(){
	cout << "Enter any 3D shape respectively\n"
		 << "1. Cube \n2. Cuboid \n3. Sphere \n4. Hemisphere \n5. Cone \n6. Cylinder \n"
	     << "7" << switch_to_2D
         << "8" << exit_str << endl;
}
