// 编写一个程序。该程序读取输入直到 # 字符。使程序打印每个输入的字符以及它用的十进制ASCII码。
// 每行打印 8 个字符/编码对。建议：利用字符计数和模运算符（%）在每8个循环周期时打印一个换行符。


#include <stdio.h>
#define MAXLEN 1024

int main()
{
	int i, len;
	char c[MAXLEN];
	
	i = 0;
	
	while (i < MAXLEN && scanf("%c", c + i) && c[i] != '#') i++;
	
	len = i;
	
	for (i = 0; i < len; )
	{
		switch (c[i])
		{
			case '\n':
				printf("\\n : %3d ", c[i]); break;
			case '\t':
				printf("\\t : %3d ", c[i]); break;
			default :
				printf("%2c : %3d ", c[i], c[i]); break;
		}	
		if (0 == ++i % 8)
			printf("\n");
	}
	
	if (i % 8)
		printf("\n");
	
	return 0;
} 
