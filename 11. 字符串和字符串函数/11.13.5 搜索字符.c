// ��дһ������ is_within() ������������������һ�����ַ�����һ�����ַ���ָ�롣�书��������ַ����ַ����У��ͷ���һ���� 0 ֵ���棩��
// ����ַ������ַ����У��ͷ��� 0 ֵ���٣�����һ��ʹ��ѭ�����Ϊ��������ṩ��������������н��в��ԡ�

#include <stdio.h>
#define LEN 31
int is_within(char * source, char target);

int main()
{
	char a[LEN];
	char b;
	while (1)
	{
		printf("source : ");
		scanf("%s", a);
		while (getchar() != '\n');
		printf("target : ");
		scanf("%c", &b);
		while (getchar() != '\n');
		printf("%d\n", is_within(a, b));
	}
	return 0;
} 


int is_within(char * source, char target)
{
	int i = 1;
	char * s;
	
	s = source;
	while (*s)
	{
		if (*s == target)
			return i;
		
		i++; s++;
	}
	return 0;
}