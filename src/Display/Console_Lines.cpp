#include "../Include/Display.h"

void Display::list_2D_Shapes_text(){
    cout << color::dark_grey << color::bg_yellow << "\nEnter any 2D shape respectively\n\n" << color::reset
		 << color::green << "[1] Square \t  [2] Rectangle \n[3] Parallelogram [4] Circle \n[5] Quadrilateral [6] Trapezium \n[7] Polygon \t  [8] Triangle\n"
	     << color::yellow << "[11]" << switch_to_3D
		 << color::red << " [12]" << exit_str << color::reset;
}

void Display::list_3D_Shapes_text(){
	cout << color::dark_grey << color::bg_yellow << "\nEnter any 3D shape respectively\n\n" << color::reset /*reset is used to get rid of blue background*/
		 << color::green << "[1] Cube \t  [2] Cuboid \n[3] Sphere \t  [4] Hemisphere \n[5] Cone \t  [6] Cylinder \n"
	     << color::yellow << "[11]" << switch_to_2D
         << color::red << " [12]" << exit_str << color::reset;
}

void Display::measurement_type_2D_text(){
    cout << color::dark_grey << color::bg_cyan << str_measure_type << color::reset
		 << color::green << "[1]" << " Area\t" << "  [2] perimeter\n"
		 << color::yellow << "[6]" << previous_step
		 << color::red << "[7]" << exit_str << color::reset
		 << input;
}

void Display::measurement_type_triangle_text(){
	cout << color::white << color::bg_red << "\nChoose which type of area you wanna calculate\n" << color::reset
    	 << color::green << "[1] Area of Triangle (whether it's sides are equal or not)\n"
     	 << "[2] Area of Equilateral Triangle\n"
     	 << "[3] Area of Isosceles Triangle\n"
     	 << "[4] Area of Scalene Triangle(uses heron's formula)\n"
     	 << color::cyan << "[5]" << " Pre-Previous Step\t"
     	 << color::red << "[6] Exit the Program\n" << color::reset
     	 << output;
}

void Display::measurement_type1_3D_text(){
	cout << color::dark_grey << color::bg_cyan << str_measure_type << color::reset
	     << color::green << "[1] Surface Area  "
	     << "[2] Volume\n"
	     << color::yellow << "[6]" << previous_step
	     << color::red << "[7]" << exit_str << color::reset
	     << input;
}

void Display::measurement_type2_3D_text(){
	cout << color::grey << color::bg_cyan << str_measure_type << color::reset
		 << color::green << "[1] Curved Surface Area\t"
		 << "[2] Total Surface Area\n"
		 << "[3] Volume\t        "
		 << color::yellow << "[6]" << previous_step << endl
		 << color::red << "[7]" << exit_str << color::reset
		 << input;
}

