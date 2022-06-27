#include "../Include/parameter.h"
   
void Parameter::filter_measurement_type2D(double Area, double Perimeter){
Log.open("Log.txt", ios::app);
    if(Measure_Type == 1){
        cout << EQUAL << Area << NEWLINE;
		    cout << ANSWER << Area << NEWLINE;
        Log << "\n\nThe Answer was " << Area << endl;
        hr.horizontal_line(54, "=");
	} else if(Measure_Type == 2){
        cout << EQUAL << Perimeter << NEWLINE;
		    cout << ANSWER << Perimeter << NEWLINE;
        Log << "\n\nThe Answer was " << Perimeter << endl;
        hr.horizontal_line(54, "=");
	}

Log.close();
}

void Parameter::filter_measurement_type3D(double Surface_Area, double Volume){
Log.open("Log.txt", ios::app);

	if(Measure_Type == 1){
		    cout << EQUAL << Surface_Area << NEWLINE;
        cout << ANSWER << Surface_Area << NEWLINE;
        Log << "\n\nThe Answer was " << Surface_Area << endl;
        hr.horizontal_line(54, "=");
        Log.close();
	} else if(Measure_Type == 2){
        cout << EQUAL << Volume << NEWLINE;
        cout << ANSWER << Volume << NEWLINE;
        Log << "\n\nThe Answer was " << Volume << endl;
        hr.horizontal_line(54, "=");
        Log.close();
	}
}

void Parameter::filter_measurement_type3D(double Curved_Surface_Area, double Total_Surface_Area, double Volume){
Log.open("Log.txt", ios::app);

	if(Measure_Type == 1){
		    cout << EQUAL << Curved_Surface_Area << NEWLINE;
		    cout << ANSWER << Curved_Surface_Area << NEWLINE;
        Log << "\n\nThe Answer was " << Curved_Surface_Area << endl;
        hr.horizontal_line(54, "=");
        Log.close();
	} else if(Measure_Type == 2){
	      cout << EQUAL << Total_Surface_Area << NEWLINE;
		    cout << ANSWER << Total_Surface_Area << NEWLINE;
        Log << "\n\nThe Answer was " << Total_Surface_Area << endl;
        hr.horizontal_line(54, "=");
        Log.close();
	} else if(Measure_Type == 3){
        cout << EQUAL << Volume << NEWLINE;
		    cout << ANSWER << Volume << NEWLINE;
        Log << "\n\nThe Answer was " << Volume << endl;
        hr.horizontal_line(54, "=");
        Log.close();        
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
