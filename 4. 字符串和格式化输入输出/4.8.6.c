// ��дһ����������һ��ֵΪ 1.0/3.0 �� double ���ͱ�����һ��ֵΪ 1.0/3.0 �� float ���ͱ�����
// ÿ��������ֵ��ʾ���Σ�
	// һ����С�����Ҳ���ʾ 4 �����֣�
	// һ����С�����Ҳ���ʾ 12 �����֣�
	// ��һ����С�����Ҳ���ʾ 16 �����֡�
	// ͬʱҪ�ó������ float.h �ļ�������ʾ FLT_DIG �� DBL_DIG ��ֵ��
	// 1.0/3.0 ����ʾֵ����Щֵһ����

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
