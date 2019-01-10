#include <stdio.h>
#include <stdlib.h>

void read_data(FILE *file, int x, int y, int arr[x][y]);
void write_data(int x, int y, int arr[x][y]);

int main(int argc, char *argv[])
{
	int orgin_data[20][30];
	FILE *orgin_file;
	
	if (argc != 2)
	{
		fprintf(stderr, "Error: Format.\n");
		exit(1);
	}
	
	if (!(orgin_file = fopen(argv[1], "r")))
	{
		fprintf(stderr, "Error: Fail on open fail.");
		exit(2);
	}
	
	read_data(orgin_file, 20, 30, orgin_data);
	write_data(20, 30, orgin_data);
	
	return 0;
}

void read_data(FILE *file, int x, int y, int arr[x][y])
{
	int ch;
	for (int i = 0; i < x; i++)
		for (int j = 0; j < y; j++)
		{
		AGAIN:
			ch = getc(file);
			switch (ch)
			{
				case EOF  : arr[i][j] = 0; break;
				case '\n' : 
				case ' '  : goto AGAIN;
				default : arr[i][j] = ch;
			}
		}
	
	return ;
}

void write_data(int x, int y, int arr[x][y])
{
	char image_data[20][31];
	int i, j;
	
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			char temp;
			switch(arr[i][j])
			{
				case '0' : temp = ' '; break;
				case '1' : temp = '.'; break;
				case '2' : temp = '\''; break;
				case '3' : temp = ':'; break;
				case '4' : temp = '~'; break;
				case '5' : temp = '*'; break;
				case '6' : temp = '='; break;
				case '7' : temp = '$'; break;
				case '8' : temp = '%'; break;
				case '9' : temp = '#'; break;
			}
			image_data[i][j] = temp;
		}
		image_data[i][j] = '\0';
	}
	
	for (i = 0; i < x; i++)
		puts(image_data[i]);
	
	return ;
}
