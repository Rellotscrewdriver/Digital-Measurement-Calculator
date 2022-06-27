#include "Include/Display.h"
#include "Include/version.h"
#include "FileLog/file-log.h"

int main() {
    Display display;
    display.Welcome_Message();
    display.enter_dimension();
    File_Log sdf;
    sdf.FileLog();
	return 0;
}
