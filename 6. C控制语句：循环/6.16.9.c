// 编写一个程序，要求用户输入下限整数和一个上限整数，
// 然后，依次计算从下限到上线的每一个整数的平方的加和，最后计算结果。
// 程序将不断提示用户输入下限整数和上限整数并显示出答案，直到用户的上限整数等于或小于下限整数为止。
// 程序运行的结果实例应该如下所示 ： 

// Enter lower and upper integer limits : 5 9
// The sums of the squares from 25 to 81 is 255
// Enter next set of limits : 3 25
// The sums of the squares from 9 to 625 is 5520
// Enter next set of limits : 5 5
// Done

#include <stdio.h>


int main()
{
	int lower, upper;
	printf("Enter lower and upper integer limits : ");
	scanf("%d %d", &lower, &upper);
	
	while (lower < upper)
	{
		int i, sum;
		for (i = lower, sum = 0; i <= upper; i++)
			sum += i*i;
		printf("The sums of the squares from %d to %d is %d\n", lower*lower, upper*upper, sum);
		printf("Enter next set of limits : ");
		scanf("%d %d", &lower, &upper);
	}
	printf("Done\n");
	return 0;
} 
