// ��дһ�������������Ϊһ���ַ���������ɾ���ַ����еĿո���һ������ѭ����ȡ�ĳ����н��в��ԣ�ֱ���û�������С�
// �����κ������ַ�����������Ӧ�����ò���ʾ�����

#include <stdio.h>
#define LEN 1024

void str_space_clear(char * source);

int main()
{
	char s[LEN];
	while (1)
	{
		printf("Input : ");
		gets(s);
		str_space_clear(s);
		puts(s);
	}
	return 0;
} 

void str_space_clear(char * source)
{
	int i, n;
	for (i = 0, n = 0; source[i]; i++)
	{
		source[i - n] = source[i];
		if (source[i] == ' ')
			n++;
	}
	
	for (i = 0; source[i]; i++)
		;
	source[i-n] = '\0';
}