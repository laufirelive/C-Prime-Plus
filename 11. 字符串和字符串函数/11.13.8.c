// ��дһ���������书����ʹ�����ַ���������һ��ʹ��ѭ�����Ϊ��������ṩ��������������в��ԡ�

#include <stdio.h>
#define LEN 1024

void str_down(char * source);

int main()
{
	char s[LEN];
	while (1)
	{
		printf("Source : ");
		scanf("%s", s);
		str_down(s);
		puts(s);
		if (*s == '#')
			break;
	}
	return 0;
} 

void str_down(char * source)
{
	int i, n;
	for (i = 0; source[i]; i++)
		;
	
	n = i;

	for (i = 0; i < n/2; i++)
	{
		char temp;
		temp 			= 	source[i];
		source[i] 		= 	source[n-i-1];
		source[n-i-1] 	= 	temp;
	}
}