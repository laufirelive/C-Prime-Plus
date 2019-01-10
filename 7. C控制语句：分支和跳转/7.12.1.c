// 编写一个程序。该程序读取输入直到 # 字符，然后报告读取的空格数目、读取的换行符数目以及读取的所有其他字符数目。


#include <stdio.h>

int main()
{
	int space_count;
	int line_count;
	int other_count;
	char c;
	
	space_count = 0;
	line_count = 0;
	other_count = 0;
	
	while (scanf("%c", &c) && c != '#')
	{
		switch (c)
		{
			case ' ' : 
				space_count++; break;
			case '\n':
				line_count++; break; 
			default :
				other_count++; break;
		}
	}
	
	printf("空格： %d 个\n", space_count);
	printf("换行： %d 个\n", line_count);
	printf("其他： %d 个\n", other_count);
	
	return 0;
} 
