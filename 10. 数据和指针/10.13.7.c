// �޸���ϰ 2 �еĸ�ֵ��������һ������ 7 ��Ԫ�ص������ڵ� 3 ���� 5 Ԫ�ظ��Ƶ�һ������ 3 ��Ԫ�ص������У�����������Ҫ�޸ģ�
// ֻ��Ҫѡ����ʵ�ʵ�ʲ�����ʵ�ʲ�������Ҫ���������������С����ֻ��������Ԫ�صĵ�ַ����Ҫ��ֵ��Ԫ����Ŀ����

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
