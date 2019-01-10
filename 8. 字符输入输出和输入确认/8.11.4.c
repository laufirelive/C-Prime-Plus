// 编写一个程序，把输入作为字符流读取，直到遇到 EOF。令其报告每个单词的平均字母数。不要将空白字符记为单词中的字母。
// 实际上，标点符号也不应该计算，但现在不必考虑这一点（如果您想做的好一些），可以使用 ctype.h 系列中的 ispunct() 函数。

#include <stdio.h>
#include <ctype.h>

#define MAXLEN 1024

int main()
{
	int i, len;
	int c[MAXLEN];
	
	int word_count = 0;
	int alpha_count = 0;
	
	i = 0;
	while (i < MAXLEN && (c[i] = getchar()) && c[i] != EOF) i++;
	
	len = i;
	for (i = 0; i < len; i++)
	{
		if (c[i] == ' ' && i != 0)
			word_count++;
		else if (!ispunct(c[i]))
			alpha_count++;
	}
	
	printf("总单词：%d\n平均字母数：%.2lf\n", word_count, alpha_count/(double)word_count);
} 
