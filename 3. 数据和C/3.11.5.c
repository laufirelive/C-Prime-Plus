// 一年约有 3.156*10^7s 。编写一个程序，要求输入您的年龄，然后显示该年龄合多少秒。

#include <stdio.h>

int main()
{
	int ages;
	
	scanf("%d", &ages);
	printf("ages = %d-year-old\nsecond = %es\n", ages, ages * 3.156E+7);
	
	return 0;
} 
