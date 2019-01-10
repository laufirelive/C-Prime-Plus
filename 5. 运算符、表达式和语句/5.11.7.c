// 编写一个程序，该程序要求输入一个float型数并打印该数的立方值。
// 使用您自己设计的函数来计算该值的立方并且将它的立方打印出来。
// main() 程序把输入的值传递给该函数。

#include <stdio.h>
void printCubic(float x);
int main()
{
	float aFloat;
	scanf("%f", &aFloat);
	printCubic(aFloat);
	
	return 0;
} 

void printCubic(float x)
{
	printf("%.4f", x*x*x);
}
