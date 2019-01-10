// 使用递归函数重做练习7

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
	if (p == 0)
		return 1;
	if (n < 1e-8)
		return 0;
	
	if (p == 1)
		return n;
	if (p > 0)
		return n * power(n, abs(p) - 1);
	else 
		return 1 / (n * power(n, abs(p) - 1));
}
