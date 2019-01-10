// 使用嵌套循环产生下列图案：	
// F
// FE
// FED
// FEDC
// FEDBC
// FEDBCA

#include <stdio.h>

int main()
{
	int i, j;	
	for (i = 1; i <= 6; i++)
	{
		for (j = 0; j < i ; j++)
		{
			printf("%c", 'F' - j);
		}
		printf("\n");
	}
	
	return 0;
} 
