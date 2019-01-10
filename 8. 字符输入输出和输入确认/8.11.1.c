// 设计一个程序，统计从输入到文件结尾的字符数。

#include <stdio.h>

int main()
{
	unsigned int count;
	count = 0;
	
	while (getchar() != EOF) count++;	
	
	printf("\n总计%d个字符\n", count);
	return 0;
} 
