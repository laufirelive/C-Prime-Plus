#include <stdio.h>
#include <stdlib.h>
#define LEN 41

int main(void)
{
	int ch;
	char file_name[LEN];
	long count = 0;
	
	FILE *p_file;	
	if (scanf("%s", file_name) && (p_file = fopen(file_name, "r")) == NULL)
	{
		printf("Can't open %s \n", file_name);
		exit(1);
	}
	
	while ((ch = getc(p_file)) != EOF)
	{
		putc(ch, stdout);
		count++;
	}	

	fclose(p_file);
	printf("File %s has %ld characters\n", file_name, count);

	return 0;
}
