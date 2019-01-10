// 编写一个能够产生下面输出的程序：

// For he's a jolly good fellow!
// For he's a jolly good fellow!
// For he's a jolly good fellow!
// Which nobody can deny!

// 程序除了 main() 函数之外，要使用两个用户定义函数：
// 一个用于把上面的夸奖信息输出一次；
// 另一个用于把最后一行输出一次。

#include <stdio.h>

void PrintALine();
void PrintBLine();

int main()
{
	PrintALine();
	PrintALine();
	PrintALine();
	PrintBLine();
	return 0;
} 

void PrintALine()
{
	printf("For he's a jolly good fellow!\n");
}

void PrintBLine()
{
	printf("Which nobody can deny!\n");
}