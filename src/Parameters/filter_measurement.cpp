#include "../Include/parameter.h"

void Parameter::filter_measurement_type2D(double Area, double Perimeter){
	if(Measure_Type == 1){
		cout << "Output: " << Area << NEWLINE;
	} else if(Measure_Type == 2){
        cout << "Output: " << Perimeter << NEWLINE;
	}
}
void Parameter::filter_measurement_type3D(double Surface_Area, double Volume){
	if(Measure_Type == 1){
		cout << "Output: " << Surface_Area << NEWLINE;
	} else if(Measure_Type == 2){
        cout << "Output: " << Volume << NEWLINE;
	}
}

void Parameter::filter_measurement_type3D(double Curved_Surface_Area, double Total_Surface_Area, double Volume){
	if(Measure_Type == 1){
		cout << "Output: " << Curved_Surface_Area << NEWLINE;
	} else if(Measure_Type == 2){
		cout << "Output: " << Total_Surface_Area << NEWLINE;
	} else if(Measure_Type == 3){
		cout << "Output: " << Volume << NEWLINE;
    }
}

string Parameter::filter_measurement_name(){
    if(Measure_Type == 1 && dis.dimension_compare2D(dimension)){
        return "area";
    } else if(Measure_Type == 2 && dis.dimension_compare2D(dimension)){
        return "perimeter";
    } else if(Measure_Type == 1 && Shape_Value >= 1 && Shape_Value <= 3){
        return "surface area";
    } else if(Measure_Type == 2 && Shape_Value >= 1 && Shape_Value <= 3){
        return "volume";
    } else if(Measure_Type == 1 && Shape_Value >= 4 && Shape_Value <= 6){
        return "curved surface area";
    } else if(Measure_Type == 2 && Shape_Value >= 4 && Shape_Value <= 6){
        return "total surface area";
    } else if(Measure_Type == 3 && Shape_Value >= 4 && Shape_Value <= 6){
        return "volume";
    } else {
        return "Unknown Parameter";
    }
}
