#include <stdio.h>
#include <stdlib.h>

int search_file(char ch, FILE *file);

int main(int argc, char *argv[])
{
	int i;
	FILE *file;
	
	if (argc < 2)
	{
		fprintf(stderr, "Error: Format.\n");
		exit(1);
	}
	else if (argc == 2)
	{
		file = stdin;
		printf("%c in %s : %d\n", *argv[1], "stdin", search_file(*argv[1], file));
		return 0;
	}
	
	for (i = 2; i < argc; i++)
	{
		if (!(file = fopen(argv[i], "r")))
		{
			i++;
			continue;
		}
		
		printf("%c in %s : %d\n", *argv[1], argv[i], search_file(*argv[1], file));
	}
	

	return 0;
}

int search_file(char target_ch, FILE *file)
{
	int count = 0;
	int temp_ch;
	while ((temp_ch = getc(file)) != EOF)
	{
		if (temp_ch == target_ch)
			count++;
	}
	return count;
}