// 用 switch 重做练习 3

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
		switch (num_typed % 2)
		{
			case 0 : 
				even_count++;
				even_sum+=num_typed;
				break;
			case 1 :
				odd_count++;
				odd_sum+=num_typed;
				break;
		}
	}
		printf("偶数总个数 ：%d\n", even_count);
		printf("奇数总个数 ：%d\n", odd_count);
		printf("偶数平均值 ：%.2f\n", even_sum / (float)even_count);
		printf("奇数平均值 ：%.2f\n", odd_sum / (float)odd_count);
	
	return 0;
} 
