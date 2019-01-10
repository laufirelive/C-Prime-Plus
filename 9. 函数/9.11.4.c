// 两数值的谐均值可以这样计算： 首先计算两数值的倒数取平均值，然后再取倒数。编写一个带有两个 double 参数的函数，计算这两个参数的谐均值。

#include <stdio.h>
#include <math.h>

double fun(double a, double b);

int main()
{
	printf("%.2lf\n", fun(99, 88));
	return 0;
} 

double fun(double a, double b)
{
	if (abs(a) < 1e-8 || abs(b) < 1e-8)
		return 0;
	return 1/((1/a + 1/b)/2);
}