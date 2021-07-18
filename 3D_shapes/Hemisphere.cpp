#include "../3D_Shapes/Shape_3D.h"

Hemisphere::Hemisphere() {
	cout << str_measure_type;
	cout << "1. Curved Surface Area" << endl;
	cout << "2. Total Surface Area" << endl;
	cout << "3. Volume" << endl;
	cout << "4" << exit_str;
	cin >> WhichShape;
	if (WhichShape == 1)
		this->CSAHemisphere();
	else if (WhichShape == 2)
		this->TSAHemisphere();
	else if (WhichShape == 3)
		this->VHemisphere();
	else if (WhichShape == 4) {
		cout << console_message;
		getchar();
	} else {
		Exh.check_if_typed_string_and_invaild_number();
		Hemisphere();
	}
}

void Hemisphere::CSAHemisphere() {
	cout << "Specify the radius to find the Curved Surface area of hemisphere: ";
	cout << Text_radius; cin >> Radius;
	Exh.check_if_typed_string(true);
	if (Exh.check_one_condiiton(Radius))
		cout << Exh.error_message;
	else
		cout << output << 2 * pi * (Radius * Radius) << endl << endl;
	Shape_3D();
}
void Hemisphere::TSAHemisphere() {
	cout << "Specify the radius to find the Total Surface Area of hemisphere: ";
	cout << Text_radius; cin >> Radius;
	Exh.check_if_typed_string(true);
	if (Exh.check_one_condiiton(Radius))
		cout << Exh.error_message;
	else
		cout << output << 3 * pi * (Radius * Radius) << endl << endl;
	Shape_3D();
}
void Hemisphere::VHemisphere() {
	cout << "Specify the radius to find the volume of hemisphere: ";
	cout << Text_radius; cin >> Radius;
	Exh.check_if_typed_string(true);
	if (Radius <= 0.0)
		cout << Exh.error_message;
	else
		cout << output << 2 / 3 * pi * (Radius * Radius * Radius) << endl << endl;
	Shape_3D();
}
