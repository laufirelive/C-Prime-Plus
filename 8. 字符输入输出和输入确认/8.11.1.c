// ���һ������ͳ�ƴ����뵽�ļ���β���ַ�����

#include <stdio.h>

int main()
{
	unsigned int count;
	count = 0;
	
	while (getchar() != EOF) count++;	
	
	printf("\n�ܼ�%d���ַ�\n", count);
	return 0;
} 
