// ��д�����ҵ�ǰ20������֮�͵ĳ��� addemup.c �������嵥 5.13 ��
// �������Ը�⣬���԰� addemup.c ������һ�������������һ��õ� $1
// �ڶ���õ� $2��������õ� $3���Դ����ƣ�����20�����������Ǯ�ĳ��򣩡�
// �޸ĸó���Ŀ�������ܽ����ظ��߳��������е����
// Ҳ����˵����һ������ı��������� 20 ��

#include <stdio.h>
#define CM4AFEET 30.48
#define CM4AINCHE 2.54

int main()
{
	// int count;
	int	sum, end;
	
	// count = 0;
	sum = 0;
	end = 0;
	
	scanf("%d", &end);
	
	// while (count++ < end)
		// sum = sum + count;
	
	sum = (1 + end) * end / 2;
	
	printf("sum = %d\n", sum);
	return 0;
} 
