#include "../2D_Shapes/Shape_2D.h"

Square::Square() {
	cout << str_measure_type;
	cout << "1. Area" << endl;
	cout << "2. perimeter" << endl;
	cout << "3" << exit_str;
	cout << input; cin >> WhichShape;
	if (WhichShape == 1)
		this->Asquare();
	else if (WhichShape == 2)
		this->Psquare();
	else if (WhichShape == 3) {
		cout << console_message;
		getchar();
	} else {
		Exh.check_if_typed_string_and_invaild_number();
		Square();
	}
}

void Square::Psquare() {
	cout << "Specify one side of square to find out the perimeter " << endl;
	cout << input; cin >> side;
	Exh.check_if_typed_string();
	if (side <= 0.0)
		cout << Exh.error_message;

	else
		cout << output << 4 * side << endl << endl;
	Shape_2D();
}

void Square::Asquare() {
	cout << "Specify one side of square to find out it's perimeter" << endl;
	cout << input; cin >> side;
	Exh.check_if_typed_string();
	if (side <= 0.0)
		cout << Exh.error_message;

	else
		cout << output << side * side << endl << endl;
	Shape_2D();
}
