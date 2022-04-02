#include "Shape_2D.h"
#include "../3D_shapes/Shape_3D.h"
#include "../declarations.h"
#include "../exception_handling.h"


Shape_2D::Shape_2D() {

    dis.list_2D_Shapes();
	cout << input; cin >> WhichShape2D;
	cout << endl;

	if(WhichShape2D <= 7 && WhichShape2D >= 1){
        measurement_type();
	} else if(WhichShape2D == 8){
        dis.dimensional = "3D";
        dis.select_dimension();
	} else if(WhichShape2D == 9){
        getwchar();
	} else {
        Exh.check_if_typed_string_and_invaild_number();
	    Shape_2D();
	}
}

void Shape_2D::measurement_type(){
    cout << str_measure_type
	 << "1. Area\n"
	 << "2. perimeter\n"
	 << "3" << exit_str
	 << input; cin >> WhichShape;
}
