// ��дһ�����򡣽��÷��ӱ�ʾ��ʱ��ת������Сʱ�ͷ��ӱ�ʾ��ʱ�䡣
// ʹ�� #define ���� const ������һ������ 60 �ķ��ų�����
// ʹ�� while ѭ���������û��ظ�����ֵ�����Ҽ���һ��С�ڵ��� 0 ��ʱ��ʱ��ֹѭ����

#include <stdio.h>
#define MINS4AHOUR 60

int main()
{
	int minutes;
	minutes = 0;
	
	printf("input minutes : ");
	scanf("%d", &minutes);
	
	while (minutes > 0)
	{
		printf("%02d : %02d\n", minutes / MINS4AHOUR, minutes % MINS4AHOUR);
		printf("input minutes : ");
		scanf("%d", &minutes);
	}
	
	return 0;
} 
