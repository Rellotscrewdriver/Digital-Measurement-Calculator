#include "../Include/Shape_3D.h"
#include "../Include/Shape_2D.h"
#include "../Include/Display.h"
#include "../Include/parameter.h"

Shape_3D::Shape_3D() {
    Display dis;
	dis.list_3D_Shapes_text();
	cout << dis.input;
	cin >> Which_Shape;
	Shape_order_3D();
}

void Shape_3D::Shape_order_3D(){
    Display dis;
    if(Which_Shape <= 3 && Which_Shape >= 1){
        measurement_type_1();
    } else if(Which_Shape >= 4 && Which_Shape <= 6){
        measurement_type_2();
    } else if (Which_Shape == 11){
        dis.select_dimension("2D");
    } else if(Which_Shape == 12){
        cout << dis.console_message;
        Log.open("Log.txt", ios::app);
        Log << "you selected 3d shapes but you exited it, didn't you like our software?\n";
		Log.close();
        getchar();
    } else {
        Handle_Exception H_Ex;
        H_Ex.check_if_user_entered_string_or_invaild_number();
        Shape_3D();
    }
}

void Shape_3D::measurement_type_1(){
    Display dis;
    Parameter para;
    dis.measurement_type1_3D_text();
	cin >> Measurement_Type;

	switch(Measurement_Type){
		case 1:
            para.filter_3D_Shapes(Which_Shape, Measurement_Type);
			Measurement_Name = "Surface Area";
		break;

		case 2:
			para.filter_3D_Shapes(Which_Shape, Measurement_Type);
			Measurement_Name = "Volume";
		break;

		case 6:
			Shape_3D();
		break;

		case 7:
            cout << dis.console_message;
            Log.open("Log.txt", ios::app);
        	Log << "you selected 3d shapes but you exited it, didn't you like our software?\n";
			Log.close();
			getchar();
		break;

		default:
            Handle_Exception H_Exp;
			H_Exp.check_if_user_entered_string_or_invaild_number();
			Shape_3D();
        break;
	}

}

void Shape_3D::measurement_type_2(){
    Display dis;
    Parameter para;
	dis.measurement_type2_3D_text();
	cin >> Measurement_Type;

	switch(Measurement_Type){
		case 1:
			Measurement_Name = "Curved Surface Area";
			para.filter_3D_Shapes(Which_Shape, Measurement_Type);
		break;

		case 2:
			Measurement_Name = "Total Surface Area";
			para.filter_3D_Shapes(Which_Shape, Measurement_Type);
        break;

		case 3:
			Measurement_Name = "Volume";
			para.filter_3D_Shapes(Which_Shape, Measurement_Type);
		break;

		case 6:
			Shape_3D();
		break;

		case 7:
            cout << dis.console_message;
            Log.open("Log.txt", ios::app);
        	Log << "you choosed a shape but quitted it\n\n";
			Log.close();
			getchar();
		break;

		default:
            Handle_Exception H_Exp;
			H_Exp.check_if_user_entered_string_or_invaild_number();
			Shape_3D();
        break;
	}
}
