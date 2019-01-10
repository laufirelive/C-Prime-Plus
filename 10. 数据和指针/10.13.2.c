// 编写一个程序，初始化一个 double 数组，然后把数组内容复制到另外两个数组（ 3 个数组都需要在主程序中声明）。
// 制作第一份拷贝的函数使用数组符号。制作第二份拷贝的函数使用指针符号，并使用指针的增量操作。
// 把目标数组名和要复制的元素数目做为参数传递给函数。也就是说，如果给定了下列声明，函数调用应该如下面所示：

// double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
// double target1[5];
// double target2[5];
// copy_arr(source, target1, 5);
// copy_ptr(source, target2, 5);

#include <stdio.h>

void copy_arr(double source[], double target[], int len);
void copy_ptr(double *source, double *target, int len);

int main()
{
	double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[5];
	double target2[5];
	copy_arr(source, target1, 5);
	copy_ptr(source, target2, 5);
	
	int i;
	for (i = 0; i < 5; i++)
		printf("%5.2lf", source[i]);
	puts("");
	for (i = 0; i < 5; i++)
		printf("%5.2lf", target1[i]);
	puts("");
	for (i = 0; i < 5; i++)
		printf("%5.2lf", target2[i]);
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
