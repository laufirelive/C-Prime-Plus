// 编写一个函数。函数的 3 个参数是一个字符和两个整数。字符参数是需要输出的字符。第一个整数说明了在每行中该字符输出的个数，
// 而第二个整数指的是需要输出的行数。编写一个调用该函数的程序。

#include <stdio.h>

int printch(char ch, int len, int rows);

int main()
{
	printch('a', 6, 5);
	return 0;
} 

int printch(char ch, int len, int rows)
{
	if (len <= 0 || rows <= 0)
		return 0;
	
	while (rows--)
	{
		int i;
		for (i = 0; i < len; i++)
			putchar(ch);
		
		putchar('\n');
	}
	
	return 1;
}