// ��дһ�������ӡһ�������ÿһ�ж�����һ������������ƽ���Լ�����������
// Ҫ���û��������������ޡ�

#include <stdio.h>

int main()
{
	int i, min, max;
	printf("min and max : ");
	scanf("%d %d", &min, &max);
	for (i = min; i <= max; i++)
	{
		printf("%d\t%d\t%d\n", i, i*i, i*i*i);
	}
	
	return 0;
} 
