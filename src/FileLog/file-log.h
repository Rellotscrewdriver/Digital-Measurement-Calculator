#pragma once
#include "../Include/declarations.h"

class File_Log {
public:
    std::ofstream fs;

    void FileLog();
    void horizontal_line();
    void end_program_line();
};