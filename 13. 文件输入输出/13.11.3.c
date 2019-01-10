//编写一个文件复制程序。提示用户输入源文件名和输出文件名。在向输出文件写入时，程序应当使用 ctype.h 中定义的 toupper（） 函数将所有的文本转换成大写。使用标准 I/O 和文本模式。

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define LEN 41

int main(void)
{
	FILE *file_source, *file_target;
	int ch;
	char name_source[LEN];
	char name_target[LEN];
	
	printf("Source Filename : ");
	while (!scanf("%s", name_source));
	printf("Target Filename : ");
	while (!scanf("%s", name_target));
	
	if (!(file_source = fopen(name_source, "r")) || !(file_target = fopen(name_target, "w")))
	{
		fprintf(stderr, "error, fail on open the files");
		exit(2);
	}

	while ((ch = getc(file_source)) != EOF)
	{
		if (isalpha(ch))
			ch = toupper(ch);
		putc(ch, file_target);
	}
	
	fclose(file_source);
	fclose(file_target);
	
	return 0;
}
