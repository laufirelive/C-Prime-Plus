// ��дһ������������һ�� int �����д洢�������ֵ������һ���򵥵ĳ����в������������

#include <stdio.h>

int max(int source[], int len);

int main()
{
	int a[6] = {43, 12, 54, 85, 15, 33};
	printf("%d\n", max(a, 6));
	return 0;
} 

int max(int source[], int len)
{
	int i, k;
	for (i = 0, k = 0; i < len; i++)
	{
		if (source[i] > source[k])
			k = i;
	}
	return source[k];
}