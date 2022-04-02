#ifndef DISPLAY_H
#define DISPLAY_H

#include "../declarations.h"

class Display {
public:
	string dimensional;
	
	int Measurement_Type;
	string Shape_Name;

	const string exit_str = ". exit the program\n";
    const string switch_to_3D = ". switch to 3D\n";
    const string switch_to_2D = ". Switch to 2D\n";


    void enter_dimension();
	void select_dimension();
    void list_2D_Shapes();
    void list_3D_Shapes();
	bool dimension_compare2D(string parameter);
    bool dimension_compare3D(string parameter);
    bool user_typed_exit(string parameter);

private:

};

#endif
