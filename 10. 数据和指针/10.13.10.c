// 编写一个程序，声明一个 3*5 的数组并初始化，具体数值可以随意。程序打印出数值，然后数值翻一番，接着再次打印出新值。
// 编写一个函数来显示数组的内容，再编写另一个函数执行翻倍功能。数组名和数组行数作为参数由程序传递给函数。

#include <stdio.h>
#define ROWS 3
#define COLUMNS 5

void times_multi_arr(int rows, int columns, double source[rows][columns]);
void print_multi_arr(int rows, int columns, double source[rows][columns]);

int main()
{
	double a[ROWS][COLUMNS] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15}
	};
	
	print_multi_arr(ROWS, COLUMNS, a);
	
	putchar('\n');
	times_multi_arr(ROWS, COLUMNS, a);
	
	print_multi_arr(ROWS, COLUMNS, a);
	return 0;
} 


void times_multi_arr(int rows, int columns, double source[rows][columns])
{
	int i, j;
	for (i = 0; i < rows; i++)
		for (j = 0; j < columns; j++)
			source[i][j] *= 2;
}

void print_multi_arr(int rows, int columns, double source[rows][columns])
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			printf("%5.2lf\t", source[i][j]);
		}
		putchar('\n');
	}
}