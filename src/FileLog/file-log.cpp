#include "../Include/file-log.h"

void File_Log::Show_Session_Opened(){
    //happens in Log.txt file
    Log.open("Log.txt", ios::app);
    horizontal_line(54, "=");
    show_current_time(); 
    horizontal_line(54, "=");
    Log << "in case you missed it:\n\n";
    Log.close();
}

void File_Log::horizontal_line(int number_of_symbol, string symbol){
    std::ofstream horizontal_line_in_log;
    horizontal_line_in_log.open("Log.txt", ios::app);
    
    for(int a = 1; a <= number_of_symbol; a++){
        horizontal_line_in_log << symbol;
    }
    
    horizontal_line_in_log << "\n";
    horizontal_line_in_log.close();
}

void File_Log::show_current_time(){
    Log << "        Session Opened: ";
    //shows the current date
    show_prefix_zero(ltm->tm_mday);
    Log << "/";
    show_prefix_zero(1 + ltm->tm_mon);
    Log << "/" << 1900 + ltm->tm_year << " ";

    //shows the current time
    show_hour_time(); 
    Log << ":";
    show_prefix_zero(ltm->tm_min); 
    Log << ":";
    show_prefix_zero(ltm->tm_sec);
    Log << " " << show_AM_or_PM() << endl;
}

string File_Log::show_AM_or_PM(){
    if(ltm->tm_hour >= 13){
        return "PM"; 
    } else {
        return "AM";
    }
}

void File_Log::show_hour_time(){
    if(ltm->tm_hour >= 13){
        show_prefix_zero(ltm->tm_hour - 12);            
    } else {
        show_prefix_zero(ltm->tm_hour);             
    }
}

//This is best I could do without doing conversion which can take a lot of performance
void File_Log::show_prefix_zero(int number_needed_zero){
    if(number_needed_zero < 10){
        Log << "0" << number_needed_zero; 
    } else {
        Log << number_needed_zero;
    }
}
