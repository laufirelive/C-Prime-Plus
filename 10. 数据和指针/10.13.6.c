// ��дһ����������ʼ��һ����ά double ���飬��������ϰ  2 �е���һ��������������鸳ֵ����һ����ά����
//����Ϊ��ά��������������飬���Կ���ʹ�ô���һά����ĺ�������ֵÿ�������飩

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