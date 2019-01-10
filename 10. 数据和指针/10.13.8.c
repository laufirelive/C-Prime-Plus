// 编写一个程序，初始化一个 3*5 的二维 double 数组，并利用一个基础变长数组的函数把该数组复制到另一个二维数组。
// 还要编写一个基于变长数组的函数来显示两个数组的内容。这两个函数应该能够处理任意的 N*M 数组
// （如果没有可以支持变长数组的编译器，就使用 C 中处理 N*5 数组的函数方法）。

#include <stdio.h>
#define ROWS 3
#define COLUMNS 5

void copy_multi_arr(int rows, int columns, double source[rows][columns], double target[rows][columns]);
void print_multi_arr(int rows, int columns, double source[rows][columns]);

int main()
{
	double a[ROWS][COLUMNS] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15}
	};
	double b[ROWS][COLUMNS];
	copy_multi_arr(ROWS, COLUMNS, a, b);
	print_multi_arr(ROWS, COLUMNS, a);
	putchar('\n');
	print_multi_arr(ROWS, COLUMNS, b);
	return 0;
} 


void copy_multi_arr(int rows, int columns, double source[rows][columns], double target[rows][columns])
{
	int i, j;
	for (i = 0; i < rows; i++)
		for (j = 0; j < columns; j++)
			target[i][j] = source[i][j];
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