#include "parameter.h"

void Parameter::three_four_parameters_2D(){
Trapezium crap;
Quadrilateral quad;

	if(dec.Measurement_Type == 1){
		//area
		cout << "Specify three parameters of " << "ShapeName" << " to find it's " << "Measurement_Name" << endl;
        cout << dec.input; cin >> first_parameter;
        cout << dec.input; cin >> second_parameter;
        cout << dec.input; cin >> third_parameter;

        if (Exh.check_three_conditions(first_parameter, second_parameter, third_parameter)){
            cout << Exh.error_message;
        } else if (Shape_Value == 6){
            cout << dec.output << crap.ATrapezium(first_parameter, second_parameter, third_parameter) << endl;
        } else if (Shape_Value == 5){
            cout << dec.output << quad.AQuadrilateral(first_parameter, second_parameter, third_parameter) << endl;
        } else {
			Exh.check_if_typed_string(false);
			three_four_parameters_2D();
		}
			dis.select_dimension("2D");

	} else {
		//perimeter
	    cout << "Specify four parameters of " << "Shape_Name" << " to find it's " << "Measurement_Name" << endl;
        cout << dec.input; cin >> first_parameter;
        cout << dec.input; cin >> second_parameter;
        cout << dec.input; cin >> third_parameter;
        cout << dec.input; cin >> fourth_parameter;

        Exh.check_if_typed_string(false);

        if (Exh.check_four_conditions(first_parameter, second_parameter, third_parameter, fourth_parameter)){
            cout << Exh.error_message;
        } else if (Shape_Value == 5){
            cout << dec.output << quad.PQuadrilateral(first_parameter, second_parameter, third_parameter, fourth_parameter) << endl;
        } else if (Shape_Value == 6){
            cout << dec.output << crap.PTrapezium(first_parameter, second_parameter, third_parameter, fourth_parameter) << endl;
        } else {
			Exh.check_if_typed_string(false);
			three_four_parameters_2D();
		}
			dis.select_dimension("2D");
	}
}

void Parameter::three_parameters_3D(){
	cout << "Specify three parameters of " << "ShapeName" << " to find it's " << "Measurement_Name" << endl;
    cout << dec.input; cin >> first_parameter;
    cout << dec.input; cin >> second_parameter;
    cout << dec.input; cin >> third_parameter;

    if (Exh.check_three_conditions(first_parameter, second_parameter, third_parameter)){
		cout << Exh.error_message;
    } else if (dec.WhichShape == 2){
		cout << dec.output; //<< Cuboid(first_parameter, second_parameter, third_parameter);
    } else {
		Exh.check_if_typed_string(false);
		three_parameters_3D();
	}
    dis.select_dimension("3D");

}

