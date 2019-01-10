//编写一个程序，把您的年龄转换成天数并显示二者的值。
//不用考虑平年（fractional year）和闰年（leap year）的问题。

#include <stdio.h>

int main()
{
	int age;
	
	age = 21;
	printf("Ages : %d\tDays : %d\n", age, age * 365);
	
	return 0;
} 
