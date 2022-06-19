#include "Include/Display.h"
#include "FileLog/file-log.h"

int main() {
    Display display;
    File_Log fil;
    fil.FileLog();
    display.Welcome_Message();
    display.enter_dimension();
    fil.end_program_line();
	return 0;
}
