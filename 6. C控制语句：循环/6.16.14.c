// 编写一个程序读入一行输入，然后反向打印该行。您可以把输入存储在一个 char 数组中;
// 假定该行不超过 255 个字符。回忆一下，您可以使用具有 %c 说明符的 scanf() 从输入中一次读入一个字符，
// 而且当您按下回车键时会产生换行字符(\n)。

#include <stdio.h>

int main()
{
	int i;
	char line[256];
	
	for (i = 0; i < 255; i++)
	{
		scanf("%c", line + i);
		if (line[i] == '\n')
			break;
	}
	
	for (i--; i >= 0; i--)
	{
		printf("%c", line[i]);
	}
	
	printf("\n");
} 
