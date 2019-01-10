// 编写产生 1000 个 1 到 10 范围内的随机数程序。不必保存或打印数字，仅打印每个数被产生了多少次。
// 让程序对 10 个不同的种子值进行计算。数字出现的次数相同吗？可以使用本章的函数或 ANSI C 中的函数 rand() 和 srand() ，
// 它们与我们的函数具有相同的形式。这是一个测试特定随机数发生器的随机性方法。

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LEN 1000

int main(void)
{
	const int max = 10;
	const int min = 1;
	
	int count_random[10] = {0};
	
	for (int i = 0; i < 10; i++)
	printf("%-10d", i+1);
	
	for (int i = 0; i < 10; i++)
	{
		for (int i = 0; i < LEN; i++)
			count_random[rand() % max + min - 1]++;
		
		putchar('\n');
		for (int i = 0; i < 10; i++)
			printf("%-10d", count_random[i]);
		

		
		srand(i);
	}
	

	
	return 0;
}
