// 编写一个程序，功能是读取输入，直到遇到 EOF ，并报告单词数、大写字母数、小写字母数、标点符号数和数字字符数。
// 使用 ctype.h 系列的函数。

#include <stdio.h>
#include <ctype.h>
#define LEN 1024

void input_string(char target[], int len);
void fun(char * str);
int main()
{
	char aString[LEN];
	input_string(aString, LEN-1);
	fun(aString);
	return 0;
} 

void input_string(char target[], int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		int temp = getchar();
		if (temp == EOF)
			break;
		target[i] = temp;
	}
	target[i] = '\0'; 
}

void fun(char * str)
{
	int count_word 		=	0;
	int count_upper 	=	0;
	int count_lower		=	0;
	int count_punct		=	0;
	int count_number	=	0;
	
	if (*str && (*str == ' ' || *str == '\t' || *str == '\n'))
		str++;
	
	int word_flag = 1;
	while (*str)
	{
		if (isspace(*str))
			word_flag = 1;
		else if (!isspace(*str) && !ispunct(*str) && !isdigit(*str) && word_flag)
		{
			count_word++;
			word_flag = 0;
		}
		else if (ispunct(*str))
		{
			count_punct++;
			word_flag = 1;
		}
		if (isupper(*str))
			count_upper++;
		else if (islower(*str))
			count_lower++;

		else if (isdigit(*str))
		{
			count_number++;
		}

		
		str++;
	}
	printf("Word : %d\n", count_word);
	printf("Upper : %d\n", count_upper);
	printf("Lower : %d\n", count_lower);
	printf("Punct : %d\n", count_punct);
	printf("Digit : %d\n", count_number);
}