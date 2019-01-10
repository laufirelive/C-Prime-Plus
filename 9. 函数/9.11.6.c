// 编写一个程序，使其从标准输入读取字符，直到遇到文件结尾。对于每个字符，程序需要检查并报告该字符是否是一个字符。
// 如果是的话，程序还应该报告该字母再字母表中的数值位置。例如，c 和 C 的字母位置都是 3 。
// 可以实现这样一个函数： 接受一个字符参数，如果该字符为字母则返回该字母的数值位置，否则返回 -1 。

#include <stdio.h>
#define MAXLEN 1024
int isAlpha(char ch);

int main()
{
	int i, len;
	int c[MAXLEN];
	
	i = 0;
	
	while (i < MAXLEN && (c[i] = getchar()) && c[i] != EOF) i++;
	
	len = i;
	
	for (i = 0; i < len; )
	{
		int temp;
		if ((temp = isAlpha(c[i])) != -1)
			printf("%c : %d ", c[i], temp);
		if (0 == ++i % 10)
			printf("\n");
	}
	
	if (i % 8)
		printf("\n");
	return 0;
} 

int isAlpha(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return ch - 64;
	if (ch >= 'a' && ch <= 'z')
		return ch - 96;
	return -1;
}