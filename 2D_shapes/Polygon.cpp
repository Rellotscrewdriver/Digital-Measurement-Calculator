#include "../2D_Shapes/Shape_2D.h"

Polygon::Polygon() {
	cout << str_measure_type;
	cout << "1. Area" << endl;
	cout << "2. perimeter" << endl;
	cout << "3" << previous_step;
	cout << "4" << exit_str;
	cout << input;
	cin >> WhichShape;
	if (WhichShape == 1)
		this->APolygon();
	else if (WhichShape == 2)
		this->PPolygon();
    else if (WhichShape == 3)
		Shape_2D();
	else if (WhichShape == 4) {
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
	Exh.check_if_typed_string(false);
	if (Exh.check_two_conditions(Radius, apothem))
		cout << Exh.error_message;
	else
		cout << output << half * Radius * apothem << endl << endl;
	Shape_2D();
}

void Polygon::PPolygon() {
	cout << "Enter the Number of Sides: " << endl;
	cin >> side;

    if(Exh.check_one_condiiton(side) || side > 10){
        cout << Exh.error_message;
    }
    Exh.check_if_typed_string(false);
    bool isnegative = false;
	float answer;
	for (int a = 1; a <= side; a++) {
		cout << "side " << a << ": ";
		cin >> number_of_sides[a];

		Exh.check_if_typed_string(false);
		if (Exh.check_one_condiiton(number_of_sides[a]) ){
			cout << Exh.error_message;
			isnegative = true;
            break;
		} else
            answer += number_of_sides[a];
	}

	if(!isnegative){
        cout << output << answer << endl << endl;
	}

	Shape_2D();
}
