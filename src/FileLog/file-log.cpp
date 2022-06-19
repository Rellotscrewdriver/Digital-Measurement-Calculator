#include "file-log.h"

//TODO: add a current date instead of "Logged Time Today"
void File_Log::FileLog(){
    //happens in file
    fs.open("Log.txt", ios::app);
    horizontal_line();
    fs << "                Logged Time Today" << endl;
    horizontal_line();
    fs.close();
}

void File_Log::horizontal_line(){
    for(int a = 1; a <= 53; a++){
        fs << "=";
    }
    fs << "\n";
}

void File_Log::end_program_line(){
    fs.open("Log.txt", ios::app);
    for(int a = 1; a <= 98; a++){
        fs << "-";
    }
    fs << "\n";   
    fs.close();   
}