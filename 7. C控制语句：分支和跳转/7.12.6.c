// 编写一个程序读取输入，直到 # ，并报告序列 ei 出现的次数。
// 说明：
	// 此程序必须要记住前一个字符和当前的字符。用诸如 “Receive your eieio award.” 的输入来测试它。

#include <stdio.h>

int main()
{
	char char_now;
	char char_before;
	char count_ei;
	
	char_before = '\0';
	count_ei = 0;
	
	while (scanf("%c", &char_now) && char_now != '#')
	{
		if (char_before == 'e' && char_now == 'i')
			count_ei++;
		char_before = char_now;
	}
	
	printf("Count for ei : %d\n", count_ei);
	
	return 0;
} 
