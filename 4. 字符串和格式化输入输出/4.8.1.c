// 编写一个程序，要求输入姓名和姓氏，然后以 “姓名，姓氏” 的格式打印。

#include <stdio.h>

int main()
{
	char first_name[21];
	char last_name[21];
	
	printf("input your first name and last name: ");
	scanf("%s%s", first_name, last_name);
	printf("%s, %s\n", first_name, last_name);
	
	return 0;
} 
