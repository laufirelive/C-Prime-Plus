// ��дһ������� 8 ����������һ�������У�Ȼ�����෴��˳���ӡ����

#include <stdio.h>


int main()
{
	int i;
	int a[8];
	
	for (i = 0; i < 8; i++)
		scanf("%d", a + i);
	for (i = 7; i >= 0; i--)
		printf("%d\t", a[i]);
	
	return 0;
} 
