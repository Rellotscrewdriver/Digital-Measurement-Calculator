#include "../Include/parameter.h"

void Parameter::two_parameters(){
    Handle_Exception H_Exp;
    
	cout << "Specify two parameters of " << Shape_Name << " to find it's " << filter_measurement_name() << endl;
    cout << dis.two_parameters_text(Shape_Value, 1); cin >> first_parameter;
	cout << dis.two_parameters_text(Shape_Value, 2); cin >> second_parameter;
    H_Exp.check_if_user_entered_string_and_shape_3D(is_3D);
    
    //LOG
    std::ofstream fs;
    fs.open("Log.txt", ios::app);
    fs << "You find " << filter_measurement_name() << " of " << Shape_Name << "\n";
    fs << dis.Log_two_parameters_text(Shape_Value, 1) << first_parameter << "\n";
    fs << dis.Log_two_parameters_text(Shape_Value, 2) << second_parameter;
    fs.close();

        if (H_Exp.check_two_conditions(first_parameter, second_parameter)){
            cout << H_Exp.negative_number_error_message;
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
            Cylinder do_a_barrell_roll;
            filter_measurement_type3D(do_a_barrell_roll.CSACylinder(first_parameter, second_parameter), do_a_barrell_roll.TSACylinder(first_parameter, second_parameter), do_a_barrell_roll.VCylinder(first_parameter, second_parameter));
        } else if (Shape_Value == 5 && dimension == "3D"){
            Cone cone;
            filter_measurement_type3D(cone.CSACone(first_parameter, second_parameter), cone.TSACone(first_parameter, second_parameter), cone.VCone(first_parameter, second_parameter));
        } else if(Shape_Value == 16){
            Triangle trio;
            cout << dis.output << trio.ATriangle(first_parameter, second_parameter) << endl;
        } else if(Shape_Value == 18){
            Triangle trio;
            cout << dis.output << trio.AofITriangle(first_parameter, second_parameter) << endl;
        } else {}
        dis.select_dimension(dimension);
}
