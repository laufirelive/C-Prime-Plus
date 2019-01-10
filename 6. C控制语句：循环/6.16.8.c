// 对练习7进行修改，让它使用一个函数来返回计算值。

#include <stdio.h>

float lazytonameit(float a, float b);

int main()
{
	float aFloat, bFloat;
	while (scanf("%f %f", &aFloat, &bFloat) == 2)
	{
		printf("%f", lazytonameit(aFloat, bFloat));
	}
	return 0;
} 

float lazytonameit(float a, float b)
{
	return (a-b) / a*b;
}