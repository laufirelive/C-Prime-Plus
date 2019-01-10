// 编写一个程序，要求输入名字，并执行一下操作：

	// a. 把姓名引在双引号中打印出来
	// b. 在宽度为20个字符的字段内打印名字，并且整个字段印在引号内。
	// c. 在宽度为20个字符的字段的左端打印名字，并且整个字段印在引号内。
	// d. 在比名字宽3个字符的字段内打印它。

#include <stdio.h>
#include <string.h>

int main()
{
	char name[] = "JackSmith";
	int len = strlen(name);
	
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("\"%*s\"\n", len + 3, name);
	
	return 0;
} 
