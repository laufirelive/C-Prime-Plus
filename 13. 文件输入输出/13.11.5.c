#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 1024

void append(FILE *source, FILE *dest);

int main(int argc, char *argv[])
{
	FILE *File_append, *File_source;
	int files = 0;
	
	if (argc < 3)
	{
		fprintf(stderr, "Error : format\n");
		exit(1);
	}
		
	
	if ((File_append = fopen(argv[1], "a")) == NULL)
	{
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(2);
	}
	if (setvbuf(File_append, NULL, _IOFBF, BUFSIZE) != 0)
	{
		fputs("Can't create output buffer\n", stderr);
		exit(3);
	}
	
	int i;
	for (i = 2; i < argc; i++)
	{
		if (strcmp(argv[1], argv[i]) == 0)
			fputs("Can't append file to itself.", stderr);
		else if ((File_source = fopen(argv[i], "r")) == NULL)
			fprintf(stderr, "Can't open %s\n", argv[i]);
		else
		{
			if (setvbuf(File_source, NULL, _IOFBF, BUFSIZE) != 0)
			{
				fputs("Can't create input buffer\n", stderr);
				continue;
			}
			append(File_source, File_append);
			if (ferror(File_source) != 0)
				fprintf(stderr, "Error in reading file %s.\n", argv[i]);
			if (ferror(File_append) != 0)
				fprintf(stderr, "Error in writing file %s.\n", argv[1]);
			fclose(File_source);
			files++;
			printf("File %s appended.\n", argv[i]);
		}
	}
	printf("Done.");
	fclose(File_append);
	return 0;
}

void append(FILE *source, FILE *dest)
{
	size_t count_bytes;
	static char temp[BUFSIZE];
	
	while ((count_bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
		fwrite(temp, sizeof(char), count_bytes, dest);
	
	return;
}
