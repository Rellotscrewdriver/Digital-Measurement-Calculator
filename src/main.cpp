#include "Include/Display.h"
#include "Include/file-log.h"

int main() {
    Display display;
    File_Log fil;
    fil.FileLog();
    display.Welcome_Message();
    display.enter_dimension();
    fil.horizontal_line(98, "-");
	return 0;
}
