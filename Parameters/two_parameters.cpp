#include "parameter.h"

void Parameter::two_parameters(){
	cout << "Specify two parameters of " << Shape_Name << " to find it's " << filter_measurement_name2D() << endl;
    cout << dis.two_parameters_text(Shape_Value, 1); cin >> first_parameter;
	cout << dis.two_parameters_text(Shape_Value, 2); cin >> second_parameter;
    Exh.check_if_typed_string(is3D);

        if (Exh.check_two_conditions(first_parameter, second_parameter)){
            cout << Exh.error_message;
            two_parameters();
        } else if (Shape_Value == 2 && dimension == "2D"){
            Rectangle get_rekt;
            filter_measurement_type2D(get_rekt.ARectangle(first_parameter, second_parameter), get_rekt.PRectangle(first_parameter, second_parameter));
        } else if (Shape_Value == 3 && dimension == "2D"){
            Parallelogram paralol;
            filter_measurement_type2D(paralol.AParallelogram(first_parameter, second_parameter), paralol.PParallelogram(first_parameter, second_parameter));
        } else if (Shape_Value == 7 && dimension == "2D"){
            Polygon polys;
            cout << dis.output << polys.APolygon(first_parameter, second_parameter) << "\n\n";
        } else if (Shape_Value == 6 && dimension == "3D"){
            Cylinder barrell_roll;
            filter_measurement_type3D(barrell_roll.CSACylinder(first_parameter, second_parameter), barrell_roll.TSACylinder(first_parameter, second_parameter), barrell_roll.VCylinder(first_parameter, second_parameter));
        } else if (Shape_Value == 5 && dimension == "3D"){
            Cone cone;
            filter_measurement_type3D(cone.CSACone(first_parameter, second_parameter), cone.TSACone(first_parameter, second_parameter), cone.VCone(first_parameter, second_parameter));
        }
		dis.select_dimension(dimension);
}
