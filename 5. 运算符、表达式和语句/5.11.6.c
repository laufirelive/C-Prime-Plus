// 现在修改练习 5 中的程序，使它能够计算整数平方的和（如果您喜欢，可以这样认为：
// 如果您第一天得到 $1 ， 第二天得到 $4 ，第三天得到 $9 ，以此类推您将得到多少钱。
// 这看起来象是一个很好的买卖）。

#include <stdio.h>

int main()
{
	int count;
	int	sum, end;
	
	count = 0;
	sum = 0;
	end = 0;
	
	scanf("%d", &end);
	
	while (count++ < end)
		sum = sum + count * count;
	
	printf("sum = %d\n", sum);
	return 0;
} 
