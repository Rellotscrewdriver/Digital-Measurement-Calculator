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
    horizontal_rule('-' , 69);
    cout << color::white << "Hello and Welcome to Digital Measurement Calculator(DIC) :) \n"
    << "where you can find the measurement of shapes!\nIn order to get started:"                              
    << color::green << "\n- Type \"u\" or \"usage\" to see how this program works\n" << color::reset
    << "- Type \"2d\" or \"2D\" to calculate a 2d shape\n"
    << "- Type \"3d\" or \"3D\" to calculate a 3d shape\n"
    << color::red << "- Type \"e\" or \"exit\" to exit this program\n" << color::reset
    << "- Type \"c\" or \"credit\" or \"contributors\" to see the credits \n"
    << "- Type \"l\" or \"license\" to see the license \n"
    << "- Type \"d\" or \"contact details\" to see the links"
    << "- Type \"a\" or \"about\" to see the version info \n" << endl;
}

bool Display::dimension_compare2D(string parameter){
    return parameter == "2d" || parameter == "2D";
}

bool Display::dimension_compare3D(string parameter){
    return parameter == "3d" || parameter == "3D";
}

void Display::enter_dimension(){
	cout << color::magenta << "Enter The Dimension: " << color::reset;
	cin >> dimensional;
    select_dimension(dimensional);
}

void License_text(){
    std::ofstream license_log;
    license_log.open("LICENSE");
    license_log << "Digital Measurement Calculator(DIC)\n\n" 
                << "Copyright(c) 2022 Rellot's screwdriver\n\n" 
                << "This software is provided 'as-is', without any express or implied warranty.\n"
                << "In no event will the authors be held liable for any damages arising from the use of this software.\n\n"
                << "Permission is granted to anyone to use this software for any purpose,\n"
                << "including commercial applications, and to alter it or not and redistribute it freely,\n"
                << "subject to the following restrictions:\n\n"
                << "1. The origin of this software must not be misrepresented;\n"
                << "you must not claim that you wrote the original software.\n" 
                << "Altered source or binary versions must be plainly marked as such,\n" 
                << "and must not be misrepresented as being the original software.\n\n"
                << "2. Redistributions of source code must retain the above copyright\n" 
                << "notice, this list of conditions and the following disclaimer.\n\n"
                << "3. Redistributions in binary form must credit this repo in the credits section \n" 
                << "including a link to its original source code.\n\n" << endl;
    license_log.close();
}

void Display::select_dimension(string dimensional){
    if(dimension_compare2D(dimensional)){
        Shape_2D();
    } else if(dimension_compare3D(dimensional)){
        Shape_3D();
    } else if (dimensional == "exit" || dimensional == "e" || dimensional == "q") {

		cout << console_message;
        Log.open("Log.txt", ios::app);
        Log << "you quitted this session as soon as you opened\n";
		Log.close();
        getchar();

	} else if(dimensional == "c" || dimensional == "contributors" || dimensional == "credits"){

        cout << color::blue << "\nContributors:\n" << color::cyan << "1. Arsenic-ATG for helping me to add colors in portability in mind\n" << color::reset << endl;
        enter_dimension();

    } else if(dimensional == "a" || dimensional == "about"){

        cout << color::red << "\nDIC " << version::MAJOR_CHANGE << "." << version::MINOR_CHANGE << "." << version::PATCH << " " << version::STATUS
        << color::yellow << "\nRelease on " << version::RELEASE_DATE << color::reset << endl << endl;
        enter_dimension();   

    } else if(dimensional == "d" || dimensional == "contact_details"){

        cout << "\n+++++++++++++++Owner Contact Details+++++++++++++++++\n"
             << "Discord: " << color::blue << "https://discord.gg/33zXgmzWhm\n" << color::reset
             << "Itch.io: " << color::blue << "https://rellotscrewdriver.itch.io/\n" << color::reset << endl;
        enter_dimension();

    } else if(dimensional == "l" || dimensional == "license"){

        License_text();
        cout << "\nsee the LICENSE file for the details\n" << endl;
        enter_dimension();  

    } else if(dimensional == "u" || dimensional == "usage"){

        cout << color::white << "\nYou need to feed four things in the program: " << color::reset
        << "\n1. Dimension (2D shape or 3D shape)" 
        << "\n2. Shape (Circle, Rectangle, Cube, Cone, etc.)"
        << "\n3. Measurement (Surface Area, Perimeter)"
        << "\n4. Shape's respective Parameter (Length, Slant Height)" << endl;
        
        cout << "\nTo get your answer in two different forms: "
        << "\n1. Direct Output on the terminal with showing how it was done with a formula" 
        << "\n2. Log.txt so you won't have to type the same input multiple times\n" << endl;
        enter_dimension();    

    } else {

        Handle_Exception  H_Exp;
        H_Exp.check_if_user_entered_string_or_invaild_number();
        enter_dimension();

	}
}
