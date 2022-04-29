#include "parameter.h"

void Parameter::filter_2D_Shapes(int Which_2D_Shape, int measure_type){
    Shape_Value = Which_2D_Shape;
    Measure_Type = measure_type;
	dimension = "2D";
	is_3D = false;
	switch(Which_2D_Shape){
		case 1:
			Shape_Name = "square";
			one_parameter();
		break;

		case 2:
			Shape_Name = "rectangle";
			two_parameters();
		break;

		case 3:
			Shape_Name = "parallelogram";
			two_parameters();
		break;

		case 4:
			Shape_Name = "circle";
			one_parameter();
		break;

		case 5:
			Shape_Name = "quadrilateral";
			three_four_parameters();
		break;

		case 6:
			Shape_Name = "trapezium";
			three_four_parameters();
		break;

		case 7:
			Shape_Name = "polygon";
			if(measure_type == 1){
				two_parameters();
			} else {
				Special();
			}
		break;

		case 8:
            Shape_Name = "Triangle";
            if(measure_type == 1){
                Triangle trio;
                trio.filter_area_of_triangle();
            } else {
                three_parameters();
            }
	}
}

void Parameter::filter_3D_Shapes(int Which_3D_Shape, int measure_type){
    Shape_Value = Which_3D_Shape;
    Measure_Type = measure_type;
	dimension = "3D";
	is_3D = true;
		switch(Which_3D_Shape){
		case 1:
			Shape_Name = "cube";
			one_parameter();
		break;

		case 2:
			Shape_Name = "cuboid";
			three_parameters();
		break;

		case 3:
			Shape_Name = "sphere";
			one_parameter();
		break;

		case 4:
			Shape_Name = "hemisphere";
			one_parameter();
		break;

		case 5:
			Shape_Name = "cone";
			two_parameters();
		break;

		case 6:
            Shape_Name = "cylinder";
            two_parameters();
		break;
    }
}

void Parameter::filter_measurement_type2D(double Area, double Perimeter){
	if(Measure_Type == 1){
		cout << "Output: " << Area << NEWLINE;
    } else if(Measure_Type == 2){
		cout << "Output: " << Perimeter << NEWLINE;
	}
}

void Parameter::filter_measurement_type3D(double Surface_Area, double Volume){
	if(Measure_Type == 1){
		cout << "Output: " << Surface_Area << NEWLINE;
	} else if(Measure_Type == 2){
        cout << "Output: " << Volume << NEWLINE;
	}
}

void Parameter::filter_measurement_type3D(double Curved_Surface_Area, double Total_Surface_Area, double Volume){
	if(Measure_Type == 1){
		cout << "Output: " << Curved_Surface_Area << NEWLINE;
	} else if(Measure_Type == 2){
		cout << "Output: " << Total_Surface_Area << NEWLINE;
	} else if(Measure_Type == 3){
		cout << "Output: " << Volume << NEWLINE;
    }
}

string Parameter::filter_measurement_name(){
    if(Measure_Type == 1 && dis.dimension_compare2D(dimension)){
        return "area";
    } else if(Measure_Type == 2 && dis.dimension_compare2D(dimension)){
        return "perimeter";
    } else if(Measure_Type == 1 && Shape_Value >= 1 && Shape_Value <= 3){
        return "surface area";
    } else if(Measure_Type == 2 && Shape_Value >= 1 && Shape_Value <= 3){
        return "volume";
    } else if(Measure_Type == 1 && Shape_Value >= 4 && Shape_Value <= 6){
        return "curved surface area";
    } else if(Measure_Type == 2 && Shape_Value >= 4 && Shape_Value <= 6){
        return "total surface area";
    } else if(Measure_Type == 3 && Shape_Value >= 4 && Shape_Value <= 6){
        return "volume";
    } else {
        return "Unknown Parameter";
    }
}

