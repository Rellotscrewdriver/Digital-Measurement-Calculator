#include "parameter.h"

void Parameter::Special(){
    Polygon poly;
    if(dec.Measurement_Type = 1){
	//area
	cout << "Enter the Number of Sides: " << endl;
    cout << dec.input; cin >> first_parameter;

    if (Exh.check_one_condiiton(first_parameter) || (first_parameter >= 10 && first_parameter <= 1)){
        cout << Exh.error_message;
    } else if (dec.WhichShape == 7){
        cout << dec.output << poly.PPolygon(first_parameter);
    } else {
		Exh.check_if_typed_string(false);
		one_parameter_2D();
	}

	} else {
		cout << "Enter the Radius and Apothem respectively: " << endl;
		cout << dec.input; cin >> first_parameter;
		cout << dec.input; cin >> second_parameter;

		if (Exh.check_two_conditions(first_parameter, second_parameter)){
			cout << Exh.error_message;
		} else if (dec.WhichShape == 7){
			cout << dec.output << poly.APolygon(first_parameter, second_parameter);
		} else {
			Exh.check_if_typed_string(false);
			one_parameter_2D();
		}
	}
}
