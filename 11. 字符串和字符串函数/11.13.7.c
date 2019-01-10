// 编写一个函数 string_in() ，它接受两个字符串指针参数。
// 如果第二个字符串被包含在第一个字符串中，函数就返回被包含的字符串开始的地址。
// 例如，string_in("hats", "at") 返回 hats 中 a 的地址，否则，函数返回空指针。
// 在一个使用循环语句为这个函数提供输入的完整程序中进行测试。

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