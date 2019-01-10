// 编写一个程序，要求输入两个浮点数，然后打印出用两者的差值除以二者的乘积所得的结果。
// 在用户键入非数字的输入之前程序循环处理每对输入值。

#include <stdio.h>

int main()
{
	float aFloat, bFloat;
	while (scanf("%f %f", &aFloat, &bFloat) == 2)
	{
		printf("%f", (aFloat-bFloat) / aFloat*bFloat);
	}
	return 0;
} 
