#pragma once
#include "../Include/declarations.h"

class File_Log {
public:
    std::ofstream Log; 
    /////////////////////////////////////////////////
    /// \brief creates the Log.txt file which includes
    /// horizontal lines and shows the date
    /////////////////////////////////////////////////
    void Show_Session_Opened();

    /////////////////////////////////////////////////
    /// \brief this function is responsible horizontal lines
    ///
    /// \param numbers of symbol to be print 
    /// \param type of symbol to print
    /////////////////////////////////////////////////
    void horizontal_line(int number_of_symbol, string symbol);

private:
    time_t now = time(0);
    tm *ltm = localtime(&now);
    /////////////////////////////////////////////////
    /// \brief this function is responsible for 
    /// showing current time in a format
    /////////////////////////////////////////////////
    void show_current_time();

    /////////////////////////////////////////////////
    /// \brief shows AM or PM based on the time(hour)
    /////////////////////////////////////////////////
    string show_AM_or_PM();

    /////////////////////////////////////////////////
    /// \brief shows the hour time in 12-hour format
    /// by default, it is set to 24-hour format
    /////////////////////////////////////////////////
    void show_hour_time();

    /////////////////////////////////////////////////
    /// \brief time and date which needs prefix zero 
    /// by default, it doesn't show zero	
    ///
    /// \param type of time which needs prefix zero
    /////////////////////////////////////////////////
    void show_prefix_zero(int number_needed_zero);
};
