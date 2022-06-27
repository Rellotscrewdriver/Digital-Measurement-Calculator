#include "../Include/parameter.h"

void Parameter::three_four_parameters(){
Handle_Exception H_Exp;
Trapezium crap;
Quadrilateral quad;
	if(Measure_Type == 1){
		//area
		cout << termcolor::bright_green <<"Specify three parameters of " << Shape_Name << " to find it's " << filter_measurement_name() << endl;
        cout << termcolor::bright_white <<dis.three_four_parameters_text(Shape_Value); cin >> first_parameter;
        cout << termcolor::bright_red <<"Input First Base: "; cin >> second_parameter;
        cout << termcolor::bright_cyan <<"Input Second Base: "; cin >> third_parameter;
        cout << termcolor::reset;
        H_Exp.check_if_user_entered_string_and_shape_3D(false);

        if (H_Exp.check_three_conditions(first_parameter, second_parameter, third_parameter)){
            cout << termcolor::bright_red << H_Exp.negative_number_error_message << termcolor::reset;
            three_four_parameters();
        } else if (Shape_Value == 6){
            cout << termcolor::bright_yellow << dis.output << crap.ATrapezium(first_parameter, second_parameter, third_parameter) << termcolor::reset << endl;
        } else if (Shape_Value == 5){
            cout << termcolor::bright_yellow << dis.output << quad.AQuadrilateral(first_parameter, second_parameter, third_parameter) << termcolor::reset << endl;
        }
			dis.select_dimension("2D");
	} else {
		//perimeter
	    cout << termcolor::bright_green << "Specify four parameters of " << Shape_Name << " to find it's " << filter_measurement_name() << endl;
        cout << termcolor::bright_white << "Input First Side: "; cin >> first_parameter;
        cout << termcolor::bright_red <<"Input Second Side: "; cin >> second_parameter;
        cout << termcolor::bright_cyan << "Input Third Side: "; cin >> third_parameter;
        cout << termcolor::bright_magenta << "Input Fourth Side: "; cin >> fourth_parameter;
        cout << termcolor::reset;
        H_Exp.check_if_user_entered_string_and_shape_3D(false);

        if (H_Exp.check_four_conditions(first_parameter, second_parameter, third_parameter, fourth_parameter)){
            cout << termcolor::bright_red << H_Exp.negative_number_error_message << termcolor::reset;
            three_four_parameters();
        } else if (Shape_Value == 5){
            cout << termcolor::bright_yellow << dis.output << quad.PQuadrilateral(first_parameter, second_parameter, third_parameter, fourth_parameter) << termcolor::reset << endl;
        } else if (Shape_Value == 6){
            cout << termcolor::bright_yellow << crap.PTrapezium(first_parameter, second_parameter, third_parameter, fourth_parameter) << termcolor::reset << endl;
        }
			dis.select_dimension("2D");
	}
}

void Parameter::three_parameters(){
Handle_Exception H_Exp;
	cout << termcolor::bright_green << "Specify three parameters of " << Shape_Name << " to find it's " << filter_measurement_name() << endl;
    cout << termcolor::bright_white << dis.three_parameters_text(Shape_Value , 1); cin >> first_parameter;
    cout << termcolor::bright_red << dis.three_parameters_text(Shape_Value , 2); cin >> second_parameter;
    cout << termcolor::bright_cyan << dis.three_parameters_text(Shape_Value , 3); cin >> third_parameter;
    cout << termcolor::reset;
    H_Exp.check_if_user_entered_string_and_shape_3D(is_3D);

    if (H_Exp.check_three_conditions(first_parameter, second_parameter, third_parameter)){
		cout << termcolor::bright_red << H_Exp.negative_number_error_message << termcolor::reset;
		three_parameters();
    } else if (Shape_Value == 2){
		Cuboid cupuon;
		filter_measurement_type3D(cupuon.SACuboid(first_parameter, second_parameter, third_parameter), cupuon.VCuboid(first_parameter, second_parameter, third_parameter));
    } else if(Shape_Value == 8){
        Triangle trio;
        filter_measurement_type2D(0 , trio.PTriangle(first_parameter, second_parameter, third_parameter));
    } else if(Shape_Value == 19){
        Triangle trio;
        cout << termcolor::bright_yellow << dis.output << trio.AHFTriangle(first_parameter, second_parameter, third_parameter) << termcolor::reset;
    }

    dis.select_dimension(dimension);
}
