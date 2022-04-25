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

void Parameter::Special_Triangle(int dsd){
    MeasureType = 1;
    dimension = "2D";
    if(dsd == 1){
        Shape_Name = "Area of Triangle";
        Shape_Value = 16;
        two_parameters();
    } else if(dsd == 2){
        Shape_Name = "Equilateral Triangle";
        Shape_Value = 17;
        one_parameter();
    } else if(dsd == 3){
        Shape_Name = "Isosceles Triangle";
        Shape_Value = 18;
        two_parameters();
    } else if(dsd == 4){
        Shape_Name = "Scalene Triangle(uses heron's formula)";
        Shape_Value = 19;
        three_parameters();
    }
}
