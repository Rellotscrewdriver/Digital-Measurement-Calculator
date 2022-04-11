#include "parameter.h"

Parameter::Parameter(string dimension){
    if(dis.dimension_compare2D(dimension)){
		filter_2D_Shapes();
	} else if(dis.dimension_compare3D(dimension)) {
		filter_3D_Shapes();
	}
}

void Parameter::filter_2D_Shapes(){
    cout << "filter_2D_shapes(): "<< dec.WhichShape;
	if(dec.WhichShape == 1 || dec.WhichShape == 4){
		one_parameter_2D();
	} else if(dec.WhichShape == 2 || dec.WhichShape == 3){
		two_parameters_2D();
	} else if(dec.WhichShape == 5 || dec.WhichShape == 6){
		three_four_parameters_2D();
	} else {
		Special();
	}
}

void Parameter::filter_3D_Shapes(){
	if(dec.WhichShape == 1 || dec.WhichShape == 3){
		one_parameter_3D();
	} else if(dec.WhichShape == 4 || dec.WhichShape == 6){
		two_parameters_3D();
	} else {

	}
}
