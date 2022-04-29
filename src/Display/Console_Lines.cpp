#include "display.h"

void Display::list_2D_Shapes_text(){
    cout << "\nEnter any 2D shape respectively\n"
		 << "[1] Square \t  [2] Rectangle \n[3] Parallelogram [4] Circle \n[5] Quadrilateral [6] Trapezium \n[7] Polygon \t  [8] Triangle\n"
	     << "[11]" << switch_to_3D
		 << " [12]" << exit_str;
}

void Display::list_3D_Shapes_text(){
	cout << "\nEnter any 3D shape respectively\n"
		 << "[1] Cube \t  [2] Cuboid \n[3] Sphere \t  [4] Hemisphere \n[5] Cone \t  [6] Cylinder \n"
	     << "[11]" << switch_to_2D
         << " [12]" << exit_str;
}

void Display::measurement_type_2D_text(){
    cout << str_measure_type
		 << "[1] Area\t"
		 << "  [2] perimeter\n"
		 << "[6]" << previous_step
		 << "[7]" << exit_str
		 << input;
}

void Display::measurement_type_triangle_text(){
    cout << "\nChoose which type of area you wanna calculate\n"
    << "[1] Area of Triangle (whether it's sides are equal or not)\n"
    << "[2] Area of Equilateral Triangle\n"
    << "[3] Area of Isosceles Triangle\n"
    << "[4] Area of Scalene Triangle(uses heron's formula)\n"
    << "[5] Pre-Previous Step\t"
    << "[6] Exit the Program\n"
    << output;
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
		 << "[3] Volume\t        "
		 << "[6]" << previous_step << endl
		 << "[7]" << exit_str
		 << input;
}

string Display::one_parameter_text(int ShapeNum){
	if(ShapeNum == 1){
		return "Input one side of square: ";
    } else if(ShapeNum == 4 || ShapeNum == 3){
		return "Input radius: ";
	} else if(ShapeNum == 17){
	    return "input one side of triangle: ";
	}
}

string Display::two_parameters_text(int ShapeNum, int input_step){
     if(ShapeNum == 5 || ShapeNum == 6 || ShapeNum == 7 || ShapeNum == 16){
		 if(input_step == 1 && ShapeNum == 16){
			return "Input base: ";
		 } else if(input_step == 2 && ShapeNum == 6 || ShapeNum == 16){
			return "Input height: ";
		 } else if(input_step == 2 && ShapeNum == 7){
			return "Input apothem: ";
		 } else if(input_step == 2){
			return "Input slant_Height: ";
		 } else if(input_step == 1){
            return "Input radius: ";
		 }
     } else if(ShapeNum == 2 || ShapeNum == 3){
		if(input_step == 1 && ShapeNum == 2){
			return "Input length: ";
		} else if(input_step == 1){
			return "Input height: ";
		} else if(input_step == 2){
			return "Input width: ";
		} else {
			return "Unknown parameter";
		}
     } else if(ShapeNum == 18){
        if(input_step == 1){
            return "Input first side: ";
        } else {
            return "Input second side: ";
        }
     } else {}
}

string Display::three_parameters_text(int ShapeNum, int input_step){
	if(ShapeNum == 2){
        if(input_step == 1){
            return "Input Length: ";
        } else if(input_step == 2){
            return "Input Width: ";
        } else if(input_step == 3){
            return "Input Depth(or Height): ";
        }
	} else if(ShapeNum == 8 || ShapeNum == 19){
        if(input_step == 1){
            return "Input first side: ";
        } else if(input_step == 2){
            return "Input second side: ";
        } else if(input_step == 3){
            return "Input third side: ";
        }
    }
}

/*
I bet that someone will ask "Why not make a common function for input_step?"
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

string Display::three_four_parameters_text(int ShapeNum){
	if(ShapeNum == 5){
		return "Input diagonal: ";
	} else {
		return "Input height: ";
	}
}

