#include "parameter.h"
#include "../2D_shapes/Shape_2D.h"

void Parameter::one_parameter_2D(){

	cout << "Specify one parameter of " << dec.Measurement_Name << " to find it's " << dec.ShapeName << endl;
    cout << dec.input; cin >> first_parameter;

	if (Exh.check_one_condiiton(first_parameter)){
		cout << Exh.error_message;
    } else if (dec.WhichShape == 4){
        Circle cir(first_parameter);
    } else if (dec.WhichShape == 1){
        Square sqrt(first_parameter);
    } else {
		Exh.check_if_typed_string(false);
		one_parameter_2D();
	}
	//dis.select_dimension("2D");
    cout << endl << endl;
}

void Parameter::one_parameter_3D(){

	cout << "Specify one parameter of " << dec.Measurement_Name << " to find it's " << dec.ShapeName << endl;
    cout << dec.input; cin >> first_parameter;

    if (Exh.check_one_condiiton(first_parameter)){
		cout << Exh.error_message;
    } else if (dec.WhichShape == 1){
		cout << dec.output; //<< Cube(first_parameter);
    } else if (dec.WhichShape == 3){
		cout << dec.output; //<< Sphere(first_parameter);
    } else if (dec.WhichShape == 3){
		cout << dec.output; //<< Hemisphere(first_parameter);
    } else {
		Exh.check_if_typed_string(true);
		one_parameter_3D();
	}
	dis.select_dimension("2D");
    cout << endl << endl;
}


