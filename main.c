#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include "prompts.h"
// main.c, main function
int main() {
	const char *homedir = getenv("HOME");
	FILE *filepath;
	filepath = fopen((int) *homedir + "/.zeckupdate/update.txt", "w");
	if (filepath == NULL) {
		perror("");
		return 1;
	}
	return 0;
}