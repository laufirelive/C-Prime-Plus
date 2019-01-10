// 编写并测试函数 larger_of()，其功能是将两个 double 类型变量的数值替换成它们中的较大值。
// 例如，larger_of(x, y) 会把 x 和 y 中的较大数值重新赋给 x 和 y 。

#include <stdio.h>

void larger_of(double *x, double *y);

int main()
{
	double a, b;
	
	a = 95; b = 23;
	printf("a = %.2lf\tb = %.2lf\n", a, b);
	larger_of(&a, &b);
	printf("a = %.2lf\tb = %.2lf\n", a, b);
	
	putchar('\n');
	
	a = 34; b = 1;
	printf("a = %.2lf\tb = %.2lf\n", a, b);
	larger_of(&a, &b);
	printf("a = %.2lf\tb = %.2lf\n", a, b);
	
	return 0;
} 

void larger_of(double *x, double *y)
{
	if (*x > *y)
		*x = *y;
	else
		*y = *x;
	
	return;
}