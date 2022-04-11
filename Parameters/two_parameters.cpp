#include "parameter.h"

void Parameter::two_parameters_2D(){
	    cout << "Specify two parameters of " << "ShapeName" << " to find it's " << "Measurement_Name" << endl;
        cout << dec.input; cin >> first_parameter >> second_parameter;

        if (Exh.check_two_conditions(first_parameter, second_parameter)){
            cout << Exh.error_message;
        } else if (dec.WhichShape == 2){
            cout << dec.output; //<< Rectangle(first_parameter, second_parameter);
        } else if (dec.WhichShape == 3){
            cout << dec.output; //<< Parallelogram(first_parameter, second_parameter);
        } else if (dec.WhichShape == 7){
            cout << dec.output; //<< jesus.APolygon(first_parameter, second_parameter);
        } else {
			Exh.check_if_typed_string(true);
			two_parameters_2D();
		}
		dis.select_dimension("2D");
        cout << endl << endl;
}

void Parameter::two_parameters_3D(){
	cout << "Specify two parameters of " << "ShapeName" << " to find it's " << "Measurement_Name" << endl;
    cout << dec.input; cin >> first_parameter >> second_parameter;

    if (Exh.check_two_conditions(first_parameter, second_parameter)){
            cout << Exh.error_message;
        } else if (dec.WhichShape == 4){
            cout << dec.output; //<< Cylinder(first_parameter, second_parameter);
        } else if (dec.WhichShape == 6){
            cout << dec.output; //<< Cone(first_parameter, second_parameter);
        } else {
			Exh.check_if_typed_string(true);
			two_parameters_3D();
		}
		dis.select_dimension("3D");
        cout << endl << endl;
}
