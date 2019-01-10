#include <stdio.h>
#include <stdlib.h>
#define LEN 41

int main(int argc, char *argv[])
{
	FILE *p_file;
	char file_name[LEN];
	long file_length;
	long index;
	
	int ch;
	
	fprintf(stdout, "type file name : ");
	fscanf(stdin, "%s", file_name);
	
	if (!(p_file = fopen(file_name, "r")))
	{
		fprintf(stderr, "fail on open file.\n");
		exit(1);
	}
	
	fseek(p_file, 0L, SEEK_END);
	file_length = ftell(p_file);
	
	fprintf(stdout, "where do you want to go ? \n");
	
	while (!fscanf(stdin, "%d", &index))
		getchar();
	
	if (index > file_length)
	{
		fprintf(stderr, "out of range.\n");
		exit(2);
	}
	
	rewind(p_file);
	fseek(p_file, index, SEEK_SET);
	
	while ((ch = getc(p_file)) != EOF && ch != '\n')
	{
		putc(ch, stdout);
	}
	putc('\n', stdout);
	
	if (fclose(p_file))
		fprintf(stderr, "Fail on close file");
	
	return 0;
}
