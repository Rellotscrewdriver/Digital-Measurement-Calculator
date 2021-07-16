#include "2D_shapes/Shape_2D.h"
#include "3D_Shapes/Shape_3D.h"
#include "declarations.h"

int main() {
	declarations variables;

	string dimensional;
	cout << "Enter The Dimension: ";
	cin >> dimensional;

	if (dimensional == "2d" || dimensional == "2D") {
		cout << endl;
		Shape_2D();
	} else if (dimensional == "3d" || dimensional == "3D") {
		cout << endl;
		Shape_3D();
	} else if (dimensional == "exit" || dimensional == "e") {
		cout << variables.console_message;
		getchar();
	} else {
		if (!cin.fail())
			cout << "Invaild Input Detected" << endl << endl;
		cout << endl;
		main();
	}
	cout << endl;
	return 0;
}
