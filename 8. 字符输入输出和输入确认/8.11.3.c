// ��дһ�����򣬰�������Ϊ�ַ�����ȡ��ֱ������ EOF�����䱨�������еĴ�д�ַ�������Сд��ĸ������
// ����Сд��ĸ����ֵ�������ģ���д��ĸҲ����ˡ������������ctype.h���еĺ��ʵĺ��������ִ�Сд��

#include <stdio.h>
#define MAXLEN 1024

int main()
{
	int i, len;
	int c[MAXLEN];
	
	int upper = 0;
	int lower = 0;
	
	i = 0;
	while (i < MAXLEN && (c[i] = getchar()) && c[i] != EOF) i++;
	
	len = i;
	for (i = 0; i < len; i++)
	{
		if (c[i] >= 'A' && c[i] <= 'Z')
			upper++;
		if (c[i] >= 'a' && c[i] <= 'z')
			lower++;
	}
	
	printf("��д��ĸ��%d\nСд��ĸ��%d\n", upper, lower);
} 
