#include <stdio.h>
#include <stdlib.h>
#define X 20
#define Y 30
#define LEFTTOP 		1
#define RIGHTTOP 		2
#define MIDTOP			3
#define LEFTBOTTOM		4
#define RIGHTBOTTOM		5
#define MIDBOTTOM		6
#define LEFTMID 		7
#define RIGHTMID 		8
#define MID 			9

int orgin_data[X][Y];

void read_data(FILE *file);
void filtering_data();
void filter_it(int i, int j, int mode);
void write_data();

int main(int argc, char *argv[])
{

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
	
	read_data(orgin_file);
	filtering_data();
	write_data();
	
	return 0;
}

void read_data(FILE *file)
{
	int ch;
	for (int i = 0; i < X; i++)
		for (int j = 0; j < Y; j++)
		{
		AGAIN:
			ch = getc(file);
			switch (ch)
			{
				case EOF  : orgin_data[i][j] = 0; break;
				case '\n' : 
				case ' '  : goto AGAIN;
				default : orgin_data[i][j] = ch;
			}
		}
	
	return ;
}

void filtering_data()
{
	int i, j;	
	for (i = 0; i < X; i++)
		for (j = 0; j < Y; j++)
		{
			int mode;
			switch (i)
			{
				case 0 :			//Line 1
					switch (j)
					{
						case 0 :	mode = LEFTTOP;		break;
						case Y - 1:	mode = RIGHTTOP;	break;
						default :	mode = MIDTOP;		break;
					}
					break;
				case X-1 :			//last Line
					switch (j)
					{
						case 0 :	mode = LEFTBOTTOM; break;
						case Y - 1:	mode = RIGHTBOTTOM; break;
						default :   mode = MIDBOTTOM;	break;
					}
					break;
				default :			//mid Line
					switch (j)
					{
						case 0 :	mode = LEFTMID; break;
						case Y - 1: mode = RIGHTMID; break;
						default :   mode = MID; break;
					}
					break;
			}
			filter_it(i, j, mode);
		}
}

void filter_it(int i, int j, int mode)
{
	switch (mode)
	{
		case LEFTTOP : 
			if (orgin_data[i][j] - orgin_data[i][j+1] > 1
			&&  orgin_data[i][j] - orgin_data[i+1][j] > 1)
				orgin_data[i][j] = (orgin_data[i][j+1] + orgin_data[i+1][j]) / 2;
			break;
		case RIGHTTOP :
			if (orgin_data[i][j] - orgin_data[i][j-1] > 1
			&&  orgin_data[i][j] - orgin_data[i+1][j] > 1)
				orgin_data[i][j] = (orgin_data[i][j-1] + orgin_data[i+1][j]) / 2;
			break;
		case MIDTOP : 
			if (orgin_data[i][j] - orgin_data[i][j+1] > 1
			&&  orgin_data[i][j] - orgin_data[i+1][j] > 1
			&&  orgin_data[i][j] - orgin_data[i][j-1] > 1)
				orgin_data[i][j] = (orgin_data[i][j-1] + orgin_data[i+1][j] + orgin_data[i][j-1]) / 3;
			break;
		case LEFTBOTTOM:
			if (orgin_data[i][j] - orgin_data[i][j+1] > 1
			&&  orgin_data[i][j] - orgin_data[i-1][j] > 1)
				orgin_data[i][j] = (orgin_data[i][j+1] + orgin_data[i-1][j]) / 2;
			break;
		case RIGHTBOTTOM:
			if (orgin_data[i][j] - orgin_data[i][j-1] > 1
			&&  orgin_data[i][j] - orgin_data[i-1][j] > 1)
				orgin_data[i][j] = (orgin_data[i][j-1] + orgin_data[i-1][j]) / 2;
			break;
		case MIDBOTTOM:
			if (orgin_data[i][j] - orgin_data[i][j+1] > 1
			&&  orgin_data[i][j] - orgin_data[i-1][j] > 1
			&&  orgin_data[i][j] - orgin_data[i][j-1] > 1)
				orgin_data[i][j] = (orgin_data[i][j-1] + orgin_data[i-1][j] + orgin_data[i][j-1]) / 3;
			break;
		case LEFTMID:
			if (orgin_data[i][j] - orgin_data[i][j+1] > 1
			&&  orgin_data[i][j] - orgin_data[i+1][j] > 1
			&&  orgin_data[i][j] - orgin_data[i-1][j] > 1)
				orgin_data[i][j] = (orgin_data[i][j+1] + orgin_data[i+1][j] + orgin_data[i-1][j]) / 3;
			break;
		case RIGHTMID:
			if (orgin_data[i][j] - orgin_data[i][j-1] > 1
			&&  orgin_data[i][j] - orgin_data[i+1][j] > 1
			&&  orgin_data[i][j] - orgin_data[i-1][j] > 1)
				orgin_data[i][j] = (orgin_data[i][j-1] + orgin_data[i+1][j] + orgin_data[i-1][j]) / 3;
			break;
		case MID:
			if (orgin_data[i][j] - orgin_data[i][j-1] > 1
			&&  orgin_data[i][j] - orgin_data[i][j+1] > 1
			&&  orgin_data[i][j] - orgin_data[i+1][j] > 1
			&&  orgin_data[i][j] - orgin_data[i-1][j] > 1)
				orgin_data[i][j] = (orgin_data[i][j-1] + orgin_data[i][j+1] + orgin_data[i+1][j] + orgin_data[i-1][j]) / 4;
			break;
	}
}


void write_data()
{
	char image_data[X][Y+1];
	int i, j;
	
	for (i = 0; i < X; i++)
	{
		for (j = 0; j < Y; j++)
		{
			char temp;
			switch(orgin_data[i][j])
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
	
	for (i = 0; i < X; i++)
		puts(image_data[i]);
	
	return ;
}
