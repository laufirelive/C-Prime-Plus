// 编程一个程序，提示用户输入 3 个数集包括 5 个 double 值。程序应当实现下列所有功能：
	// a. 把输入信息存储到一个 3*5 的数组中
	// b. 计算出每个数集（包括 5 个数值）的平均值
	// c. 计算所有数值的平均数
	// d. 找到这 15 个数中的最大值
	// e. 打印出结果
	
#include <stdio.h>
#define 	ROWS 		3
#define 	COLUMNS 	5
void input_arr(int rows, int columns, double arr[][COLUMNS]);
double ave_arr(int rows, int columns, double arr[][COLUMNS]);
double max_arr(int rows, int columns, double arr[][COLUMNS]);
void print_arr(int rows, int columns, double arr[][COLUMNS]);
double ave(double arr[], int len);


int main()
{
	int i;
	double ave_rows[ROWS];
	double source[ROWS][COLUMNS];
	
	input_arr(ROWS, COLUMNS, source);
	
	print_arr(ROWS, COLUMNS, source);
	
	for (i = 0; i < ROWS; i++)
	{
		ave_rows[i] = ave(*(source+i), COLUMNS);
		printf("row %d ave : %8.2lf\n", i, ave_rows[i]);
	}

	printf("total ave : %8.2lf\n", ave_arr(ROWS, COLUMNS, source));
	printf("total max : %8.2lf\n", max_arr(ROWS, COLUMNS, source));
	
	return 0;
} 

void input_arr(int rows, int columns, double arr[][COLUMNS])
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			printf("row %d columns %d : ", i + 1, j + 1);
			while (!scanf("%lf", &arr[i][j]));
		}
		while (getchar() != '\n');
	}
	return;
}

double ave_arr(int rows, int columns, double arr[][COLUMNS])
{
	int i, j;
	double sum;
	for (i = 0; i < rows; i++)
		for (j = 0; j < columns; j++)
			sum += arr[i][j];
		
	return sum / (rows*columns);
}

double max_arr(int rows, int columns, double arr[][COLUMNS])
{
	int i, j, k1, k2;
	for (i = 0, k1 = 0, k2 = 0; i < rows; i++)
		for (j = 0; j < columns; j++)
		{
			if (arr[i][j] > arr[k1][k2])
			{
				k1 = i;
				k2 = j;
			}
		}	
	return arr[k1][k2];
}

void print_arr(int rows, int columns, double arr[][COLUMNS])
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			printf("%8.2lf", arr[i][j]);
		}
		putchar('\n');
	}
}


double ave(double arr[], int len)
{
	int i;
	double sum;
	for (i = 0, sum = 0; i < len; i++)
		sum += arr[i];
	
	return sum/len;
}