#include "parameter.h"

void Parameter::filter_2D_Shapes(int Which_2D_Shape, int measuretype){
    Shape_Value = Which_2D_Shape;
    MeasureType = measuretype;

	switch(Which_2D_Shape){
		case 1:
			Shape_Name = "square";
			one_parameter_2D();
		break;

		case 2:
			Shape_Name = "rectangle";
			two_parameters_2D();
		break;

		case 3:
			Shape_Name = "parallelogram";
			two_parameters_2D();
		break;

		case 4:
			Shape_Name = "circle";
			one_parameter_2D();
		break;

		case 5:
			Shape_Name = "quadrilateral";
			three_four_parameters_2D();
		break;

		case 6:
			Shape_Name = "trapezium";
			three_four_parameters_2D();
		break;

		case 7:
			Shape_Name = "polygon";
			Special();
		break;
	}
}

void Parameter::filter_3D_Shapes(int Which_3D_Shape, int measuretype){
    Shape_Value = Which_3D_Shape;
    MeasureType = measuretype;
		switch(Which_3D_Shape){
		case 1:
			Shape_Name = "cube";
			one_parameter_3D();
		break;

		case 2:
			Shape_Name = "cuboid";
			three_parameters_3D();
		break;

		case 3:
			Shape_Name = "sphere";
			one_parameter_3D();
		break;

		case 4:
			Shape_Name = "hemisphere";
			one_parameter_3D();
		break;

		case 5:
			Shape_Name = "cone";
			two_parameters_3D();
		break;

		case 6:
            Shape_Name = "cylinder";
            two_parameters_3D();
		break;
    }
}

void Parameter::filter_measurement_type2D(double Area, double Perimeter){
            if(MeasureType == 1){
                cout << "Output: " << Area << "\n\n";
            } else if(MeasureType == 2){
                cout << "Output: " << Perimeter << "\n\n";
            }
}

void Parameter::filter_measurement_type3D(double Surface_Area, double Volume){
            if(MeasureType == 1){
                cout << "Output: " << Surface_Area << "\n\n";
            } else if(MeasureType == 2){
                cout << "Output: " << Volume << "\n\n";
            }
}

void Parameter::filter_measurement_type3D(double Curved_Surface_Area, double Total_Surface_Area, double Volume){
            if(MeasureType == 1){
                cout << "Output: " << Curved_Surface_Area << "\n\n";
            } else if(MeasureType == 2){
                cout << "Output: " << Total_Surface_Area << "\n\n";
            } else if(MeasureType == 3){
                cout << "Output: " << Volume << "\n\n";
            }
}

string Parameter::filter_measurement_name2D(){
    if(MeasureType == 1){
        return "area";
    } else if(MeasureType == 2){
        return "perimeter";
    }
}

string Parameter::filter_measurement_name3D(){
    if(MeasureType == 1 && Shape_Value >= 1 && Shape_Value <= 3){
        return "surface area";
    } else if(MeasureType == 2 && Shape_Value >= 1 && Shape_Value <= 3){
        return "volume";
    } else if(MeasureType == 1 && Shape_Value >= 4 && Shape_Value <= 6){
        return "curved surface area";
    } else if(MeasureType == 2 && Shape_Value >= 4 && Shape_Value <= 6){
        return "total surface area";
    } else if(MeasureType == 3 && Shape_Value >= 4 && Shape_Value <= 6){
        return "volume";
    }
}

