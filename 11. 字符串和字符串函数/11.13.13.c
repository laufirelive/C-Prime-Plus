// 编写一个计算乘幂的基于命令行的程序。第一个命令行参数为 double 类型数，作为幂的底数；第二个参数为整数，作为幂的指数。

#include <stdio.h>
#include <stdlib.h>

double power(double n, int p);

int main(int argc,char *argv[])
{
	double n;
	int p;

	
	switch (argc)
	{
		case 3 :
			n = atof(argv[1]);
			p = atoi(argv[2]);
			break;
		default :
			puts("参数不正确");
			return 1;
	}
	
	printf("%lf\n", power(n, p));
	
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
