// ��Ʋ�����һ���������书���������ɺ����ɵ�һ������ָ�����ַ����������в����ɺ����ĵڶ�������ָ�����ַ��ĵ�һ�γ��ֵ�λ�á�
// ����ҵ�������ָ������ַ���ָ�룻���û���ҵ������ؿ��ַ������ַ�ʽ�� strchr() �����Ĺ���һ��������һ��ʹ��ѭ�����Ϊ��
// �������ṩ��������������в��ԡ�

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