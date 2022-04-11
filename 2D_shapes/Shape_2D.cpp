#include "Shape_2D.h"
#include "../3D_shapes/Shape_3D.h"
#include "../declarations.h"
#include "parameter.h"
#include "../exception_handling.h"

Shape_2D::Shape_2D() {
    dis.list_2D_Shapes_text();
	cout << input; cin >> WhichShape;
	Shape_order_2D();
}

void Shape_2D::Shape_order_2D(){
	switch(WhichShape){
		case 1:
			var.ShapeName = "Square";
			measurement_type();
		break;

		case 2:
			var.ShapeName = "Rectangle";
			measurement_type();
		break;

		case 3:
			var.ShapeName = "Parallelogram";
			measurement_type();
		break;

		case 4:
			var.ShapeName = "Circle";
			measurement_type();
		break;

		case 5:
			var.ShapeName = "Quadrilateral";
			measurement_type();
		break;

		case 6:
			var.ShapeName = "Trapezium";
			measurement_type();
		break;

		case 7:
			var.ShapeName = "Polygon";
			measurement_type();
		break;

		case 8:
			dis.select_dimension("3D");
		break;

		case 9:
			getwchar();
		break;

		default:
			Exh.check_if_typed_string_and_invaild_number();
			Shape_2D();
		break;
	}
}
void Shape_2D::measurement_type(){
    dis.measurement_type_2D_text();
	cin >> Measurement_Type;

	switch(Measurement_Type){
		case 1:
			Measurement_Name = "Area";
            Parameter("2D");
		break;

		case 2:
			Measurement_Name = "Perimeter";
			Parameter("2D");
		break;

		case 3:
			Shape_2D();
		break;

		case 4:
			getchar();
		break;

		default:
			Exh.check_if_typed_string_and_invaild_number();
			Shape_2D();
		break;
	}

}
