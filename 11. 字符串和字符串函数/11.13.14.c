// 使用字符分类函数实现 atoi() 函数

#include <stdio.h>
#include <math.h>
int my_atoi(char * int_string);
double power(double n, int p);

int main(void)
{
	printf("%d\n", my_atoi("2189"));
	printf("%d\n", my_atoi("5"));
	printf("%d\n", my_atoi("abc"));
	return 0;
}

int my_atoi(char * int_string)
{
	char *p_temp = int_string;
	int digit_count = 0;
	int digit = 0;
	
	while (*p_temp >= '0' && *p_temp <= '9')
	{
		digit_count++;
		p_temp++;
	}
	
	int i;
	for (i = 0; i < digit_count; i++, int_string++)
	{
		digit += (*int_string - 48) * (int)power(10, digit_count - i - 1);;
	}
	return digit;
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
