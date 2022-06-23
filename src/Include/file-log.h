#pragma once
#include "../Include/declarations.h"

class File_Log {
public:
    std::ofstream fs;
    time_t now = time(0);
    tm *ltm = localtime(&now);

    void FileLog();
    void horizontal_line(int number_of_symbol, string symbol);
    void current_time();
    string show_AM_PM();
    void show_hour_time();
    void show_zero(int number_needed_zero);
};
