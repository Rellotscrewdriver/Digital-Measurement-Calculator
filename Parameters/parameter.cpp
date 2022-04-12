#include "parameter.h"

Parameter::Parameter(string dimension, int Shape, int measure_type){
    Shape_Value = Shape;
    if(dis.dimension_compare2D(dimension)){
		filter_2D_Shapes(Shape);
	} else if(dis.dimension_compare3D(dimension)) {
		filter_3D_Shapes(Shape);
	}
}

void Parameter::filter_2D_Shapes(int Which_2D_Shape){
	if(Which_2D_Shape == 1 || Which_2D_Shape == 4){
		one_parameter_2D();
	} else if(Which_2D_Shape == 2 || Which_2D_Shape == 3){
		two_parameters_2D();
	} else if(Which_2D_Shape == 5 || Which_2D_Shape == 6){
		three_four_parameters_2D();
	} else {
		Special();
	}
}

void Parameter::filter_3D_Shapes(int Which_3D_Shape){
	if(Which_3D_Shape == 1 || Which_3D_Shape == 3){
		one_parameter_3D();
	} else if(Which_3D_Shape == 4 || Which_3D_Shape == 6){
		two_parameters_3D();
	} else {

	}
}
