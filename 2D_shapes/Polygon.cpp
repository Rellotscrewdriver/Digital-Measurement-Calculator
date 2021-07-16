#include "../2D_Shapes/Shape_2D.h"

Polygon::Polygon() {
	cout << str_measure_type;
	cout << "1. Area" << endl;
	cout << "2. perimeter" << endl;
	cout << "3" << exit_str;
	cout << input;
	cin >> WhichShape;
	if (WhichShape == 1)
		this->APolygon();
	else if (WhichShape == 2)
		this->PPolygon();
	else if (WhichShape == 3) {
		cout << console_message;
		getchar();
	} else {
		Exh.check_if_typed_string_and_invaild_number();
		Polygon();
	}
}

void Polygon::APolygon() {
	cout << "Specify the perimeter: " << endl;
	cout << "Perimeter: "; cin >> Radius;
	cout << "Specify the apothem: " << endl;
	cout << "apothem: "; cin >> apothem;
	Exh.check_if_typed_string();
	if (Radius <= 0.0 || apothem <= 0.0 || (Radius <= 0.0 && apothem <= 0.0))
		cout << Exh.error_message;
	else
		cout << output << half * Radius * apothem << endl << endl;
	Shape_2D();
}

void Polygon::PPolygon() {
	cout << "Enter the Number of Sides: " << endl;
	cin >> side;

    if(side <= 0 || side > 10){
        cout << Exh.error_message;
    }

	float answer;
	for (int a = 1; a <= side; a++) {
		cout << "side " << a << ": ";
		cin >> number_of_sides[a];

		Exh.check_if_typed_string();
		if (number_of_sides[a] <= 0.0)
			cout << Exh.error_message;
		else
            answer += number_of_sides[a];
	}
        cout << output << answer << endl << endl;
	Shape_2D();
}
