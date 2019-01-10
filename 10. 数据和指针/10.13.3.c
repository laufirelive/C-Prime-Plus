// 编写一个函数，返回一个 int 数组中存储的最大数值，并在一个简单的程序中测试这个函数。

#include <stdio.h>

int max(int source[], int len);

int main()
{
	int a[6] = {43, 12, 54, 85, 15, 33};
	printf("%d\n", max(a, 6));
	return 0;
} 

int max(int source[], int len)
{
	int i, k;
	for (i = 0, k = 0; i < len; i++)
	{
		if (source[i] > source[k])
			k = i;
	}
	return source[k];
}