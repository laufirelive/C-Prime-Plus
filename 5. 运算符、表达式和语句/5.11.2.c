// 编写一个程序，此程序要求输入一个整数，
// 然后打印出从（包括）输入的值到（包括）比输入的值大 10 的所有整数值（也就是说，如果输入5，那么输出就从5到15）。
// 要求在各个输出值之间用空格、制表符或换行符分开。

#include <stdio.h>

int main()
{
	int aInt;
	int end;
	
	scanf("%d", &aInt);
	end = aInt+10;
	
	do
	{
		
		printf("%d\t", aInt++);
		
	} while (aInt <= end);
	
	printf("\n");
	return 0;
} 
