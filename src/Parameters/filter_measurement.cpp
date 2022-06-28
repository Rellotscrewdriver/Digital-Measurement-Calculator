#include "../Include/parameter.h"
   
void Parameter::filter_measurement_type2D(double Area, double Perimeter){
Log.open("Log.txt", ios::app);
    if(Measure_Type == 1){
        cout << color::yellow << EQUAL << Area << color::reset << NEWLINE;
		    cout << color::yellow << ANSWER << Area << color::reset << NEWLINE;
        Log << "\n\nThe Answer was " << Area << endl;
        hr.horizontal_line(54, "=");
	} else if(Measure_Type == 2){
        cout << color::yellow << EQUAL << Perimeter << color::reset << NEWLINE;
		    cout << color::yellow << ANSWER << Perimeter << color::reset << NEWLINE;
        Log << "\n\nThe Answer was " << Perimeter << endl;
        hr.horizontal_line(54, "=");
	}

Log.close();
}

void Parameter::filter_measurement_type3D(double Surface_Area, double Volume){
Log.open("Log.txt", ios::app);

	if(Measure_Type == 1){
		    cout << color::yellow << EQUAL << Surface_Area << color::reset << NEWLINE;
        cout << color::yellow << ANSWER << Surface_Area << color::reset << NEWLINE;
        Log << "\n\nThe Answer was " << Surface_Area << endl;
        hr.horizontal_line(54, "=");
        Log.close();
	} else if(Measure_Type == 2){
        cout << color::yellow << EQUAL << Volume << color::reset << NEWLINE;
        cout << color::yellow << ANSWER << Volume << color::reset << NEWLINE;
        Log << "\n\nThe Answer was " << Volume << endl;
        hr.horizontal_line(54, "=");
        Log.close();
	}
}

void Parameter::filter_measurement_type3D(double Curved_Surface_Area, double Total_Surface_Area, double Volume){
Log.open("Log.txt", ios::app);

	if(Measure_Type == 1){
		    cout << color::yellow << EQUAL << Curved_Surface_Area << color::reset << NEWLINE;
		    cout << color::yellow << ANSWER << Curved_Surface_Area << color::reset << NEWLINE;
        Log << "\n\nThe Answer was " << Curved_Surface_Area << endl;
        hr.horizontal_line(54, "=");
        Log.close();
	} else if(Measure_Type == 2){
	      cout << color::yellow << EQUAL << Total_Surface_Area << color::reset << NEWLINE;
		    cout << color::yellow << ANSWER << Total_Surface_Area << color::reset << NEWLINE;
        Log << "\n\nThe Answer was " << Total_Surface_Area << endl;
        hr.horizontal_line(54, "=");
        Log.close();
	} else if(Measure_Type == 3){
        cout << color::yellow << EQUAL << Volume << color::reset << NEWLINE;
		    cout << color::yellow << ANSWER << Volume << color::reset << NEWLINE;
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
