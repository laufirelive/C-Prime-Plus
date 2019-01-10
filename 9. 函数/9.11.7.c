// �ڵ� 6 �� �� C ������䣺 ѭ���� �ĳ����嵥 6.20 �У����� power() �Ĺ����Ƿ���һ�� double ��������ĳ�����������ݡ�
// ���ڸĽ��ú�����ʹ������ȷ�ڼ��㸺�ݡ�ͬʱ���øú���ʵ�� 0 ���κδ���Ϊ 0 �����κ���ֵ�� 0 ���ݶ�Ϊ 1 ��
// ʹ��ѭ���ķ�ʽ��д�ú�������һ�������в�������

#include <stdio.h>
#include <math.h>

double power(double n, int p);

int main()
{
	printf("%.2lf\n", power(2, 3));
	printf("%.2lf\n", power(2, -3));
	printf("%.2lf\n", power(0, -3));
	printf("%.2lf\n", power(2, 0));
	return 0;
} 

double power(double n, int p)
{
	double pow = 1;
	int i;
	
	if (p == 0)
		return 1;
	if (abs(n) < 1e-8)
		return 0;
	
	for (i = 1; i<=abs(p); i++)
		pow *= n;
	
	if(p < 0)
		pow = 1/pow;
	
	return pow;
}
