#include "Shape_2D.h"
#include "../3D_shapes/Shape_3D.h"
#include "../declarations.h"
#include "../exception_handling.h"


Shape_2D::Shape_2D() {

    dis.list_2D_Shapes_text();
	cout << input; cin >> WhichShape;
	cout << endl;

	if(WhichShape <= 7 && WhichShape >= 1){
        measurement_type();
	} else if(WhichShape == 8){
        var.dimensional = "3D";
        dis.select_dimension();
	} else if(WhichShape == 9){
        getwchar();
	} else {
        Exh.check_if_typed_string_and_invaild_number();
	    Shape_2D();
	}
}

void Shape_2D::measurement_type(){
    dis.measurement_type_2D_text();
	cin >> Measurement_Type;

	if(Measurement_Type <= 2 && Measurement_Type >= 1){
		//parameter();
	} else if(Measurement_Type == 3){
		Shape_2D();
	} else if(Measurement_Type == 4){
		getchar();
	} else {
		Exh.check_if_typed_string_and_invaild_number();
		Shape_2D();
	}
}
