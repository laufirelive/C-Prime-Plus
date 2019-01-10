// 编写一个程序把 8 个整数读入一个数组中，然后以相反的顺序打印它们

#include <stdio.h>


int main()
{
	int i;
	int a[8];
	
	for (i = 0; i < 8; i++)
		scanf("%d", a + i);
	for (i = 7; i >= 0; i--)
		printf("%d\t", a[i]);
	
	return 0;
} 
