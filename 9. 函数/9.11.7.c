// 在第 6 章 “ C 控制语句： 循环” 的程序清单 6.20 中，函数 power() 的功能是返回一个 double 类型数的某个正整数次幂。
// 现在改进该函数，使其能正确第计算负幂。同时，用该函数实现 0 的任何次幂为 0 并且任何数值的 0 次幂都为 1 。
// 使用循环的方式编写该函数并在一个程序中测试它。

#include <stdio.h>
#include <math.h>

double power(double n, int p);

int main()
{
	printf("%.2lf\n", power(2, 3));
	printf("%.2lf\n", power(2, -3));
	printf("%.2lf\n", power(0, -3));
	printf("%.2lf\n", power(2, 0));
	return 0;
} 

double power(double n, int p)
{
	double pow = 1;
	int i;
	
	if (p == 0)
		return 1;
	if (abs(n) < 1e-8)
		return 0;
	
	for (i = 1; i<=abs(p); i++)
		pow *= n;
	
	if(p < 0)
		pow = 1/pow;
	
	return pow;
}
