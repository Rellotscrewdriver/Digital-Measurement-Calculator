#include "../Include/file-log.h"

void File_Log::FileLog(){
    //happens in file
    fs.open("Log.txt", ios::app);
    horizontal_line(54, "=");
    current_time();
    horizontal_line(54, "=");
    fs.close();
}

void File_Log::horizontal_line(int number_of_symbol, string symbol){
    for(int a = 1; a <= number_of_symbol; a++){
        fs << symbol;
    }
    fs << "\n";
}

void File_Log::current_time(){
    fs << "        Session Opened: ";
    //shows the current date
    show_zero(ltm->tm_mday);
    fs << "/";
    show_zero(1 + ltm->tm_mon);
    fs << "/" << 1900 + ltm->tm_year << " ";

    //shows the current time
    show_hour_time(); 
    fs << ":";
    show_zero(ltm->tm_min); 
    fs << ":";
    show_zero(ltm->tm_sec);
    fs << " " << show_AM_PM() << endl;
}

string File_Log::show_AM_PM(){
    if(ltm->tm_hour >= 13){
        return "PM"; 
    } else {
        return "AM";
    }
}

void File_Log::show_hour_time(){
    if(ltm->tm_hour >= 13){
        show_zero(ltm->tm_hour - 12);            
    } else {
        show_zero(ltm->tm_hour);             
    }
}

//This is best I could do without doing conversion which can take a lot of performance
void File_Log::show_zero(int number_needed_zero){
    if(number_needed_zero < 10){
        fs << "0" << number_needed_zero; 
    } else {
        fs << number_needed_zero;
    }
}
