// 设计函数 min(x, y)， 返回两个 double 数值中较小的数值，同时用一个简单的驱动程序测试该函数。

#include <stdio.h>

double min(double x, double y);

int main()
{
	double x, y;
	x = 64.3; y = 23.1;
	printf("%.2lf and %.2lf , %.2lf is smaller.\n", x, y, min(x, y));
	x = 21; y = 92.2;
	printf("%.2lf and %.2lf , %.2lf is smaller.\n", x, y, min(x, y));
	return 0;
} 

double min(double x, double y)
{
	if (x < y)
		return x;
	else
		return y;
}