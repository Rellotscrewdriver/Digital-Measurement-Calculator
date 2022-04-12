#include "Shape_3D.h"
#include "../2D_shapes/Shape_2D.h"
#include "../Display/Display.h"
#include "parameter.h"

Shape_3D::Shape_3D() {
    Display is;
	is.list_3D_Shapes_text();
	cout << input;
	cin >> WhichShape;
	Shape_order_3D();
}

void Shape_3D::Shape_order_3D(){
    Display dis;
	switch(WhichShape){
		case 1:
			measurement_type_1();
			ShapeName = "Cube";
		break;

		case 2:
			measurement_type_1();
			ShapeName = "Cuboid";
		break;

		case 3:
			measurement_type_1();
			ShapeName = "Sphere";
		break;

		case 4:
			measurement_type_2();
			ShapeName = "Cylinder";
		break;

		case 5:
			measurement_type_2();
			ShapeName = "Hemisphere";
		break;

		case 6:
			measurement_type_2();
			ShapeName = "Cone";
		break;

		case 7:
			dis.select_dimension("2D");
		break;

		case 8:
			getchar();
		break;

		default:
			Exh.check_if_typed_string_and_invaild_number();
			Shape_3D();
		break;

	}

}

void Shape_3D::measurement_type_1(){
    Display dis;
    dis.measurement_type1_3D_text();
	cin >> Measurement_Type;

	switch(Measurement_Type){
		case 1:
            Parameter("3D", WhichShape, Measurement_Type);
			Measurement_Name = "Surface Area";
		break;

		case 2:
			Parameter("3D", WhichShape, Measurement_Type);
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
	dis.measurement_type2_3D_text();
	cin >> Measurement_Type;

	switch(Measurement_Type){
		case 1:
			Measurement_Name = "Curved Surface Area";
			//parameter();
		break;

		case 2:
			Measurement_Name = "Total Surface Area";
			//parameter();
		break;

		case 3:
			Measurement_Name = "Volume";
			//parameter();
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
