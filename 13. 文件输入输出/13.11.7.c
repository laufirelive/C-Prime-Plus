#include <stdio.h>
#include <stdlib.h>
#define LEN 41

int main(int argc, char *argv[])
{
	int ch1, ch2;
	FILE *file[2];
	if (argc != 3)
	{
		fprintf(stderr, "Error: Format.\n");
		exit(1);
	}
	
	if (!(file[0] = fopen(argv[1], "r")) || !(file[1] = fopen(argv[2], "r")))
	{
		fprintf(stderr, "Error: Fail on open file.\n");
		exit(2);
	}
	
	ch1 = getc(file[0]);
	ch2 = getc(file[1]);

	while (ch1 != EOF || ch2 != EOF)
	{
		while (ch1 != EOF)
		{
			ch1 = getc(file[0]);
			if (ch1 == '\n' || ch1 == EOF)
				break;
			putc(ch1, stdout);
		}
		while (ch2 != EOF)
		{
			ch2 = getc(file[1]);
			if (ch2 == '\n' || ch2 == EOF)
				break;
			putc(ch2, stdout);
		}
		putc('\n', stdout);
	}
	return 0;
}


