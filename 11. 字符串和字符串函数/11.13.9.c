// 编写一个函数。其参数为一个字符串，函数删除字符串中的空格。在一个可以循环读取的程序中进行测试，直到用户输入空行。
// 对于任何输入字符串，函数都应该适用并显示结果。

#include <stdio.h>
#define LEN 1024

void str_space_clear(char * source);

int main()
{
	char s[LEN];
	while (1)
	{
		printf("Input : ");
		gets(s);
		str_space_clear(s);
		puts(s);
	}
	return 0;
} 

void str_space_clear(char * source)
{
	int i, n;
	for (i = 0, n = 0; source[i]; i++)
	{
		source[i - n] = source[i];
		if (source[i] == ' ')
			n++;
	}
	
	for (i = 0; source[i]; i++)
		;
	source[i-n] = '\0';
}