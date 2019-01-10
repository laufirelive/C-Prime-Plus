// 改写用来找到前20个整数之和的程序 addemup.c （程序清单 5.13 ）
// （如果您愿意，可以把 addemup.c 看成是一个计算如果您第一天得到 $1
// 第二天得到 $2，第三天得到 $3，以此类推，您在20天里会挣多少钱的程序）。
// 修改该程序，目的是您能交互地告诉程序计算进行到哪里。
// 也就是说，用一个读入的变量来代替 20 。

#include <stdio.h>
#define CM4AFEET 30.48
#define CM4AINCHE 2.54

int main()
{
	// int count;
	int	sum, end;
	
	// count = 0;
	sum = 0;
	end = 0;
	
	scanf("%d", &end);
	
	// while (count++ < end)
		// sum = sum + count;
	
	sum = (1 + end) * end / 2;
	
	printf("sum = %d\n", sum);
	return 0;
} 
