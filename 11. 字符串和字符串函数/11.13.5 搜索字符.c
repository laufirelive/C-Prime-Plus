// 编写一个函数 is_within() 。它接受两个参数，一个是字符，另一个是字符串指针。其功能是如果字符在字符串中，就返回一个非 0 值（真）；
// 如果字符不在字符串中，就返回 0 值（假）。在一个使用循环语句为这个函数提供输入的完整程序中进行测试。

#include <stdio.h>
#define LEN 31
int is_within(char * source, char target);

int main()
{
	char a[LEN];
	char b;
	while (1)
	{
		printf("source : ");
		scanf("%s", a);
		while (getchar() != '\n');
		printf("target : ");
		scanf("%c", &b);
		while (getchar() != '\n');
		printf("%d\n", is_within(a, b));
	}
	return 0;
} 


int is_within(char * source, char target)
{
	int i = 1;
	char * s;
	
	s = source;
	while (*s)
	{
		if (*s == target)
			return i;
		
		i++; s++;
	}
	return 0;
}