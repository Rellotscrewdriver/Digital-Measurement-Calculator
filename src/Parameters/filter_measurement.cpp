#include "../Include/parameter.h"

void Parameter::filter_measurement_type2D(double Area, double Perimeter){
	if(Measure_Type == 1){
		cout << color::yellow << "Output: " << Area << color::reset << NEWLINE;
	} else if(Measure_Type == 2){
        cout << color::yellow << "Output: " << Perimeter << color::reset << NEWLINE;
	}
}
void Parameter::filter_measurement_type3D(double Surface_Area, double Volume){
	if(Measure_Type == 1){
		cout << color::yellow << "Output: " << Surface_Area << color::reset << NEWLINE;
	} else if(Measure_Type == 2){
        cout << color::yellow << "Output: " << Volume << color::reset << NEWLINE;
	}
}

void Parameter::filter_measurement_type3D(double Curved_Surface_Area, double Total_Surface_Area, double Volume){
	if(Measure_Type == 1){
		cout << color::yellow << "Output: " << Curved_Surface_Area << color::reset << NEWLINE;
	} else if(Measure_Type == 2){
		cout << color::yellow << "Output: " << Total_Surface_Area << color::reset << NEWLINE;
	} else if(Measure_Type == 3){
		cout << color::yellow << "Output: " << Volume << color::reset << NEWLINE;
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
