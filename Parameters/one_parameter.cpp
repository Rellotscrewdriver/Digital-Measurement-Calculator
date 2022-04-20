#include "parameter.h"
#include "../2D_shapes/Shape_2D.h"

void Parameter::one_parameter(){
	cout << "Specify one parameter of " << Shape_Name << " to find it's " << filter_measurement_name2D() << endl;
    cout << dis.one_parameter_text(Shape_Value); cin >> first_parameter;

    Exh.check_if_typed_string(is3D);

	if (Exh.check_one_condiiton(first_parameter)){
		cout << Exh.error_message;
    } else if (Shape_Value == 1 && dimension == "2D"){
        Square sqrt;
        filter_measurement_type2D(sqrt.Asquare(first_parameter), sqrt.Psquare(first_parameter));
    } else if (Shape_Value == 4 && dimension == "2D"){
        Circle cir;
        filter_measurement_type2D(cir.ACircle(first_parameter), cir.PCircle(first_parameter));
    } else if (Shape_Value == 1 && dimension == "3D"){
        Cube cuba;
        filter_measurement_type3D(cuba.SACube(first_parameter), cuba.VCube(first_parameter));
    } else if (Shape_Value == 3 && dimension == "3D"){
        Sphere speed;
        filter_measurement_type3D(speed.SASphere(first_parameter), speed.VSphere(first_parameter));
    } else if (Shape_Value == 4 && dimension == "3D"){
        Hemisphere half_brain;
        filter_measurement_type3D(half_brain.CSAHemisphere(first_parameter), half_brain.TSAHemisphere(first_parameter), half_brain.VHemisphere(first_parameter));
    }
	dis.select_dimension(dimension);
}
