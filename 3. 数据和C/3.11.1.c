// 通过实验的方法（即编写带有次类问题的程序）观察系统如何处理整数上溢、浮点数上溢和浮点数下溢的情况。

#include <stdio.h>

int main()
{
	int aInt;
	float aFloat;
	float bFloat;
	
	aInt = 2147483647;
	aFloat = 3.4E38;
	bFloat = -3.4E38;
	printf("aInt = %d\naInt + 1 = %d\n", aInt, aInt+1);
	printf("aFloat = %f\naFloat*100 = %f\n", aFloat, aFloat*100);
	printf("bFloat = %f\nbFloat*100 = %f\n", bFloat, bFloat*100);
	return 0;
} 
