#include "Include/Display.h"
#include "FileLog/file-log.h"

int main() {
    Display display;
    File_Log fil;
    fil.Show_Session_Opened();
    display.Welcome_Message();
    display.enter_dimension();
    fil.horizontal_line(98, "-");
	return 0;
}
