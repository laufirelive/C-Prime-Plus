// ��дһ����������һ�� 3*5 �����鲢��ʼ����������ֵ�������⡣�����ӡ����ֵ��Ȼ����ֵ��һ���������ٴδ�ӡ����ֵ��
// ��дһ����������ʾ��������ݣ��ٱ�д��һ������ִ�з������ܡ�������������������Ϊ�����ɳ��򴫵ݸ�������

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