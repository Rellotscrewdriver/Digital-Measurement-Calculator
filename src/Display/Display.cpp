#include "../Include/Display.h"
#include "../Include/Handle_Exception.h"
#include "../Include/Shape_2D.h"
#include "../Include/Shape_3D.h"
#include "../Include/version.h"

void Display::horizontal_rule(char symbol, int NoofNumbers){
    for(int i = 1; i <= NoofNumbers; i++){
        cout << symbol;
    }
    cout << endl;
}

void Display::Welcome_Message(){
    cout << "+++++++++++++++Owner Contact Details+++++++++++++++++\n"
    << "Discord: https://discord.gg/33zXgmzWhm\n";
    horizontal_rule('-', 53);
    cout << "Hello There! :) \n"
    << "Welcome to the SMC "
    << version::FULLVERSION_STRING[0] << "." << version::FULLVERSION_STRING[1] << " " << version::STATUS
    << "\nReleased on " << version::RELEASE_DATE
    << "\nthis software can calculate 15 different types of shapes!\n"
    << "Ranging from their areas, curved surface area, volume and much more!\n"
    << "follow the instructions below to get started\n"
    << "as you need to feed three things: dimension, which shape and its measurement\n"
    << "and now it's parameters to get your accurate answer in decimal\n" << endl;
    horizontal_rule('-', 53);
}

bool Display::dimension_compare2D(string parameter){
    return parameter == "2d" || parameter == "2D";
}

bool Display::dimension_compare3D(string parameter){
    return parameter == "3d" || parameter == "3D";
}

bool Display::user_typed_exit(string parameter){
    return parameter == "exit" || parameter == "e";
}

void Display::enter_dimension(){
	cout << "Enter The Dimension: ";
	cin >> dimensional;
    select_dimension(dimensional);
}

void Display::select_dimension(string dimensional){
    if(dimension_compare2D(dimensional)){
        Shape_2D();
    } else if(dimension_compare3D(dimensional)){
        Shape_3D();
    } else if (user_typed_exit(dimensional)) {
		cout << console_message;
        Log.open("Log.txt", ios::app);
        Log << "you quitted it as soon as you opened your session\n";
		Log.close();
        getchar();
	} else {
        Handle_Exception  H_Exp;
        H_Exp.check_if_user_entered_string_or_invaild_number();
        enter_dimension();
	}
}
