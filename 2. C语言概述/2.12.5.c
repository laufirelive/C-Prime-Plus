// 编写一个程序，创建一个名为 toes 的整数变量。
// 让程序把toes设置为 10 。
// 再让程序计算两个 toes 的和以及 toes 的平方。
// 程序应该输出所有的三个值，并分别标识它们。

#include <stdio.h>

int main()
{
	int toes;
	toes = 10;
	
	printf("toes = %d\n", toes);
	printf("toes + toes = %d\n", toes + toes);
	printf("toes^2 = %d\n", toes * toes);

	return 0;
} 
