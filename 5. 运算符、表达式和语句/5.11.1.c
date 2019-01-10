// 编写一个程序。将用分钟表示的时间转换成以小时和分钟表示的时间。
// 使用 #define 或者 const 来创建一个代表 60 的符号常量。
// 使用 while 循环来允许用户重复键入值，并且键入一个小于等于 0 的时间时终止循环。

#include <stdio.h>
#define MINS4AHOUR 60

int main()
{
	int minutes;
	minutes = 0;
	
	printf("input minutes : ");
	scanf("%d", &minutes);
	
	while (minutes > 0)
	{
		printf("%02d : %02d\n", minutes / MINS4AHOUR, minutes % MINS4AHOUR);
		printf("input minutes : ");
		scanf("%d", &minutes);
	}
	
	return 0;
} 
