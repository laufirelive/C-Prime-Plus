// ����ֵ��г��ֵ�����������㣺 ���ȼ�������ֵ�ĵ���ȡƽ��ֵ��Ȼ����ȡ��������дһ���������� double �����ĺ���������������������г��ֵ��

#include <stdio.h>
#include <math.h>

double fun(double a, double b);

int main()
{
	printf("%.2lf\n", fun(99, 88));
	return 0;
} 

double fun(double a, double b)
{
	if (abs(a) < 1e-8 || abs(b) < 1e-8)
		return 0;
	return 1/((1/a + 1/b)/2);
}