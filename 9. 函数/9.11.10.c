// ��д������һ������ Fibonacci() ���ڸú�����ʹ��ѭ������ݹ����쳲��������еļ��㡣

#include <stdio.h>
long Fibonacci(int n);
int main()
{
	int i;
	for (i = 1; i <= 15; i++)
		printf("%-5ld", Fibonacci(i));
	
	printf("\n");
	
	return 0;
} 

long Fibonacci(int n)
{
	int i;
	long left = 1;
	long right = 1;
	long sum = 0;
	
	if (n < 0)
		return 0;
	
	if (n == 1 || n == 2)
		return 1;
	
	for (i = 3; i <= n; i++)
	{
		sum = left + right;
		left = right;
		right = sum;
	}
	return sum;
	//1 1 2 3 5 8 13 21
}