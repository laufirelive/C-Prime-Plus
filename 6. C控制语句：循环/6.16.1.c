// ��дһ�����򣬴���һ������ 26 ��Ԫ�ص����飬�������б��� 26 ��Сд��ĸ��
// ���ó�����ʾ�����������

#include <stdio.h>

int main()
{
	char a[26];
	int i;
	
	for (i = 0; i < 26; i++)
	{
		a[i] = 'a' + i;
		printf("%c\t", a[i]);
		if (0 == (i+1) % 5)
			printf("\n");
	}
	printf("\n");
	
	return 0;
} 
