#include "../Include/parameter.h"

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
