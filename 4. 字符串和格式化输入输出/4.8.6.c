// 编写一个程序，设置一个值为 1.0/3.0 的 double 类型变量和一个值为 1.0/3.0 的 float 类型变量。
// 每个变量的值显示三次：
	// 一次在小数点右侧显示 4 个数字，
	// 一次在小数点右侧显示 12 个数字，
	// 另一次在小数点右侧显示 16 个数字。
	// 同时要让程序包括 float.h 文件，并显示 FLT_DIG 和 DBL_DIG 的值。
	// 1.0/3.0 的显示值与这些值一致吗？

#include <stdio.h>
#include <float.h>

int main()
{
	double aDouble = 1.0 / 3.0;
	float aFloat = 1.0 / 3.0;
	
	printf("aFloat = %.4f\n", aFloat);
	printf("aFloat = %.12f\n", aFloat);
	printf("aFloat = %.16f\n\n", aFloat);
	printf("FLT_DIG = %.4f\n", aFloat);
	printf("FLT_DIG = %.12f\n", aFloat);
	printf("FLT_DIG = %.16f\n\n", aFloat);
	
	printf("aDouble = %.4lf\n", aDouble);
	printf("aDouble = %.12lf\n", aDouble);
	printf("aDouble = %.16lf\n\n", aDouble);
	printf("DBL_DIG = %d\n", DBL_DIG);

	return 0;
} 
