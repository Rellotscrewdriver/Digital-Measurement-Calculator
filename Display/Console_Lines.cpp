#include "display.h"

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

