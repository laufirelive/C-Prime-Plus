//编写一个文件复制程序。程序需要从命令行获得源文件名和目标文件名。尽可能使用标准 I/O 和二进制模式。

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *file_source, *file_target;
	int ch;
	
	if (argc != 3)
	{
		fprintf(stderr, "error. format : %s [source_file] [target_file]", argv[0]);
		exit(1);
	}
	
	if (!(file_source = fopen(argv[1], "rb")) || !(file_target = fopen(argv[2], "wb")))
	{
		fprintf(stderr, "error, fail on open the files");
		exit(2);
	}

	while ((ch = getc(file_source)) != EOF)
	{
		putc(ch, file_target);
	}
	
	fclose(file_source);
	fclose(file_target);
	
	return 0;
}
