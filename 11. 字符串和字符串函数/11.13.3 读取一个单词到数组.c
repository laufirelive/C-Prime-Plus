// ��Ʋ�����һ���������书���Ƕ�ȡ�������еĵ�һ�����ʵ����飬�����������е������ַ���һ�����ʵĶ�����һ���ַ������в����ո��Ʊ���ͻ��з���

#include <stdio.h>
#define LEN 31

void input_string(char target[], int len);

int main()
{
	char aString[LEN];
	input_string(aString, LEN);
	fputs(aString, stdout);
	return 0;
} 

void input_string(char target[], int len)
{
	int i, j;
	fgets(target, len, stdin);
	
	i = 0;
	while (1)
	{
		if (target[i] == ' ' || target[i] == '\t' || target[i] == '\n')
			i++;
		else
			break;
	}
	
	for (j = 0; i < len; i++, j++)
	{
		switch (target[i])
		{
			case ' '	:
			case '\t'	:
			case '\n'	: 
				target[i] = '\0'; i = len; break;
		}
		target[j] = target[i];
	}
}

