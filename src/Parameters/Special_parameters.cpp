#include "../Include/parameter.h"
#include "../Include/Handle_Exception.h"

void Parameter::Special(){
    Handle_Exception H_Exp;
	unsigned int No_Of_Sides;
	cout << "Enter the Number of Sides(should not be more than 10): ";
    cin >> No_Of_Sides;
    H_Exp.check_if_user_entered_string_and_shape_3D(false);

    if(H_Exp.check_one_condition(No_Of_Sides)){
        cout << H_Exp.negative_number_error_message;
        Special();
	} else if(No_Of_Sides > 10){
		cout << "You can't calculate more than 10 sides\n\n";
		Special();
	} else if (Shape_Value == 7){
		Polygon poly;
        poly.PPolygon(No_Of_Sides);
    }
	dis.select_dimension("2D");
}

void Parameter::Special_Triangle(int Which_Type_Area){
    Measure_Type = 1;
    dimension = "2D";
    if(Which_Type_Area == 1){
        Shape_Name = "Area of Triangle";
        Shape_Value = 16;
        two_parameters();
    } else if(Which_Type_Area == 2){
        Shape_Name = "Equilateral Triangle";
        Shape_Value = 17;
        one_parameter();
    } else if(Which_Type_Area == 3){
        Shape_Name = "Isosceles Triangle";
        Shape_Value = 18;
        two_parameters();
    } else if(Which_Type_Area == 4){
        Shape_Name = "Scalene Triangle(uses heron's formula)";
        Shape_Value = 19;
        three_parameters();
    }
}
