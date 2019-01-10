// 设计并测试一个函数，其功能是搜索由函数由第一个参数指定的字符串，在其中查找由函数的第二个参数指定的字符的第一次出现的位置。
// 如果找到，返回指向这个字符的指针；如果没有找到，返回空字符（这种方式和 strchr() 函数的功能一样）。在一个使用循环语句为这
// 个函数提供输入的完整程序中测试。

#include <stdio.h>
#define LEN 1024
char * str_search(char * source, char * target);

int main()
{
	char s[LEN];
	char t[LEN];
	while (1)
	{
		printf("Source : ");
		scanf("%s", s);
		printf("Target : ");
		scanf("%s", t);
		puts(str_search(s, t));
		if (*s == '#')
			break;
	}
	return 0;
} 

char * str_search(char * source, char * target)
{
	int i;
	char * s;
	char * t;
	
	i = 0;
	while (*(source+i))
	{
		s = source + i;
		t = target;
		
		while (*t)
		{
			if (*t == *s)
			{
				t++;
				s++;
			}
			else
				break;
		}
		if (!(*t))
			return source + i;
		
		i++;
	}
	return NULL;
}