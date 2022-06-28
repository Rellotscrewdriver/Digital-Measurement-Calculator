#include "../Include/parameter.h"

void Parameter::two_parameters(){
    Handle_Exception H_Exp;
    cout << color::green << "Specify two parameters of " << Shape_Name << " to find it's " << filter_measurement_name() << endl;
    cout << color::white << dis.two_parameters_text(Shape_Value, 1); cin >> first_parameter;
	  cout << color::red << dis.two_parameters_text(Shape_Value, 2); cin >> second_parameter;
    cout << color::reset;
    H_Exp.check_if_user_entered_string_and_shape_3D(is_3D);
    
    //Log
    Log.open("Log.txt", ios::app);
    Log << "You tried to find the " << filter_measurement_name() << " of " << Shape_Name << "\n";
    Log << dis.Log_two_parameters_text(Shape_Value, 1) << first_parameter << "\n";
    Log << dis.Log_two_parameters_text(Shape_Value, 2) << second_parameter;
    Log.close();

        if (H_Exp.check_two_conditions(first_parameter, second_parameter)){
            cout << color::red << H_Exp.negative_number_error_message << color::reset;
            two_parameters();
        } else if (Shape_Value == 2 && dimension == "2D"){
            Rectangle get_rekt;
            Sum_Solution2d();
            filter_measurement_type2D(get_rekt.ARectangle(first_parameter, second_parameter), get_rekt.PRectangle(first_parameter, second_parameter));
        } else if (Shape_Value == 3 && dimension == "2D"){
            Parallelogram paralol;
            Sum_Solution2d();
            filter_measurement_type2D(paralol.AParallelogram(first_parameter, second_parameter), paralol.PParallelogram(first_parameter, second_parameter));
        } else if (Shape_Value == 7 && dimension == "2D"){
            Polygon porn;
            Sum_Solution2d();
            filter_measurement_type2D(porn.APolygon(first_parameter, second_parameter), 0101010101);
        } else if (Shape_Value == 6 && dimension == "3D"){
            Cylinder do_a_barrell_roll;
            Sum_Solution3d_2();
            filter_measurement_type3D(do_a_barrell_roll.CSACylinder(first_parameter, second_parameter), do_a_barrell_roll.TSACylinder(first_parameter, second_parameter), do_a_barrell_roll.VCylinder(first_parameter, second_parameter));
        } else if (Shape_Value == 5 && dimension == "3D"){
            Cone coney_island;
            Sum_Solution3d_2();
            filter_measurement_type3D(coney_island.CSACone(first_parameter, second_parameter), coney_island.TSACone(first_parameter, second_parameter), coney_island.VCone(first_parameter, second_parameter));
        } else if(Shape_Value == 16){
            Triangle trio;
            Sum_Solution2d();
            filter_measurement_type2D(trio.ATriangle(first_parameter, second_parameter), 0101010101);
        } else if(Shape_Value == 18){
            Triangle mama_mia;
            Sum_Solution2d();
            filter_measurement_type2D(mama_mia.AofITriangle(first_parameter, second_parameter), 0101010101);   
        } else {}
        dis.select_dimension(dimension);
}
