// 1988 年 United States Federal Tax Schedule 是近期最基本的。它分为 4 类，每类有两个等级。下面是其摘要：美元数为应征税的收入。

	// 种类				税金
	// 单身				前17，850美元按 15%，超出部分按 28%
	// 户主				前23，900美元按 15%，超出部分按 28%
	// 已婚，共有		前29，750美元按 15%，超出部分按 28%
	// 已婚，离异		前14，875美元按 15%，超出部分按 28%

// 例如，有 20 000 美元应征税收入的单身雇佣者劳动者应缴税金 0.15 * 17 850 + 0.28 * (20 000 - 17850)。
// 编写一个程序，让用户指定税金种类和应征税收入，然后计算税金。使用循环以便用户可以多次输入。

#include <stdio.h>
#define STANDARD_RATE 0.15
#define OVER_RATE 0.28

int main()
{
	int selection;
	int salary;
	int taxLevel;
	
	puts("种类					税金");
	puts("1. 单身				前17，850美元按 15%，超出部分按 28%");
	puts("2. 户主				前23，900美元按 15%，超出部分按 28%");
	puts("3. 已婚，共有			前29，750美元按 15%，超出部分按 28%");
	puts("4. 已婚，离异			前14，875美元按 15%，超出部分按 28%");
	puts("5. 退出");
	
	while (1)
	{
		while (scanf("%d", &selection) && (selection > 5 || selection < 1))
			printf("Wrong Type\n");
		
		switch (selection)
		{
			case 1 : taxLevel = 17850; break;
			case 2 : taxLevel = 23900;	break;
			case 3 : taxLevel = 29750;	break;
			case 4 : taxLevel = 14875;	break;
			case 5 : return 0;
		}
		
		printf("应征税收入 ： ");
		while (scanf("%d", &salary) && salary < 0);
		
		if (salary - taxLevel <= 0)
			printf("你的税金为 : %.2lf$\n", salary * STANDARD_RATE);
		else
			printf("你的税金为 : %.2lf$\n", STANDARD_RATE * taxLevel + OVER_RATE * (salary - taxLevel));
	}
	
	return 0;
}
