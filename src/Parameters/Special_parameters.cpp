#include "../Include/parameter.h"
#include "../Include/Handle_Exception.h"
#include "../Include/Shape_2D.h"

void Parameter::Special(){
    Handle_Exception H_Exp;
	  unsigned int No_Of_Sides;
    //TODO: Increase the number of sides to 20
    cout << color::green << "Enter the Number of Sides(should not be more than 10): ";
    cin >> No_Of_Sides;
    cout << color::reset;
    
    H_Exp.check_if_user_entered_string_and_shape_3D(false);

    Log.open("Log.txt", ios::app);
    Log << "You find perimeter of Polygon" << "\n\n";
    Log << "number Of sides you entered: " << No_Of_Sides;
    Log.close();

    if(H_Exp.check_one_condition(No_Of_Sides)){
        cout << color::red << H_Exp.negative_number_error_message << color::reset;
        Special();
	} else if(No_Of_Sides > 25){
		cout << color::red << "You can't calculate more than 25 sides\n\n" << color::reset;
		Special();
	} else if (Shape_Value == 7){
        DIC_Polygon porn;
        Log << "you choose to enter " << No_Of_Sides << " sides\n";
        porn.PPolygon(No_Of_Sides);
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
