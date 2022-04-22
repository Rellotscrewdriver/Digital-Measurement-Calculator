#include "Shape_2D.h"
#include "../3D_shapes/Shape_3D.h"
#include "../declarations.h"
#include "../exception_handling.h"

Shape_2D::Shape_2D() {
    dis.list_2D_Shapes_text();
	cout << dis.input; cin >> WhichShape;
	Shape_order_2D();
}

void Shape_2D::Shape_order_2D(){

    if(WhichShape >= 1 && WhichShape <= 7){
        measurement_type();
	} else if(WhichShape == 11){
		dis.select_dimension("3D");
	} else if(WhichShape == 12){
        cout << dis.console_message;
		getchar();
	} else {
            Exh.check_if_typed_string_and_invaild_number();
			Shape_2D();
	}

}

void Shape_2D::measurement_type(){
    Parameter para;
    dis.measurement_type_2D_text();
	cin >> Measurement_Type;

	switch(Measurement_Type){
		case 1:
			Measurement_Name = "Area";
            para.filter_2D_Shapes(WhichShape, Measurement_Type);
		break;

		case 2:
			Measurement_Name = "Perimeter";
			para.filter_2D_Shapes(WhichShape, Measurement_Type);
		break;

		case 6:
			Shape_2D();
		break;

		case 7:
		    cout << dis.console_message;
			getchar();
		break;

		default:
			Exh.check_if_typed_string_and_invaild_number();
			Shape_2D();
		break;
	}

}
