// 编写一个程序把一个单词读入一个字符数组，然后反相打印出这个词。
// 提示：使用 strlen()（第 4 章）计算数组中最后一个字符的索引。

#include <stdio.h>
#include <string.h>

int main()
{
	int i, word_len;
	char word[21];
	
	scanf("%s", word);
	word_len = strlen(word);
	
	for (i = word_len; i > 0 ; i--)
	{
		printf("%c", word[i-1]);
	}
	
	printf("\n");
	
	return 0;
} 
