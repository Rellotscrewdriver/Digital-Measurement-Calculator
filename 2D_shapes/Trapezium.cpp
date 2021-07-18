#include "../2D_Shapes/Shape_2D.h"

Trapezium::Trapezium() {
	cout << str_measure_type;
	cout << "1. Area" << endl;
	cout << "2. perimeter" << endl;
	cout << "3" << exit_str;
	cout << input; cin >> WhichShape;
	if (WhichShape == 1)
		this->ATrapezium();
	else if (WhichShape == 2)
		this->PTrapezium();
	else if (WhichShape == 3) {
		cout << console_message;
		getchar();
	} else {
		Exh.check_if_typed_string_and_invaild_number();
		Trapezium();
	}
}

void Trapezium::ATrapezium() {
	cout << "specify the height, base1 and base2 repectively" << endl;
	cout << Text_height; cin >> height;
	cout << "base1: "; cin >> base1;
	cout << "base2: "; cin >> base2;
	Exh.check_if_typed_string(false);
	if (Exh.check_three_conditions(base1, base2, height))
		cout << Exh.error_message;
	else
		cout << output << (base1 + base2) / 2 * height << endl << endl;
	Shape_2D();
}

void Trapezium::PTrapezium() {
	int SideA, SideB, SideC, SideD;
	cout << "Enter the each side of the quadrilateral: ";
	cout << "Side_A: "; cin >> SideA;
	cout << "Side_B: "; cin >> SideB;
	cout << "Side_C: "; cin >> SideC;
	cout << "Side_D: "; cin >> SideD;
	Exh.check_if_typed_string(false);
	if (Exh.check_four_conditions(SideA, SideB, SideC, SideD))
		cout << Exh.error_message;
	else
		cout << output << SideA + SideB + SideC + SideD << endl << endl;
	Shape_2D();
}
