#include "../3D_Shapes/Shape_3D.h"

Cube::Cube() {
	cout << str_measure_type;
	cout << "1. Surface Area" << endl;
	cout << "2. Volume" << endl;
	cout << "3" << previous_step;
	cout << "4" << exit_str;
	cout << input;
	cin >> WhichShape;
	if (WhichShape == 1)
		SACube();
	else if (WhichShape == 2)
		VCube();
	else if (WhichShape == 3)
        Shape_3D();
	else if (WhichShape == 4) {
		cout << console_message;
		getchar();
	} else {
		Exh.check_if_typed_string_and_invaild_number();
		Cube();
	}
}

void Cube::SACube() {
	cout << "Specify one side of cube to find the area" << endl;
	cout << input;
	cin >> side;
	Exh.check_if_typed_string(true);
	if (Exh.check_one_condiiton(side))
		cout << Exh.error_message;
	else
		cout << output << 6 * (side * side) << endl << endl;
	Shape_3D();
}

void Cube::VCube() {
	cout << "specify one side of cube to find it's volume" << endl;
	cout << input;
	cin >> side;
	Exh.check_if_typed_string(true);
	if (Exh.check_one_condiiton(side))
		cout << Exh.error_message;
	else
		cout << output << side * side * side << endl;
	Shape_3D();
}
