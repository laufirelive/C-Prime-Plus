// 编写一个程序，把输入作为字符流读取，直到遇到 EOF。令该程序打印每个输入字符以及 ASCII 编码的十进制值。
// 注意在 ASCII 序列中空格字符前面的字符是非打印字符，要特殊处理这些字符。如果非打印字符是换行符或制表符，
// 则分别打印 \n 或 \t。否则，使用控制字符符号。例如，ASCII 的 1 是 Ctrl + A，可以显示为^A。注意 A 的 ASCII
// 的值是 Ctrl + A 的值加 64 。对其他非打印字符也保持相似的关系。除去每次遇到一个换行符时就开始一个新行之外，
// 每次打印 10 对值。

#include <stdio.h>
#define MAXLEN 1024

int main()
{
	int i, len;
	int c[MAXLEN];
	
	i = 0;
	
	while (i < MAXLEN && (c[i] = getchar()) && c[i] != EOF) i++;
	
	len = i;
	
	for (i = 0; i < len; )
	{
		switch (c[i])
		{
			case '\n':
				printf("\\n : %4d ", c[i]); break;
			case '\t':
				printf("\\t : %4d ", c[i]); break;
			default :
				printf("%2c : %4d ", c[i], c[i]); break;
		}	
		if (0 == ++i % 10)
			printf("\n");
	}
	
	if (i % 8)
		printf("\n");
} 
