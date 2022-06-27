#include "../Include/parameter.h"

void Parameter::three_four_parameters(){
Handle_Exception H_Exp;
Trapezium crap;
Quadrilateral quad;
	if(Measure_Type == 1){
		//area
		cout << "Specify three parameters of " << Shape_Name << " to find it's " << filter_measurement_name() << endl;
        cout << dis.three_four_parameters_text(Shape_Value); cin >> first_parameter;
        cout << "Input First Base: "; cin >> second_parameter;
        cout << "Input Second Base: "; cin >> third_parameter;
        H_Exp.check_if_user_entered_string_and_shape_3D(false);

        if (H_Exp.check_three_conditions(first_parameter, second_parameter, third_parameter)){
            cout << H_Exp.negative_number_error_message;
            three_four_parameters();
        } else if (Shape_Value == 6){
            Sum_Solution2d();
            cout << EQUAL << crap.ATrapezium(first_parameter, second_parameter, third_parameter) << endl;
            cout << ANSWER << crap.ATrapezium(first_parameter, second_parameter, third_parameter) << endl;
        } else if (Shape_Value == 5){
            Sum_Solution2d();
            cout << EQUAL << crap.ATrapezium(first_parameter, second_parameter, third_parameter) << endl;
            cout << ANSWER << quad.AQuadrilateral(first_parameter, second_parameter, third_parameter) << endl;
        }
			dis.select_dimension("2D");
	} else {
		//perimeter
	    cout << "Specify four parameters of " << Shape_Name << " to find it's " << filter_measurement_name() << endl;
        cout << "Input First Side: "; cin >> first_parameter;
        cout << "Input Second Side: "; cin >> second_parameter;
        cout << "Input Third Side: "; cin >> third_parameter;
        cout << "Input Fourth Side: "; cin >> fourth_parameter;
        H_Exp.check_if_user_entered_string_and_shape_3D(false);

        if (H_Exp.check_four_conditions(first_parameter, second_parameter, third_parameter, fourth_parameter)){
            cout << H_Exp.negative_number_error_message;
            three_four_parameters();
        } else if (Shape_Value == 5){
            Sum_Solution2d();
            cout << EQUAL << quad.PQuadrilateral(first_parameter, second_parameter, third_parameter, fourth_parameter) << endl;
            cout << ANSWER << quad.PQuadrilateral(first_parameter, second_parameter, third_parameter, fourth_parameter) << endl;
        } else if (Shape_Value == 6){
            Sum_Solution2d();
            cout << EQUAL << crap.PTrapezium(first_parameter, second_parameter, third_parameter, fourth_parameter) << endl;
            cout << ANSWER << crap.PTrapezium(first_parameter, second_parameter, third_parameter, fourth_parameter) << endl;
        }
			dis.select_dimension("2D");
	}
}

void Parameter::three_parameters(){
Handle_Exception H_Exp;
	cout << "Specify three parameters of " << Shape_Name << " to find it's " << filter_measurement_name() << endl;
    cout << dis.three_parameters_text(Shape_Value , 1); cin >> first_parameter;
    cout << dis.three_parameters_text(Shape_Value , 2); cin >> second_parameter;
    cout << dis.three_parameters_text(Shape_Value , 3); cin >> third_parameter;
    H_Exp.check_if_user_entered_string_and_shape_3D(is_3D);

    if (H_Exp.check_three_conditions(first_parameter, second_parameter, third_parameter)){
		cout << H_Exp.negative_number_error_message;
		three_parameters();
    } else if (Shape_Value == 2){
		Cuboid cupuon;
        Sum_Solution3d();
		filter_measurement_type3D(cupuon.SACuboid(first_parameter, second_parameter, third_parameter), cupuon.VCuboid(first_parameter, second_parameter, third_parameter));
    } else if(Shape_Value == 8){
        Triangle trio;
        Sum_Solution2d();
        filter_measurement_type2D(0 , trio.PTriangle(first_parameter, second_parameter, third_parameter));
    } else if(Shape_Value == 19){
        Triangle trio;
        Sum_Solution2d();
        cout << EQUAL << trio.AHFTriangle(first_parameter, second_parameter, third_parameter) << "/n/n";
        cout << ANSWER << trio.AHFTriangle(first_parameter, second_parameter, third_parameter) << endl;
    }

    dis.select_dimension(dimension);
}
