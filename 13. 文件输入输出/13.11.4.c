//编写一段程序，依次在屏幕上显示命令行中列出的所有文件。使用 argc 控制循环

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *file_source;
	int ch;
	
	if (argc < 2)
	{
		fprintf(stderr, "error. format : %s [target_file] ... [target_file]", argv[0]);
		exit(1);
	}
	
	
	for (int i = 1; i < argc; i++)
	{
		if (file_source = fopen(argv[i], "r"))
		{
			printf("File %d :\n\n", i);
			while ((ch = getc(file_source)) != EOF)
			{
				putc(ch, stdout);
			}
		}
		else
		{
			fprintf(stderr, "error, fail on open the file : %s\n", argv[i]);
		}
	}
	
	fclose(file_source);
	
	return 0;
}
