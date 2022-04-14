#include "parameter.h"

void Parameter::Special(){
    Polygon poly;
    if((MeasureType = 1)){
	//area
	cout << "Enter the Number of Sides: " << endl;
    cout << dec.input; cin >> first_parameter;
    Exh.check_if_typed_string(false);

    if (Exh.check_one_condiiton(first_parameter) || (first_parameter >= 10 && first_parameter <= 1)){
        cout << Exh.error_message;
    } else if (dec.WhichShape == 7){
        cout << dec.output << poly.PPolygon(first_parameter);
    }
	}
}
