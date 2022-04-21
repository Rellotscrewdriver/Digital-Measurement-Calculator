#include "display.h"

void Display::list_2D_Shapes_text(){
    cout << "\nEnter any 2D shape respectively\n"
		 << "[1] Square \t  [2] Rectangle \t[3] Parallelogram \n[4] Circle \t  [5] Quadrilateral \t[6] Trapezium \n[7] Polygon \t"
	     << "  [11]" << switch_to_3D
		 << "[12]" << exit_str;
}

void Display::list_3D_Shapes_text(){
	cout << "\nEnter any 3D shape respectively\n"
		 << "[1] Cube \t  [2] Cuboid \n[3] Sphere \t  [4] Hemisphere \n[5] Cone \t  [6] Cylinder \n"
	     << "[11]" << switch_to_2D
         << "  [12]" << exit_str;
}

void Display::measurement_type_2D_text(){
    cout << str_measure_type
		 << "[1] Area\t"
		 << "  [2] perimeter\n"
		 << "[6]" << previous_step
		 << "[7]" << exit_str
		 << input;
}

void Display::measurement_type1_3D_text(){
	cout << str_measure_type
	     << "[1] Surface Area  "
	     << "[2] Volume\n"
	     << "[6]" << previous_step
	     << "[7]" << exit_str
	     << input;
}

void Display::measurement_type2_3D_text(){
	cout << str_measure_type
		 << "[1] Curved Surface Area\t"
		 << "[2] Total Surface Area\n"
		 << "[3] Volume  "
		 << "[6]" << previous_step
		 << "[7]" << exit_str
		 << input;
}

string Display::one_parameter_text(int ShapeNum){
	if(dimension_compare2D("2D") && ShapeNum == 1 || dimension_compare3D("3D") && ShapeNum == 1){
		return "One Side: ";
    } else if(dimension_compare2D("2D") || dimension_compare3D("3D") && ShapeNum == 4){
		return "Radius: ";
    } else if(dimension_compare3D("3D") && ShapeNum == 3){
		return "Radius: ";
	}
}

string Display::two_parameters_text(int ShapeNum, int input_step){
     if(dimension_compare3D("3D") && ShapeNum == 5 || ShapeNum == 6 || ShapeNum == 7){
		 if(input_step == 1){
			return "Radius: ";
		 } else if(input_step == 2 && ShapeNum == 6){
			return "Height: ";
		 } else if(input_step == 2 && ShapeNum == 7){
			return "Apothem: ";
		 } else if(input_step == 2){
			return "Slant_Height: ";
		 }
     } else if(dimension_compare2D("2D") && ShapeNum == 2 || ShapeNum == 3){
		if(input_step == 1 && ShapeNum == 2){
			return "Length: ";
		} else if(input_step == 1){
			return "Height: ";
		} else if(input_step == 2){
			return "Width: ";
		} else {
			return "Unknown parameter";
		}
     }
}

/*
that concept did not work as I prototyped for two_parameters_text()
if anyone's wondering why not make a common function not to write everything twice(WET)
for input_step

here's the leftover:
string Display::step_input(string sddf, int step){
	if(dis_input_step == step){
		return sddf;
	} else {
		return "Unknown input-step";
	}
}
*/

string Display::three_parameters_text(int ShapeNum){
	if(ShapeNum == 5){
		return "Diagonal: ";
	} else {
		return "Height: ";
	}
}
