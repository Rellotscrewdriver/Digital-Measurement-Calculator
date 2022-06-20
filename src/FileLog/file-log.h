#pragma once
#include "../Include/declarations.h"

class File_Log {
public:
    std::ofstream fs;
    time_t now = time(0);
    tm *ltm = localtime(&now);

    void FileLog();
    void horizontal_line();
    void end_program_line();
    void current_time();
    string show_AM_PM();
    int show_twelve_hour_time();
    int show_zero_min();
    int show_zero_sec();
};
