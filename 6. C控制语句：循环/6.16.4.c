// 让用户输入一个大写字母，使用嵌套循环产生像下面的金字塔图案：	

     // A
    // ABA
   // ABCBA
  // ABCDCBA
 // ABCDEDCBA

// 这种图案要扩展到用户输入的字符。例如，前面的图案是在输入 E 时产生的。
// 提示： 使用一个外部循环来处理行，在每一行使用三个内部循环，一个处理空格，
// 一个升序打印字母，一个以降序打印字母。
// 如果您的系统不适用 ASCII 或类似的以严格数字顺序表示字母的编码，
// 请参见在编程练习 3 中给的建议。

#include <stdio.h>
#define LEN 5

int main()
{
	int i, j;
	char c = getchar();
	for (i = 1; i <= LEN; i++)
	{
		for (j = 1; j <= LEN-i; j++)
			printf("%c", ' ');
		for (j = 1; j <= i-1; j++)
			printf("%c", c - LEN + j);
		for (j = 0; j < i; j++)
			printf("%c", c- LEN + i - j);

		printf("\n");
	}
	
	return 0;
} 
