#include "parameter.h"

void Parameter::Special(){
	unsigned int NoOfSides;
	cout << "Enter the Number of Sides(should not be more than 10): ";
    cin >> NoOfSides;
    Exh.check_if_typed_string(false);

    if(Exh.check_one_condiiton(NoOfSides)){
        cout << Exh.error_message;
        Special();
	} else if(NoOfSides > 10){
		cout << "You can't calculate more than 10 sides\n\n";
		Special();
	} else if (Shape_Value == 7){
		Polygon poly;
        poly.PPolygon(NoOfSides);
    }
	dis.select_dimension("2D");
}
