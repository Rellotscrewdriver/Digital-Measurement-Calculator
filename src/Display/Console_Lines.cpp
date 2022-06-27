#include "../Include/Display.h"

void Display::list_2D_Shapes_text(){
    cout << termcolor::grey << termcolor::on_bright_yellow << "\nEnter any 2D shape respectively\n\n" << termcolor::reset
		 << termcolor::bright_green << "[1] Square \t  [2] Rectangle \n[3] Parallelogram [4] Circle \n[5] Quadrilateral [6] Trapezium \n[7] Polygon \t  [8] Triangle\n"
	     << termcolor::bright_yellow << "[11]" << switch_to_3D
		 << termcolor::bright_red << " [12]" << exit_str << termcolor::reset;
}

void Display::list_3D_Shapes_text(){
	cout << termcolor::grey << termcolor::on_bright_yellow << "\nEnter any 3D shape respectively\n\n" << termcolor::reset /*reset is used to get rid of blue background*/
		 << termcolor::bright_green << "[1] Cube \t  [2] Cuboid \n[3] Sphere \t  [4] Hemisphere \n[5] Cone \t  [6] Cylinder \n"
	     << termcolor::bright_yellow << "[11]" << switch_to_2D
         << termcolor::bright_red << " [12]" << exit_str << termcolor::reset;
}

void Display::measurement_type_2D_text(){
    cout << termcolor::grey << termcolor::on_bright_cyan << str_measure_type << termcolor::reset
		 << termcolor::bright_green << "[1]" << " Area\t" << "  [2] perimeter\n"
		 << termcolor::bright_yellow << "[6]" << previous_step
		 << termcolor::bright_red << "[7]" << exit_str << termcolor::reset
		 << input;
}

void Display::measurement_type_triangle_text(){
	cout << termcolor::bright_white << termcolor::on_red << "\nChoose which type of area you wanna calculate\n" << termcolor::reset
    	 << termcolor::bright_green << "[1] Area of Triangle (whether it's sides are equal or not)\n"
     	 << "[2] Area of Equilateral Triangle\n"
     	 << "[3] Area of Isosceles Triangle\n"
     	 << "[4] Area of Scalene Triangle(uses heron's formula)\n"
     	 << termcolor::bright_cyan << "[5]" << " Pre-Previous Step\t"
     	 << termcolor::bright_red << "[6] Exit the Program\n" << termcolor::reset
     	 << output;
}

void Display::measurement_type1_3D_text(){
	cout << termcolor::grey << termcolor::on_bright_cyan << str_measure_type << termcolor::reset
	     << termcolor::bright_green << "[1] Surface Area  "
	     << "[2] Volume\n"
	     << termcolor::bright_yellow << "[6]" << previous_step
	     << termcolor::bright_red << "[7]" << exit_str << termcolor::reset
	     << input;
}

void Display::measurement_type2_3D_text(){
	cout << termcolor::bright_grey << termcolor::on_bright_cyan << str_measure_type << termcolor::reset
		 << termcolor::bright_green << "[1] Curved Surface Area\t"
		 << "[2] Total Surface Area\n"
		 << "[3] Volume\t        "
		 << termcolor::bright_yellow << "[6]" << previous_step << endl
		 << termcolor::bright_red << "[7]" << exit_str << termcolor::reset
		 << input;
}

