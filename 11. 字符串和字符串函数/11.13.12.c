// 编写一个程序，按照相反的单词顺序输出命令行参数。即，如果命令行参数是 see you later，程序的显示应该为 later you see。

#include <stdio.h>

int main(int argc,char *argv[])
{
	int i;
	for (i = argc-1; i > 0; i--)
	{
		fputs(argv[i], stdout);
		putchar(' ');
	}
	putchar('\n');
	return 0;
}