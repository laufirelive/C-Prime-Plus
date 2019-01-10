// 修改练习 2 中的赋值函数，把一个包含 7 个元素的数组内第 3 到第 5 元素复制到一个包含 3 个元素的数组中，函数本身不需要修改，
// 只需要选择合适的实际参数（实际参数不需要是数组名和数组大小，而只需是数组元素的地址和需要数值的元素数目）。

#include <stdio.h>

void copy_arr(double source[], double target[], int len);
void copy_ptr(double *source, double *target, int len);

int main()
{
	double source[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
	double target[3];
	copy_ptr(source + 2, target, 3);
	
	int i;
	for (i = 0; i < 7; i++)
		printf("%5.2lf", source[i]);
	puts("");
	for (i = 0; i < 3; i++)
		printf("%5.2lf", target[i]);
	puts("");
	return 0;
} 

void copy_arr(double source[], double target[], int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		target[i] = source[i];
	}
}

void copy_ptr(double *source, double *target, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		*(target + i) = *(source + i);
	}
}
