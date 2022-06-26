#include "../Include/Display.h"

void Display::list_2D_Shapes_text(){
    cout << termcolor::bright_white << termcolor::on_bright_blue << "\nEnter any 2D shape respectively\n" << termcolor::reset
		 << termcolor::bright_green << "[1] Square \t  [2] Rectangle \n[3] Parallelogram [4] Circle \n[5] Quadrilateral [6] Trapezium \n[7] Polygon \t  [8] Triangle\n"
	     << termcolor::bright_magenta << "[11]" << termcolor::reset << switch_to_3D
		 << termcolor::bright_red << " [12]" << termcolor::reset << exit_str;
}

void Display::list_3D_Shapes_text(){
	cout << termcolor::bright_white << termcolor::on_bright_blue << "\nEnter any 3D shape respectively\n" << termcolor::reset
		 << "[1] Cube \t  [2] Cuboid \n[3] Sphere \t  [4] Hemisphere \n[5] Cone \t  [6] Cylinder \n"
	     << "[11]" << switch_to_2D
         << " [12]" << exit_str;
}

void Display::measurement_type_2D_text(){
    cout << termcolor::bright_grey << termcolor::on_cyan << str_measure_type << termcolor::reset
		 << termcolor::bright_green << "[1]" << termcolor::color<17, 168, 205> << " Area\t" << termcolor::reset
		 << "  [2] perimeter\n"
		 << "[6]" << previous_step
		 << "[7]" << exit_str
		 << input;
}

void Display::measurement_type_triangle_text(){
    cout << termcolor::bright_grey << termcolor::on_cyan << "\nChoose which type of area you wanna calculate\n" << termcolor::reset
    << "[1] Area of Triangle (whether it's sides are equal or not)\n"
    << "[2] Area of Equilateral Triangle\n"
    << "[3] Area of Isosceles Triangle\n"
    << "[4] Area of Scalene Triangle(uses heron's formula)\n"
    << "[5] Pre-Previous Step\t"
    << "[6] Exit the Program\n"
    << output;
}

void Display::measurement_type1_3D_text(){
	cout << termcolor::bright_grey << termcolor::on_cyan << str_measure_type << termcolor::reset
	     << "[1] Surface Area  "
	     << "[2] Volume\n"
	     << "[6]" << previous_step
	     << "[7]" << exit_str
	     << input;
}

void Display::measurement_type2_3D_text(){
	cout << termcolor::bright_grey << termcolor::on_cyan << str_measure_type << termcolor::reset
		 << "[1] Curved Surface Area\t"
		 << "[2] Total Surface Area\n"
		 << "[3] Volume\t        "
		 << "[6]" << previous_step << endl
		 << "[7]" << exit_str
		 << input;
}

