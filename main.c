#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>
#include "prompts.h"
// main.c, main function
int main() {
	struct passwd *pw = getpwuid(getuid());
	const char *homedir = pw->pw_dir;
	FILE *filepath;
	remove(*homedir + "/.zeckupdate/update.txt");
	filepath = fopen(*homedir + "/.zeckupdate/update.txt", "w");
	if (filepath == NULL) {
		//printf("File not found or cannot be written to\n");
		return 1;
	}
	/*
	else {
		printf("Success!\n");
		return 0;
	}
	*/
	printf(homedir, "%s");
	return 0;
}