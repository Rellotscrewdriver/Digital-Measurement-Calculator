#include "display.h"

void Display::list_2D_Shapes_text(){
    cout << "\nEnter any 2D shape respectively\n"
		 << "[1] Square \t  [2] Rectangle \t[3] Parallelogram \n[4] Circle \t  [5] Quadrilateral \t[6] Trapezium \n[7] Polygon \t"
	     << "  [8]" << switch_to_3D
		 << "[9]" << exit_str;
}

void Display::list_3D_Shapes_text(){
	cout << "\nEnter any 3D shape respectively\n"
		 << "[1] Cube \t  [2] Cuboid \n[3] Sphere \t  [4] Hemisphere \n[5] Cone \t  [6] Cylinder \n"
	     << "[7]" << switch_to_2D
         << "  [8]" << exit_str;
}

void Display::measurement_type_2D_text(){
    cout << str_measure_type
		 << "[1] Area\t"
		 << "  [2] perimeter\n"
		 << "[3]" << previous_step
		 << "[4]" << exit_str
		 << input;
}

void Display::measurement_type1_3D_text(){
	cout << str_measure_type
	     << "[1] Surface Area  "
	     << "[2] Volume\n"
	     << "[3]" << previous_step
	     << "[4]" << exit_str
	     << input;
}

void Display::measurement_type2_3D_text(){
	cout << str_measure_type
		 << "[1] Curved Surface Area\t"
		 << "[2] Total Surface Area\n"
		 << "[3] Volume  "
		 << "[4]" << previous_step
		 << "[5]" << exit_str
		 << input;
}
