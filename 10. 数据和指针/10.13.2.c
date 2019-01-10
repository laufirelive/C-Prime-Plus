// ��дһ�����򣬳�ʼ��һ�� double ���飬Ȼ����������ݸ��Ƶ������������飨 3 �����鶼��Ҫ������������������
// ������һ�ݿ����ĺ���ʹ��������š������ڶ��ݿ����ĺ���ʹ��ָ����ţ���ʹ��ָ�������������
// ��Ŀ����������Ҫ���Ƶ�Ԫ����Ŀ��Ϊ�������ݸ�������Ҳ����˵�����������������������������Ӧ����������ʾ��

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
