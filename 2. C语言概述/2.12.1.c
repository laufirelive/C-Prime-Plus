//编写一个程序，调用 printf() 的函数在一行上输出您的名和姓，再调用一次 printf() 函数在两个单独的行上输出您的名和姓，
//再调用一对 printf() 函数在一行上输出您的名和姓。输出应如下所示（当然里面要换成您的姓名）：
//	
//	Anton Bruckner	第一个输出语句
//	Anton			第二个输出语句
//	Bruckner		仍然是第二个输出语句
//	Anton Bruckner	第三个和第四个输出语句
//

#include <stdio.h>

int main()
{
	printf("Jack Smith\n");
	printf("Jack\n");
	printf("Smith\n");
	printf("Jack ");
	printf("Smith\n");
	
	return 0;
}
