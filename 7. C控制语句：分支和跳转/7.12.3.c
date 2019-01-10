// 编写一个程序。该程序读取整数，直到输入 0 。
// 输入终止后，程序应该报告输入的偶数（不包括 0 ）总个数、偶数的平均值，
// 输入的奇数总个数以及奇数的平均值。

#include <stdio.h>

int main()
{
	int num_typed;
	
	int even_count = 0;
	int odd_count = 0;
	int even_sum = 0;
	int odd_sum = 0;
	
	while (scanf("%d", &num_typed) && num_typed != 0)
	{
		if (num_typed % 2)
		{
			odd_count++;
			odd_sum+=num_typed;
		}
		else
		{
			even_count++;
			even_sum+=num_typed;
		}
	}
		printf("偶数总个数 ：%d\n", even_count);
		printf("奇数总个数 ：%d\n", odd_count);
		printf("偶数平均值 ：%.2f\n", even_sum / (float)even_count);
		printf("奇数平均值 ：%.2f\n", odd_sum / (float)odd_count);
	
	return 0;
} 
