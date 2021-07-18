#include "Shape_3D.h"
#include "../2D_shapes/Shape_2D.h"

Shape_3D::Shape_3D() {
	cout << "Enter any 3D shape respectively" << endl;
	cout << "1. Cube \n";
	cout << "2. Cuboid \n";
	cout << "3. Sphere \n";
	cout << "4. Cone \n";
	cout << "5. Cylinder \n";
	cout << "6" << switch_to_2D;
	cout << "7" << exit_str;
	cout << input;
	cin >> WhichShape;
	cout << endl;
	switch (WhichShape) {
		case 1:
			Cube();
			break;

		case 2:
			Cuboid();
			break;

		case 3:
			Sphere();
			break;

		case 4:
			Cone();
			break;

		case 5:
			Cylinder();
			break;

        case 6:
            Shape_2D();
            break;

		case 7:
			cout << console_message;
			getchar();
			break;

		default:
			Exh.check_if_typed_string_and_invaild_number();
			Shape_3D();
			break;
	}
}
