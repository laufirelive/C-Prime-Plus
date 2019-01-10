// ��дһ�����򣬳�ʼ��һ�� 3*5 �Ķ�ά double ���飬������һ�������䳤����ĺ����Ѹ����鸴�Ƶ���һ����ά���顣
// ��Ҫ��дһ�����ڱ䳤����ĺ�������ʾ������������ݡ�����������Ӧ���ܹ���������� N*M ����
// �����û�п���֧�ֱ䳤����ı���������ʹ�� C �д��� N*5 ����ĺ�����������

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