#include "Shape_3D.h"
#include "../2D_shapes/Shape_2D.h"

Shape_3D::Shape_3D() {
	dis.list_3D_Shapes();
	cout << input;
	cin >> WhichShape3D;
	Shape_order_3D();
}

void Shape_3D::Shape_order_3D(){

	if(WhichShape3D <= 3 && WhichShape3D >= 1){
		measurement_type_1();
	} else if(WhichShape3D <= 6 && WhichShape3D >= 4){
		measurement_type_2();
	} else if(WhichShape3D == 7){
        dis.dimensional = "2D";
        dis.select_dimension();
	} else if(WhichShape3D == 8){
		getchar();
	} else {
	    Exh.check_if_typed_string_and_invaild_number();
	    Shape_3D();
	}

}

void Shape_3D::measurement_type_1(){
	cout << str_measure_type
	 << "1. Surface Area"
	 << "2. Volume"
	 << "3" << previous_step
	 << "4" << exit_str;
	cout << input;
	cin >> WhichShape;

}

void Shape_3D::measurement_type_2(){
    cout << str_measure_type
		<< "1. Curved Surface Area\n"
		<< "2. Total Surface Area\n"
		<< "3. Volume\n"
		<< "4" << previous_step
		<< "5" << exit_str;
	cin >> WhichShape;

}
