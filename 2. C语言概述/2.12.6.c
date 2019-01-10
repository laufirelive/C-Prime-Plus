// 编写一个能够产生下列输出的程序：

// Smile!Smile!Smile!
// Smile!Smile!
// Smile!

// 在程序中定义一个能显示字符串 Smile! 一次的函数，并在需要时使用该函数。

#include <stdio.h>

void PrintSmile();

int main()
{
	PrintSmile();
	PrintSmile();
	PrintSmile();
	printf("\n");
	PrintSmile();
	PrintSmile();
	printf("\n");
	PrintSmile();
	printf("\n");
	return 0;
} 

void PrintSmile()
{
	printf("Smile!");
}