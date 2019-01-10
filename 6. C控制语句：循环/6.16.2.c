// 使用嵌套循环产生下列图案：
// $
// $$
// $$$
// $$$$
// $$$$$

#include <stdio.h>

int main()
{
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i ; j++)
		{
			printf("$");
		}
		printf("\n");
	}
	
	return 0;
} 
