// ��Ʋ�����һ�����������Դ������ȡ n ���ַ��������ո��Ʊ���ͻ��з������ѽ���洢��һ�������У��������ĵ�ַͨ�����������ݡ�

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
	fgets(target, len, stdin);
}

