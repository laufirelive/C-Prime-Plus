// 编写一个函数，初始化一个二维 double 数组，并利用练习  2 中的任一函数来把这个数组赋值到另一个二维数组
//（因为二维数组是数组的数组，所以可以使用处理一维数组的函数来赋值每个子数组）

#include <stdio.h>
#define ROWS 3
#define COLUMNS 3

void copy_arr(double source[], double target[], int len);
void copy_multi_ptr(double source[][COLUMNS], double target[][COLUMNS], int rows, int columns);

int main()
{
	double a[ROWS][COLUMNS] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	double b[ROWS][COLUMNS];
	
	copy_multi_ptr(a, b, ROWS, COLUMNS);
	
	int i,j;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLUMNS; j++)
		{
			printf("%.2lf\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLUMNS; j++)
		{
			printf("%.2lf\t", b[i][j]);
		}
		printf("\n");
	}
	return 0;
} 


void copy_arr(double source[], double target[], int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		target[i] = source[i];
	}
}

void copy_multi_ptr(double source[][COLUMNS], double target[][COLUMNS], int rows, int columns)
{
	int i;
	for (i = 0; i < rows; i++)
	{
		copy_arr(*(source + i), *(target + i), columns);
	}
}