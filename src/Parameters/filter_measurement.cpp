#include "../Include/parameter.h"
   
std::ofstream fs;

void Parameter::filter_measurement_type2D(double Area, double Perimeter){
    fs.open("Log.txt", ios::app);
    
    if(Measure_Type == 1){
		cout << "Output: " << Area << NEWLINE;
        fs << "\n\nThe Answer was " << Area << endl;
        fil.horizontal_line(54, "=");
        fs.close();
	} else if(Measure_Type == 2){
        cout << "Output: " << Perimeter << NEWLINE;
        fs << "\n\nThe Answer was " << Perimeter << endl;
        fil.horizontal_line(54, "=");
        fs.close();
	}

}
void Parameter::filter_measurement_type3D(double Surface_Area, double Volume){
fs.open("Log.txt", ios::app);

	if(Measure_Type == 1){
		cout << "Output: " << Surface_Area << NEWLINE;
        fs << "\n\nThe Answer was " << Surface_Area << endl;
        fil.horizontal_line(54, "=");
        fs.close();
	} else if(Measure_Type == 2){
        cout << "Output: " << Volume << NEWLINE;
        fs << "\n\nThe Answer was " << Volume << endl;
        fil.horizontal_line(54, "=");
        fs.close();
	}
}

void Parameter::filter_measurement_type3D(double Curved_Surface_Area, double Total_Surface_Area, double Volume){
fs.open("Log.txt", ios::app);

	if(Measure_Type == 1){
		cout << "Output: " << Curved_Surface_Area << NEWLINE;
        fs << "\n\nThe Answer was " << Curved_Surface_Area << endl;
        fil.horizontal_line(54, "=");
        fs.close();
	} else if(Measure_Type == 2){
		cout << "Output: " << Total_Surface_Area << NEWLINE;
        fs << "\n\nThe Answer was " << Total_Surface_Area << endl;
        fil.horizontal_line(54, "=");
        fs.close();
	} else if(Measure_Type == 3){
		cout << "Output: " << Volume << NEWLINE;
        fs << "\n\nThe Answer was " << Volume << endl;
        fil.horizontal_line(53, "=");
        fs.close();        
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
