// 编写一个函数，返回一个 double 数组中存储的最大数值的索引，并在一个简单的程序中测试这个函数。

#include <stdio.h>

int max(double source[], int len);

int main()
{
	double a[6] = {43, 12, 54, 85, 15, 33};
	printf("%d\n", max(a, 6));
	return 0;
} 

int max(double source[], int len)
{
	int i, k;
	for (i = 0, k = 0; i < len; i++)
	{
		if (source[i] > source[k])
			k = i;
	}
	return k;
}