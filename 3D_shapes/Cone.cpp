#include "Shape_3D.h"

Cone::Cone() {
	cout << str_measure_type;
	cout << "1. Curved Surface Area" << endl;
	cout << "2. Total Surface Area(Right Circular)" << endl;
	cout << "3. Volume" << endl;
	cout << "4" << previous_step;
	cout << "5" << exit_str;
	cin >> WhichShape;
	if (WhichShape == 1)
		this->CSACone();
	else if (WhichShape == 2)
		this->TSACone();
	else if (WhichShape == 3)
		this->VCone();
	else if (WhichShape == 4)
        Shape_3D();
	else if (WhichShape == 5) {
		cout << console_message;
		getchar();
	} else {
		Exh.check_if_typed_string_and_invaild_number();
		Cone();
	}
}

void Cone::CSACone() {
	cout << "specify the radius to find Curved surface area of cone";
	cout << Text_radius;
	cin >> Radius;
	cin >> length;
	Exh.check_if_typed_string(true);
	if (Exh.check_two_conditions(Radius, length))
		cout << Exh.error_message;
	else
		cout << "Output:" << pi * Radius * length << endl << endl;
	Shape_3D();
}

void Cone::TSACone() {
	cin >> Radius;
	cin >> slant_height;
	Exh.check_if_typed_string(true);
	if (Exh.check_two_conditions(Radius, slant_height))
		cout << Exh.error_message;
	else
		cout << pi * Radius * (slant_height * Radius) << endl << endl;
	Shape_3D();
}

void Cone::VCone() {
	cin >> Radius;
	cin >> height;
	Exh.check_if_typed_string(true);
	if (Exh.check_two_conditions(Radius, height))
		cout << Exh.error_message;
	else
		cout << 1 / 3 * pi * (Radius * Radius) * height << endl << endl;
	Shape_3D();
}
