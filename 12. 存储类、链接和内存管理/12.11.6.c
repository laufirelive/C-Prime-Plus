// ��д���� 1000 �� 1 �� 10 ��Χ�ڵ���������򡣲��ر�����ӡ���֣�����ӡÿ�����������˶��ٴΡ�
// �ó���� 10 ����ͬ������ֵ���м��㡣���ֳ��ֵĴ�����ͬ�𣿿���ʹ�ñ��µĺ����� ANSI C �еĺ��� rand() �� srand() ��
// ���������ǵĺ���������ͬ����ʽ������һ�������ض������������������Է�����

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LEN 1000

int main(void)
{
	const int max = 10;
	const int min = 1;
	
	int count_random[10] = {0};
	
	for (int i = 0; i < 10; i++)
	printf("%-10d", i+1);
	
	for (int i = 0; i < 10; i++)
	{
		for (int i = 0; i < LEN; i++)
			count_random[rand() % max + min - 1]++;
		
		putchar('\n');
		for (int i = 0; i < 10; i++)
			printf("%-10d", count_random[i]);
		

		
		srand(i);
	}
	

	
	return 0;
}
