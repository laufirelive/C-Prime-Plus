// 编写一个函数，其功能是使输入字符串反序。在一个使用循环语句为这个函数提供输入的完整程序中测试。

#include <stdio.h>
#define LEN 1024

void str_down(char * source);

int main()
{
	char s[LEN];
	while (1)
	{
		printf("Source : ");
		scanf("%s", s);
		str_down(s);
		puts(s);
		if (*s == '#')
			break;
	}
	return 0;
} 

void str_down(char * source)
{
	int i, n;
	for (i = 0; source[i]; i++)
		;
	
	n = i;

	for (i = 0; i < n/2; i++)
	{
		char temp;
		temp 			= 	source[i];
		source[i] 		= 	source[n-i-1];
		source[n-i-1] 	= 	temp;
	}
}