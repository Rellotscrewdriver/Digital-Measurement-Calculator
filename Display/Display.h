#include "../declarations.h"


class Display {
public:
	string dimensional;
	int WhichShape;
	int Measurement_Type;
	string Shape_Name;

    void enter_dimension();
	void select_dimension();
    void list_2D_Shapes();
    void list_3D_Shapes();
	bool dimension_compare2D(string parameter);
    bool dimension_compare3D(string parameter);
    bool user_typed_exit(string parameter);

private:

};
