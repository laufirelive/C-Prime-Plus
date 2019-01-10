// 修改并测试练习 1 中的函数，使得可以在 n 个字符后，或第一个空格、制表符、换行符后停止读取输入，由上述情况中最先被满足的那个终止输入（不能用 scanf() 函数）。
#include <stdio.h>
#define LEN 31

void input_string(char target[], int len);

int main()
{
	char aString[LEN];
	input_string(aString, LEN);
	fputs(aString, stdout);
	return 0;
} 

void input_string(char target[], int len)
{
	int i;
	fgets(target, len, stdin);
	for (i = 0; i < len; i++)
	{
		switch (target[i])
		{
			case ' '	:
			case '\t'	:
			case '\n'	: 
				target[i] = '\0'; i = len; break;
		}
	}
}

