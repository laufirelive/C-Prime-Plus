// ��д�����Ժ��� larger_of()���书���ǽ����� double ���ͱ�������ֵ�滻�������еĽϴ�ֵ��
// ���磬larger_of(x, y) ��� x �� y �еĽϴ���ֵ���¸��� x �� y ��

#include <stdio.h>

void larger_of(double *x, double *y);

int main()
{
	double a, b;
	
	a = 95; b = 23;
	printf("a = %.2lf\tb = %.2lf\n", a, b);
	larger_of(&a, &b);
	printf("a = %.2lf\tb = %.2lf\n", a, b);
	
	putchar('\n');
	
	a = 34; b = 1;
	printf("a = %.2lf\tb = %.2lf\n", a, b);
	larger_of(&a, &b);
	printf("a = %.2lf\tb = %.2lf\n", a, b);
	
	return 0;
} 

void larger_of(double *x, double *y)
{
	if (*x > *y)
		*x = *y;
	else
		*y = *x;
	
	return;
}