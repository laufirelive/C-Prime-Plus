#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LINELEN 1024

int main(int argc, char *argv[])
{
	FILE *targetfile;
	char *source_str;
	char *filename;
	char line[LINELEN];
	
	if (argc != 3)
	{
		fprintf(stderr, "Error: format.\n");
		exit(1);
	}
	
	source_str = argv[1];
	filename = argv[2];
	
	if (!(targetfile = fopen(filename, "r")))
	{
		fprintf(stderr, "Error: fail on open file.\n");
		exit(1);
	}
	
	
	while (fgets(line, LINELEN-1, targetfile))
	{
		if (strstr(line, source_str))
			fputs(line, stdout);
	}
	
	return 0;
}
