// 设计并测试一个函数，其功能是读取输入行中的第一个单词到数组，并丢掉该行中的其他字符。一个单词的定义是一串字符，其中不含空格、制表符和换行符。

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

