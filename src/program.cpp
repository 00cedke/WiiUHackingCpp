#include "common.h"
#include "program.h"

int MainThread(int argc, void* argv) {
	int title_id = OSGetTitleID();
	if(title_id != 0x00050000101d7500) // Minecraft EUR Title ID
	{
		log_printf("Error: can't starting the game with codes.\n");
		return 0;
	}

	// -- Your codes here --

	return 0;
}
