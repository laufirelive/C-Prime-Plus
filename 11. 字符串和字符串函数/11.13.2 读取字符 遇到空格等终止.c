// �޸Ĳ�������ϰ 1 �еĺ�����ʹ�ÿ����� n ���ַ��󣬻��һ���ո��Ʊ�������з���ֹͣ��ȡ���룬��������������ȱ�������Ǹ���ֹ���루������ scanf() ��������
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
	int i;
	fgets(target, len, stdin);
	for (i = 0; i < len; i++)
	{
		switch (target[i])
		{
			case ' '	:
			case '\t'	:
			case '\n'	: 
				target[i] = '\0'; i = len; break;
		}
	}
}

