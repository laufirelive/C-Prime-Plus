// 设计并测试一个函数，可以从输入读取 n 个字符（包括空格、制表符和换行符），把结果存储在一个数组中，这个数组的地址通过参数来传递。

#include <stdio.h>
#define LEN 31

void input_string(char target[], int len);

int main()
{
	char aString[LEN];
	input_string(aString, LEN);
	fputs(aString, stdout);
	return 0;
} 

void input_string(char target[], int len)
{
	fgets(target, len, stdin);
}

