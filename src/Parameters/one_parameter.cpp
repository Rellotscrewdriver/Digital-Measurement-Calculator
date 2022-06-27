#include "../Include/parameter.h"
#include "../Include/Shape_2D.h"

Handle_Exception H_Exp;

void Parameter::one_parameter(){
	cout << "Specify one parameter of " << Shape_Name << " to find it's " << filter_measurement_name() << endl;
    cout << dis.one_parameter_text(Shape_Value); cin >> first_parameter;
    H_Exp.check_if_user_entered_string_and_shape_3D(is_3D);

    Log.open("Log.txt", ios::app);
    Log << "You tried to find the " << filter_measurement_name() << " of " << Shape_Name << "\n";
    Log << dis.Log_one_parameter_text(Shape_Value) << first_parameter;
    Log.close();

	if (H_Exp.check_one_condition(first_parameter)){
		cout << H_Exp.negative_number_error_message;
		one_parameter();
    } else if (Shape_Value == 1 && dimension == "2D"){
        Square sqrt;
        Sum_Solution2d();
        filter_measurement_type2D(sqrt.Asquare(first_parameter), sqrt.Psquare(first_parameter));
    } else if (Shape_Value == 4 && dimension == "2D"){
        Circle cir;
        Sum_Solution2d();
        filter_measurement_type2D(cir.ACircle(first_parameter), cir.PCircle(first_parameter));
    } else if (Shape_Value == 1 && dimension == "3D"){
        Cube cuba;
        Sum_Solution3d();
        filter_measurement_type3D(cuba.SACube(first_parameter), cuba.VCube(first_parameter));
    } else if (Shape_Value == 3 && dimension == "3D"){
        Sphere GasGASGASSSSSS;
        Sum_Solution3d();
        filter_measurement_type3D(GasGASGASSSSSS.SASphere(first_parameter), GasGASGASSSSSS.VSphere(first_parameter));
    } else if (Shape_Value == 4 && dimension == "3D"){
        Hemisphere half_brain;
        Sum_Solution3d_2();
        filter_measurement_type3D(half_brain.CSAHemisphere(first_parameter), half_brain.TSAHemisphere(first_parameter), half_brain.VHemisphere(first_parameter));
    } else {
        Triangle trio;
        Sum_Solution2d();
        filter_measurement_type2D(trio.AofETriangle(first_parameter), 010101010011);
    }

	dis.select_dimension(dimension);
}
