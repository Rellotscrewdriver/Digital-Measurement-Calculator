#include "../Include/parameter.h"

void Parameter::three_four_parameters(){
Handle_Exception H_Exp;
Trapezium crap;
Quadrilateral quad;
std::ofstream fs;

	if(Measure_Type == 1){
		//area
		cout << "Specify three parameters of " << Shape_Name << " to find it's " << filter_measurement_name() << endl;
        cout << dis.three_four_parameters_text(Shape_Value); cin >> first_parameter;
        cout << "Input First Base: "; cin >> second_parameter;
        cout << "Input Second Base: "; cin >> third_parameter;
        H_Exp.check_if_user_entered_string_and_shape_3D(false);


        fs.open("Log.txt", ios::app);
        fs << "You find " << filter_measurement_name() << " of " << Shape_Name << "\n";
        fs << dis.Log_three_four_parameters_text(Shape_Value) << first_parameter;
        fs << "\nInput First Base: " << second_parameter;
        fs << "\nInput Second Base: " << third_parameter;
        

        if (H_Exp.check_three_conditions(first_parameter, second_parameter, third_parameter)){
            cout << H_Exp.negative_number_error_message;
            three_four_parameters();
        } else if (Shape_Value == 6){
            cout << dis.output << crap.ATrapezium(first_parameter, second_parameter, third_parameter) << endl;
            fs << "\n\nThe Answer was " << crap.ATrapezium(first_parameter, second_parameter, third_parameter) << endl;
            fs << "======================================================\n";
            fs.close();
        } else if (Shape_Value == 5){
            cout << dis.output << quad.AQuadrilateral(first_parameter, second_parameter, third_parameter) << endl;
            fs << "\n\nThe Answer was " << quad.AQuadrilateral(first_parameter, second_parameter, third_parameter) << endl;
            fs << "======================================================\n";
            fs.close();
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

        fs.open("Log.txt", ios::app);
        fs << "You find " << filter_measurement_name() << " of " << Shape_Name << "\n";
        fs << "Input First Side: " << first_parameter;
        fs << "\nInput Second Side: " << second_parameter;
        fs << "\nInput Third Side: " << third_parameter;
        fs << "\nInput Fourth Side: " << fourth_parameter;

        if (H_Exp.check_four_conditions(first_parameter, second_parameter, third_parameter, fourth_parameter)){
            cout << H_Exp.negative_number_error_message;
            three_four_parameters();
        } else if (Shape_Value == 5){
            cout << dis.output << quad.PQuadrilateral(first_parameter, second_parameter, third_parameter, fourth_parameter) << endl;
            fs << "\n\nThe Answer was " << quad.PQuadrilateral(first_parameter, second_parameter, third_parameter, fourth_parameter) << endl;
            fs << "======================================================\n";
            fs.close();
        } else if (Shape_Value == 6){
            cout << dis.output << crap.PTrapezium(first_parameter, second_parameter, third_parameter, fourth_parameter) << endl;
            fs << "\n\nThe Answer was " << crap.PTrapezium(first_parameter, second_parameter, third_parameter, fourth_parameter) << endl;
            fs << "======================================================\n";
            fs.close();
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

    std::ofstream fs;
    fs.open("Log.txt", ios::app);
    fs << "You find " << filter_measurement_name() << " of " << Shape_Name << "\n";
    fs << dis.Log_three_parameters_text(Shape_Value , 1) << first_parameter << endl;
    fs << dis.Log_three_parameters_text(Shape_Value , 2) << second_parameter << endl;
    fs << dis.Log_three_parameters_text(Shape_Value , 3) << third_parameter;
    fs.close();

    if (H_Exp.check_three_conditions(first_parameter, second_parameter, third_parameter)){
		cout << H_Exp.negative_number_error_message;
		three_parameters();
    } else if (Shape_Value == 2){
		Cuboid cupuon;
		filter_measurement_type3D(cupuon.SACuboid(first_parameter, second_parameter, third_parameter), cupuon.VCuboid(first_parameter, second_parameter, third_parameter));
    } else if(Shape_Value == 8){
        Triangle trio;
        filter_measurement_type2D(0 , trio.PTriangle(first_parameter, second_parameter, third_parameter));
    } else if(Shape_Value == 19){
        Triangle trio;
        cout << dis.output << trio.AHFTriangle(first_parameter, second_parameter, third_parameter);
    }

    dis.select_dimension(dimension);
}
