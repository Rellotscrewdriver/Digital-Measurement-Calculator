#include "../2D_Shapes/Shape_2D.h"

double Polygon::APolygon(double Radius, double Apothem) {
    double half = 0.5;
	return half * Radius * Apothem;
}

void Polygon::PPolygon(double side) {

	for (int i = 1; i <= side; i++) {
		isnegative = false;
		cout << "Side " << i << ": ";
		cin >> number_of_sides[i];

		Exh.check_if_typed_string(false);
		if (!Exh.check_one_condiiton(number_of_sides[i]) ){
			answer += number_of_sides[i];
		} else {
			cout << Exh.error_message;
			isnegative = true;
            break;
		}
	}

	if(!isnegative){
        cout << "Output: " << answer << endl;
	}
}
