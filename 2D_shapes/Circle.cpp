#include "../2D_Shapes/Shape_2D.h"

Circle::Circle() {
	cout << str_measure_type;
	cout << "1. Area" << endl;
	cout << "2. perimeter" << endl;
	cout << "3" << exit_str;
	cout << input; cin >> WhichShape;
	if (WhichShape == 1)
		this->ACircle();
	else if (WhichShape == 2)
		this->PCircle();
	else if (WhichShape == 3) {
		cout << console_message;
		getchar();
	} else {
		Exh.check_if_typed_string_and_invaild_number();
		Circle();
	}
}

void Circle::ACircle() {
	cout << "Specify the radius to find the area of circle " << endl;
	cout << Text_radius; cin >> Radius;
	Exh.check_if_typed_string(false);
	if (Exh.check_one_condiiton(Radius))
		cout << Exh.error_message;
	else
		cout << output << Pi * (2 * Radius) << endl << endl;
	Shape_2D();
}

void Circle::PCircle() {
	cout << "Specify the radius to find the perimeter of circle " << endl;
	cout << Text_radius; cin >> Radius;
	Exh.check_if_typed_string(false);
	if (Exh.check_one_condiiton(Radius))
		cout << Exh.error_message;

	else
		cout << output << 2 * Radius * Pi << endl << endl;
	Shape_2D();
}
