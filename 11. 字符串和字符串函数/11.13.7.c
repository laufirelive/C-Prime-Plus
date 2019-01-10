// ��дһ������ string_in() �������������ַ���ָ�������
// ����ڶ����ַ����������ڵ�һ���ַ����У������ͷ��ر��������ַ�����ʼ�ĵ�ַ��
// ���磬string_in("hats", "at") ���� hats �� a �ĵ�ַ�����򣬺������ؿ�ָ�롣
// ��һ��ʹ��ѭ�����Ϊ��������ṩ��������������н��в��ԡ�

#include <stdio.h>
#define LEN 1024
char * str_search(char * source, char * target);

int main()
{
	char s[LEN];
	char t[LEN];
	while (1)
	{
		printf("Source : ");
		scanf("%s", s);
		printf("Target : ");
		scanf("%s", t);
		puts(str_search(s, t));
		if (*s == '#')
			break;
	}
	return 0;
} 

char * str_search(char * source, char * target)
{
	int i;
	char * s;
	char * t;
	
	i = 0;
	while (*(source+i))
	{
		s = source + i;
		t = target;
		
		while (*t)
		{
			if (*t == *s)
			{
				t++;
				s++;
			}
			else
				break;
		}
		if (!(*t))
			return source + i;
		
		i++;
	}
	return NULL;
}