#include "Shape_3D.h"
#include "../2D_shapes/Shape_2D.h"
#include "../Display/Display.h"
#include "parameter.h"

Shape_3D::Shape_3D() {
    Display is;
	is.list_3D_Shapes_text();
	cout << is.input;
	cin >> WhichShape;
	Shape_order_3D();
}

void Shape_3D::Shape_order_3D(){
    Display dis;
    if(WhichShape <= 3 && WhichShape >= 1){
        measurement_type_1();
    } else if(WhichShape >= 4 && WhichShape <= 6){
        measurement_type_2();
    } else if (WhichShape == 7){
        dis.select_dimension("2D");
    } else if(WhichShape == 8){
        getchar();
    } else {
        Exh.check_if_typed_string_and_invaild_number();
        Shape_3D();
    }
}

void Shape_3D::measurement_type_1(){
    Display dis;
    Parameter para;
    dis.measurement_type1_3D_text();
	cin >> Measurement_Type;

	switch(Measurement_Type){
		case 1:
            para.filter_3D_Shapes(WhichShape, Measurement_Type);
			Measurement_Name = "Surface Area";
		break;

		case 2:
			para.filter_3D_Shapes(WhichShape, Measurement_Type);
			Measurement_Name = "Volume";
		break;

		case 3:
			Shape_3D();
		break;

		case 4:
			getchar();
		break;

		default:
			Exh.check_if_typed_string_and_invaild_number();
			Shape_3D();
	}

}

void Shape_3D::measurement_type_2(){
    Display dis;
    Parameter para;
	dis.measurement_type2_3D_text();
	cin >> Measurement_Type;

	switch(Measurement_Type){
		case 1:
			Measurement_Name = "Curved Surface Area";
			para.filter_3D_Shapes(WhichShape, Measurement_Type);
		break;

		case 2:
			Measurement_Name = "Total Surface Area";
			para.filter_3D_Shapes(WhichShape, Measurement_Type);
        break;

		case 3:
			Measurement_Name = "Volume";
			para.filter_3D_Shapes(WhichShape, Measurement_Type);
		break;

		case 4:
			dis.select_dimension("2D");
		break;

		case 5:
			getchar();
		break;

		default:
			Exh.check_if_typed_string_and_invaild_number();
			Shape_3D();
	}
}
