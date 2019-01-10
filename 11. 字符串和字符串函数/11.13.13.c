// ��дһ��������ݵĻ��������еĳ��򡣵�һ�������в���Ϊ double ����������Ϊ�ݵĵ������ڶ�������Ϊ��������Ϊ�ݵ�ָ����

#include <stdio.h>
#include <stdlib.h>

double power(double n, int p);

int main(int argc,char *argv[])
{
	double n;
	int p;

	
	switch (argc)
	{
		case 3 :
			n = atof(argv[1]);
			p = atoi(argv[2]);
			break;
		default :
			puts("��������ȷ");
			return 1;
	}
	
	printf("%lf\n", power(n, p));
	
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
