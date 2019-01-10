// 编写一个程序打印一个表，表的每一行都给出一个整数、它的平方以及它的立方。
// 要求用户输入上限与下限。

#include <stdio.h>

int main()
{
	int i, min, max;
	printf("min and max : ");
	scanf("%d %d", &min, &max);
	for (i = min; i <= max; i++)
	{
		printf("%d\t%d\t%d\n", i, i*i, i*i*i);
	}
	
	return 0;
} 
