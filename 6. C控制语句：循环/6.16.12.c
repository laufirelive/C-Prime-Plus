// 编写一个程序，创建一个 8 个元素的 int 数组，并且把元素分别设置为 2 的前 8 次幂，然后打印它们的值。
// 使用 for 循环来设置值； 为了变化，使用 do while 循环来显示这些值。

#include <stdio.h>
#define LEN 8

int main()
{
	int a[LEN];
	int i, j;
	
	for (i = 0; i < LEN; i++)
	{
		a[i] = 2;
		for (j = 0; j < i; j++)
			a[i] *= 2;
	}
	
	i = 0;
	do
	{
		printf("%d : %d\n", i+1, a[i]); 
	} while (++i < 8);
} 
