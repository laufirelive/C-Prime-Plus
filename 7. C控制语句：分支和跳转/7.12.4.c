// 利用 if else 语句编写程序读取输入，直到 # 。用一个感叹号代替每个句号，将原有的每个感叹号用两个感叹号代替，最后报告进行了多少次替代。

#include <stdio.h>
#define MAXLEN 1024

int main()
{
	int i, len;
	int replace_count;
	char c[MAXLEN];
	
	i = 0;
	replace_count = 0;
	

	while (i < MAXLEN && scanf("%c", c + i) && c[i] != '#')
	{
		if (c[i] == '.')
		{
			c[i] = '!';
			replace_count++;
		}
		else if (c[i] == '!')
		{
			if (i+1 < MAXLEN)
			{
				c[++i] = '!';
				replace_count++;
			}	
		}
		i++;
	}
	len = i;
	for (i = 0; i < len; i++)
		printf("%c", c[i]);
	printf("\n");
	return 0;
} 
