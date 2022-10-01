#include <stdio.h>
#include <unistd.h>
#include <string.h>
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
	printf("%s\n", homedir);
	if (filepath == NULL) {
		perror("");
		return 1;
	}
	/*
	else {
		printf("Success!\n");
		return 0;
	}
	*/
	return 0;
}