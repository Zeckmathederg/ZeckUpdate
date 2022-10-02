#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include "prompts.h"
// main.c, main function
int main() {
	const char *homedir = getenv("HOME");
	char dir[200]; char dirstr[35] = "/.zeckupdate/update.txt";
	strcpy(dir, homedir); strcat(dir, dirstr);
	printf("%s\n",dir);
	FILE *filepath;
	filepath = fopen(dir, "w");
	if (filepath == NULL) {
		perror("");
		return 1;
	}
	return 0;
}
