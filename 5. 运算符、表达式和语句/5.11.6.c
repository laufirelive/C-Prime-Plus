// �����޸���ϰ 5 �еĳ���ʹ���ܹ���������ƽ���ĺͣ������ϲ��������������Ϊ��
// �������һ��õ� $1 �� �ڶ���õ� $4 ��������õ� $9 ���Դ����������õ�����Ǯ��
// �⿴��������һ���ܺõ���������

#include <stdio.h>

int main()
{
	int count;
	int	sum, end;
	
	count = 0;
	sum = 0;
	end = 0;
	
	scanf("%d", &end);
	
	while (count++ < end)
		sum = sum + count * count;
	
	printf("sum = %d\n", sum);
	return 0;
} 
