#include "Shape_3D.h"
#include "../2D_shapes/Shape_2D.h"

Shape_3D::Shape_3D() {
	dis.list_3D_Shapes_text();
	cout << input;
	cin >> WhichShape;
	Shape_order_3D();
}

void Shape_3D::Shape_order_3D(){

	if(WhichShape <= 3 && WhichShape >= 1){
		measurement_type_1();
	} else if(WhichShape <= 6 && WhichShape >= 4){
		measurement_type_2();
	} else if(WhichShape == 7){
        var.dimensional = "2D";
        dis.select_dimension();
	} else if(WhichShape == 8){
		getchar();
	} else {
	    Exh.check_if_typed_string_and_invaild_number();
	    Shape_3D();
	}
}

void Shape_3D::measurement_type_1(){
    dis.measurement_type1_3D_text();
	cin >> Measurement_Type;

	if(Measurement_Type <= 2 && Measurement_Type >= 1){
		//parameter();
	} else if(Measurement_Type == 3){
		Shape_3D();
	} else if(Measurement_Type == 4){
		getchar();
	} else {
		Exh.check_if_typed_string_and_invaild_number();
		Shape_3D();
	}
}

void Shape_3D::measurement_type_2(){
	dis.measurement_type2_3D_text();
	cin >> Measurement_Type;

	if(Measurement_Type <= 3 && Measurement_Type >= 1){
		//parameter();
	} else if(Measurement_Type == 4){
        var.dimensional = "2D";
        dis.select_dimension();
	} else if(Measurement_Type == 5){
		getchar();
	} else {
	    Exh.check_if_typed_string_and_invaild_number();
	    Shape_3D();
	}
}
