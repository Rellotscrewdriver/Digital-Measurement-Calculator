#include "../Include/Shape_2D.h"
#include "../Include/Solution.h"
#include "../Include/file-log.h"

double DIC_Polygon::APolygon(double Radius, double Apothem) {
	return 0.5 * Radius * Apothem;
}

void DIC_Polygon::PPolygon(double side) {
    Handle_Exception H_Exp;

    cout << color::yellow << FORMULA << "combined sides + another side...\n\n" << color::reset;

	for (int i = 1; i <= side; i++) {
		isnegative = false;
		cout << "Side " << i << ": ";
		cin >> number_of_sides[i];

		H_Exp.check_if_user_entered_string_and_shape_3D(false);
		if (!H_Exp.check_one_condition(number_of_sides[i]) ){
			if(i > 1){
				cout << "= " << answer << " + " << number_of_sides[i] << "\n\n";
			}
			answer += number_of_sides[i];
		} else {
			cout << H_Exp.negative_number_error_message;
			isnegative = true;
            break;
		}
	}

	if(!isnegative){
		cout << "= " << answer << endl;
        cout << "\n\nHence, the answer is " << answer << endl;

		std::ofstream Log;
		Log.open("Log.txt", ios::app);
		Log << "\nThe answer was " << answer << "\n";
    	Log.close();
	}
}

void Solution::Sol_PolygonA(){
	cout << color::yellow << FORMULA << "Radius * Apothem\n" << color::reset;
   	cout << SOLUTION;
	cout << "= 0.5 * " << first_para << " * " << second_para << "\n"; 
	cout << "= 0.5 * " << first_para * second_para << "\n"; 
}
