#include "file-log.h"

void File_Log::FileLog(){
    //happens in file
    fs.open("Log.txt", ios::app);
    horizontal_line();
    current_time();
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

void File_Log::current_time(){
    fs << "Session Opened: ";
    fs << ltm->tm_mday << "/" << 1 + ltm->tm_mon << "/" << 1900 + ltm->tm_year;
    fs << " " << show_twelve_hour_time() << ":";
    fs << show_zero_min() << ":";
    fs << show_zero_sec();
    fs << " " << show_AM_PM() << endl;
}

string File_Log::show_AM_PM(){
    if(ltm->tm_hour >= 13){
        return "PM"; 
    } else {
        return "AM";
    }
}

int File_Log::show_twelve_hour_time(){
    if(ltm->tm_hour >= 13){
        return ltm->tm_hour - 12; 
    } else {
        return ltm->tm_hour;
    }
}

//TODO: find a way to show zero when the time & date is less than 10 like 09, 01
int File_Log::show_zero_min(){
    if(ltm->tm_min < 10){
        return 0 + ltm->tm_min; 
    } else {
        return ltm->tm_min;
    }
}

int File_Log::show_zero_sec(){
    if(ltm->tm_sec < 10){
        return ltm->tm_sec; 
    } else {
        return ltm->tm_sec;
    }
}