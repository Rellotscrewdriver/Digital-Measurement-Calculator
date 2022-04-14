#include "parameter.h"

void Parameter::filter_2D_Shapes(int Which_2D_Shape, int measuretype){
    Shape_Value = Which_2D_Shape;
    MeasureType = measuretype;
	if(Which_2D_Shape == 1 || Which_2D_Shape == 4){
		one_parameter_2D();
	} else if(Which_2D_Shape == 2 || Which_2D_Shape == 3){
		two_parameters_2D();
	} else if(Which_2D_Shape == 5 || Which_2D_Shape == 6){
		three_four_parameters_2D();
	} else {
		Special();
	}
}

void Parameter::filter_3D_Shapes(int Which_3D_Shape, int measuretype){
    Shape_Value = Which_3D_Shape;
    MeasureType = measuretype;
	if(Which_3D_Shape == 1 || Which_3D_Shape == 3){
		one_parameter_3D();
	} else if(Which_3D_Shape == 4 || Which_3D_Shape == 6){
		two_parameters_3D();
	} else {

	}
}

void Parameter::filter_measurement_type2D(double Area, double Perimeter){
            if(MeasureType == 1){
                cout << "Output: " << Area << endl << endl;
            } else if(MeasureType == 2){
                cout << "Output: " << Perimeter << endl << endl;
            }
}

void Parameter::filter_measurement_type3D1(double Surface_Area, double Volume){
            if(MeasureType == 1){
                cout << "Output: " << Surface_Area << "\n\n";
            } else if(MeasureType == 2){
                cout << "Output: " << Volume << "\n\n";
            }
}

void Parameter::filter_measurement_type3D2(double Curved_Surface_Area, double Total_Surface_Area, double Volume){
            if(MeasureType == 1){
                cout << "Output: " << Curved_Surface_Area << "\n\n";
            } else if(MeasureType == 2){
                cout << "Output: " << Total_Surface_Area << "\n\n";
            } else if(MeasureType == 3){
                cout << "Output: " << Volume << "\n\n";
            }
}
