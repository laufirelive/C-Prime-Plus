// 编写一个程序，其功能是读取输入，直到遇到文件尾，并把文件显示出来。要求程序可以识别并执行下面的参数。

// ---------------------------------------
		// -p		| 按照原样显示输入
// ---------------------------------------
		// -u		| 把输入全部转换为大写
// ---------------------------------------
		// -l		| 把输出全部转换为大写
// ---------------------------------------

#include <stdio.h>
#include <ctype.h>
#define MAXLEN 1024

int main(int argc, char *argv[])
{
	int i;
	char c[MAXLEN];
	
	if (argc != 2)
	{
		printf("参数错误！ -p -u -l\n");
		return 1;
	}
	
	if (*(argv[1]++) != '-')
	{
		printf("参数错误！ -p -u -l\n");
		return 1;
	}
	
	switch (*argv[1])
	{
		case 'p' :
				while (i < MAXLEN && (c[i] = getchar()) && c[i] != EOF) i++;
				fputs(c, stdout);
			break;
		case 'u' :
				while (i < MAXLEN && (c[i] = getchar()) && c[i] != EOF) i++;
				for (i = 0; c[i]; i++)
				{
					if (isalpha(c[i]))
						putchar(toupper(c[i]));
					else
						putchar(c[i]);
				}
			break;
		case 'l' :
				while (i < MAXLEN && (c[i] = getchar()) && c[i] != EOF) i++;
				for (i = 0; c[i]; i++)
				{
					if (isalpha(c[i]))
						putchar(tolower(c[i]));
					else
						putchar(c[i]);
				}
			break;
		default :
			printf("参数错误！ -p -u -l\n");
			return 1;
	}
	
	return 0;
}
