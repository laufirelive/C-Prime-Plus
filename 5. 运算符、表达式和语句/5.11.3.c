// ��дһ�����򣬸ó����û�����������Ȼ�󽫸�ֵת��Ϊ������������
// ���磬�����򽫰� 18 ��ת���� 2 �� 4 �졣������ĸ�ʽ��ʾ�����

	// 18 days are 2 weeks, 4 days.
	
// ��дһ���������û��ظ��������������û�����һ������������ 0 �� -20��ʱ��������ֹѭ����

#include <stdio.h>
#define DAYS4AWEEK 7

int main()
{
	int days;
	scanf("%d", &days);
	while (days > 0)
	{
		printf("%d days are %d weeks, %d days.\n", days, days / 7, days % 7);
		scanf("%d", &days);
	}
	return 0;
} 
