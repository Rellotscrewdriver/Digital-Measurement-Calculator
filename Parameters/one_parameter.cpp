#include "parameter.h"
#include "../2D_shapes/Shape_2D.h"

void Parameter::one_parameter_2D(){
	cout << "Specify one parameter of " << dec.Measurement_Name << " to find it's " << dec.ShapeName << endl;
    cout << dec.input; cin >> first_parameter;

    Exh.check_if_typed_string(false);

	if (Exh.check_one_condiiton(first_parameter)){
		cout << Exh.error_message;
    } else if (Shape_Value == 1){
        Square sqrt;
        filter_measurement_type2D(sqrt.Asquare(first_parameter), sqrt.Psquare(first_parameter));
    } else if (Shape_Value == 4){
        Circle cir;
        filter_measurement_type2D(cir.ACircle(first_parameter), cir.PCircle(first_parameter));
    }
	dis.select_dimension("2D");
}

void Parameter::one_parameter_3D(){

	cout << "Specify one parameter of " << dec.Measurement_Name << " to find it's " << dec.ShapeName << endl;
    cout << dec.input; cin >> first_parameter;
    Exh.check_if_typed_string(true);

    if (Exh.check_one_condiiton(first_parameter)){
		cout << Exh.error_message;
    } else if (Shape_Value == 1){
        Cube cuba;
        filter_measurement_type3D1(cuba.SACube(first_parameter), cuba.VCube(first_parameter));
    } else if (Shape_Value == 3){
        Sphere speed;
        filter_measurement_type3D1(speed.SASphere(first_parameter), speed.VSphere(first_parameter));
    } else if (Shape_Value == 5){
        Hemisphere half_brain;
        filter_measurement_type3D2(half_brain.CSAHemisphere(first_parameter), half_brain.TSAHemisphere(first_parameter), half_brain.VHemisphere(first_parameter));
    }
	dis.select_dimension("3D");
}


