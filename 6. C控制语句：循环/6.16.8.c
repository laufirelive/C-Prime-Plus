// ����ϰ7�����޸ģ�����ʹ��һ�����������ؼ���ֵ��

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