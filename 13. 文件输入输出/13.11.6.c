#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40

int main(void)
{
	FILE *in, *out;
	int ch;
	char in_name[LEN];
	char out_name[LEN];
	int count = 0;
	
	fprintf(stdout, "Type File_name : ");
	while (!fscanf(stdin, "%s", in_name))
		getchar();
	
	if ((in = fopen(in_name, "r")) == NULL)
	{
		fprintf(stderr, "Fail on opening %s file.\n", in_name);
		exit(1);
	}
	
	strcpy(out_name, in_name);
	strcat(out_name, ".red");
	if ((out = fopen(out_name, "w")) == NULL)
	{
		fprintf(stderr, "Fail on create %s file.\n", out_name);
		exit(2);
	}
	while ((ch = getc(in)) != EOF)
	{
		if (count++ % 3 == 0)
			putc(ch, out);
	}
	
	if (!fclose(in) || !fclose(out))
		fprintf(stderr, "Error in closing files\n");
	
	return 0;
}
