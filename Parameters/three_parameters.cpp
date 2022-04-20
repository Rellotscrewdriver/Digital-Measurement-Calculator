#include "parameter.h"

void Parameter::three_four_parameters(){
Trapezium crap;
Quadrilateral quad;

	if(MeasureType == 1){
		//area
		cout << "Specify three parameters of " << Shape_Name << " to find it's " << filter_measurement_name2D() << endl;
        cout << dis.three_parameters_text(Shape_Value); cin >> first_parameter;
        cout << "Base1: "; cin >> second_parameter;
        cout << "Base2: "; cin >> third_parameter;
        Exh.check_if_typed_string(false);

        if (Exh.check_three_conditions(first_parameter, second_parameter, third_parameter)){
            cout << Exh.error_message;
        } else if (Shape_Value == 6){
            cout << dis.output << crap.ATrapezium(first_parameter, second_parameter, third_parameter) << endl;
        } else if (Shape_Value == 5){
            cout << dis.output << quad.AQuadrilateral(first_parameter, second_parameter, third_parameter) << endl;
        }
			dis.select_dimension("2D");
	} else {
		//perimeter
	    cout << "Specify four parameters of " << Shape_Name << " to find it's " << filter_measurement_name2D() << endl;
        cout << "SideA: "; cin >> first_parameter;
        cout << "SideB: "; cin >> second_parameter;
        cout << "SideC: "; cin >> third_parameter;
        cout << "SideD: "; cin >> fourth_parameter;
        Exh.check_if_typed_string(false);

        if (Exh.check_four_conditions(first_parameter, second_parameter, third_parameter, fourth_parameter)){
            cout << Exh.error_message;
        } else if (Shape_Value == 5){
            cout << dis.output << quad.PQuadrilateral(first_parameter, second_parameter, third_parameter, fourth_parameter) << endl;
        } else if (Shape_Value == 6){
            cout << dis.output << crap.PTrapezium(first_parameter, second_parameter, third_parameter, fourth_parameter) << endl;
        }
			dis.select_dimension("2D");
	}
}

void Parameter::three_parameters(){
	cout << "Specify three parameters of " << Shape_Name << " to find it's " << filter_measurement_name3D() << endl;
    cout << "Length: "; cin >> first_parameter;
    cout << "Width: "; cin >> second_parameter;
    cout << "Depth(or Height): "; cin >> third_parameter;
    Exh.check_if_typed_string(true);

    if (Exh.check_three_conditions(first_parameter, second_parameter, third_parameter)){
		cout << Exh.error_message;
    } else if (Shape_Value == 2){
		Cuboid cupuon;
		filter_measurement_type3D(cupuon.SACuboid(first_parameter, second_parameter, third_parameter), cupuon.VCuboid(first_parameter, second_parameter, third_parameter));
    }

    dis.select_dimension("3D");
}

