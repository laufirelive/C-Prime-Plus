// 编写一个程序，首先用户输入名字，然后要求用户输入姓氏。
// 在一行打印输入的姓名，在下一行打印每个名字中的字母的个数。
// 把字母个数与相应的名字的结尾对齐，如下所示：

// Melissa Honeybee
// 		 7		  8
// 然后打印相同的信息，但是字母个数与相应单词的开始对齐。

// Melissa Honeybee
// 7	   8

#include <stdio.h>
#include <string.h>

int main()
{
	char first_name[21];
	char last_name[21];
	int count_first;
	int count_last;
	
	printf("type your first name : ");
	scanf("%s", first_name);
	printf("type your last name : ");
	scanf("%s", last_name);
	
	count_first = strlen(first_name);
	count_last = strlen(last_name);
	
	printf("%s %s\n", first_name, last_name);
	printf("%*d %*d\n", count_first, count_first, count_last, count_last);
	printf("%s %s\n", first_name, last_name);
	printf("%-*d %-*d\n", count_first, count_first, count_last, count_last);
	
	return 0;
} 
