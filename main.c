#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include "prompts.h"
int main() {
	const char *homedir = getenv("HOME");
	char dir[200]; char dirstr[23] = "/.zeckupdate/update.txt";
	strcpy(dir, homedir); strcat(dir, dirstr);
	FILE *filepath;
	filepath = fopen(dir, "w");
	if(filepath == NULL) {
		perror("");
		return 1;
	}
	for(int i=0; i<13; i++) {
		printf("%s",prompts[i]);
		if(fgets(inparr[i],sizeof inparr[i],stdin) == NULL) {
			printf("Error fetching...\n");
			return 1;
		}
		fprintf(filepath, "%s%s\n", prompts[i], inparr[i]);	
	}
	return 0;
}
