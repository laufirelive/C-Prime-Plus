// 编写一个程序，把输入作为字符流读取，直到遇到 EOF。令其报告输入中的大写字符个数和小写字母个数。
// 假设小写字母的数值是连续的，大写字母也是如此。或者你可以用ctype.h库中的合适的函数来区分大小写。

#include <stdio.h>
#define MAXLEN 1024

int main()
{
	int i, len;
	int c[MAXLEN];
	
	int upper = 0;
	int lower = 0;
	
	i = 0;
	while (i < MAXLEN && (c[i] = getchar()) && c[i] != EOF) i++;
	
	len = i;
	for (i = 0; i < len; i++)
	{
		if (c[i] >= 'A' && c[i] <= 'Z')
			upper++;
		if (c[i] >= 'a' && c[i] <= 'z')
			lower++;
	}
	
	printf("大写字母：%d\n小写字母：%d\n", upper, lower);
} 
