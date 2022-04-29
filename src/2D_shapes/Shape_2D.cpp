#include "../2D_shapes/Shape_2D.h"
#include "../3D_shapes/Shape_3D.h"
#include "../Display/Display.h"

Shape_2D::Shape_2D() {
    dis.list_2D_Shapes_text();
	cout << dis.input; cin >> WhichShape;
	Shape_order_2D();
}

void Shape_2D::Shape_order_2D(){
    if(WhichShape >= 1 && WhichShape <= 8){
        measurement_type();
	} else if(WhichShape == 11){
		dis.select_dimension("3D");
	} else if(WhichShape == 12){
        cout << dis.console_message;
		getchar();
	} else {
            Handle_Exception H_Exp;
            H_Exp.check_if_user_entered_string_or_invaild_number();
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
		    Handle_Exception H_Exp;
            H_Exp.check_if_user_entered_string_or_invaild_number();
			Shape_2D();
		break;
	}

}
