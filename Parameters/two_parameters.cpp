#include "parameter.h"

void Parameter::two_parameters_2D(){
	    cout << "Specify two parameters of " << "ShapeName" << " to find it's " << "Measurement_Name" << endl;
        cout << dec.input; cin >> first_parameter >> second_parameter;
        Exh.check_if_typed_string(false);

        if (Exh.check_two_conditions(first_parameter, second_parameter)){
            cout << Exh.error_message;
        } else if (Shape_Value == 2){
            Rectangle get_rekt;
            filter_measurement_type2D(get_rekt.ARectangle(first_parameter, second_parameter), get_rekt.PRectangle(first_parameter, second_parameter));
        } else if (Shape_Value == 3){
            Parallelogram paralol;
            filter_measurement_type2D(paralol.AParallelogram(first_parameter, second_parameter), paralol.PParallelogram(first_parameter, second_parameter));
        } else if (Shape_Value == 7){
            Polygon polys;
            cout << dec.output << polys.APolygon(first_parameter, second_parameter) << "\n\n";
        }
		dis.select_dimension("2D");
}

void Parameter::two_parameters_3D(){
	cout << "Specify two parameters of " << "ShapeName" << " to find it's " << "Measurement_Name" << endl;
    cout << dec.input; cin >> first_parameter >> second_parameter;
    Exh.check_if_typed_string(true);

    if (Exh.check_two_conditions(first_parameter, second_parameter)){
            cout << Exh.error_message;
        } else if (Shape_Value == 4){
            Cylinder barrell_roll;
            filter_measurement_type3D2(barrell_roll.CSACylinder(first_parameter, second_parameter), barrell_roll.TSACylinder(first_parameter, second_parameter), barrell_roll.VCylinder(first_parameter, second_parameter));
        } else if (Shape_Value == 6){
            Cone cone;
            filter_measurement_type3D2(cone.CSACone(first_parameter, second_parameter), cone.TSACone(first_parameter, second_parameter), cone.VCone(first_parameter, second_parameter));
        }
		dis.select_dimension("3D");
}
