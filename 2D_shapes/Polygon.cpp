#include "../2D_Shapes/Shape_2D.h"

double Polygon::APolygon(double Radius, double Apothem) {
    double half = 0.5;
	return half * Radius * Apothem;
}

double Polygon::PPolygon(double side) {
	for (int a = 1; a <= side; a++) {
		cout << "side " << a << ": ";
		cin >> number_of_sides[a];

		Exh.check_if_typed_string(false);
		if (!Exh.check_one_condiiton(number_of_sides[a]) ){
			answer += number_of_sides[a];
		} else {
			cout << Exh.error_message;
			isnegative = true;
            break;
		}
	}

	if(!isnegative){
        return answer;
	} else {
        return 0;
	}
}
