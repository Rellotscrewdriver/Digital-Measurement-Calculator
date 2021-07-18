#include "../2D_Shapes/Shape_2D.h"

Rectangle::Rectangle() {
	cout << str_measure_type;
	cout << "1. Area" << endl;
	cout << "2. perimeter" << endl;
	cout << "3" << exit_str;
	cout << input; cin >> WhichShape;
	if (WhichShape == 1)
		this->ARectangle();
	else if (WhichShape == 2)
		this->PRectangle();
	else if (WhichShape == 3) {
		cout << console_message;
		getchar();
	} else {
		Exh.check_if_typed_string_and_invaild_number();
		Rectangle();
	}
}

void Rectangle::PRectangle() {
	cout << "Specify the width and height for perimeter" << endl;
	cout << Text_length; cin >> length;
	cout << Text_width; cin >> width;
	Exh.check_if_typed_string(false);
	if (Exh.check_two_conditions(length, width))
		cout << Exh.error_message;
	else
		cout << output << 2 * (length + width) << endl << endl;
	Shape_2D();
}

void Rectangle::ARectangle() {
	cout << "Specify the width and height for area respectively" << endl;
	cout << Text_height; cin >> height;
	cout << Text_width; cin >> width;
	Exh.check_if_typed_string(false);
	if (Exh.check_two_conditions(height, width))
		cout << Exh.error_message;
	else
		cout << output << height * width << endl << endl;
	Shape_2D();
}
