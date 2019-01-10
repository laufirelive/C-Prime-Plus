// 编写一个函数，返回一个 double 数组中存储的最大的和最小的数之间的差值，并在一个简单的程序中测试这个函数。

#include <stdio.h>

double max_min(double source[], int len);

int main()
{
	double a[6] = {43, 12, 54, 85, 15, 33};
	printf("%.2lf\n", max_min(a, 6));
	return 0;
} 

double max_min(double source[], int len)
{
	int i, maxI, minI;
	for (i = 0, maxI = 0, minI = 0; i < len; i++)
	{
		if (source[i] > source[maxI])
			maxI = i;
		if (source[i] < source[minI])
			minI = i;
	}
	return source[maxI] - source[minI];
}