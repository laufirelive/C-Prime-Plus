// 重写程序清单 10.7 的程序 rain ，main() 中的主要功能改为由函数来执行。 

#include <stdio.h>
#define MONTHS 12
#define YEARS 5

void rain_fun(int year, int month, float rain[year][month]);

int main()
{
	float rain[YEARS][MONTHS] = {
		{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
		{8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
		{9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
		{7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
		{7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}		
	};

	rain_fun(YEARS, MONTHS, rain);
	
	return 0;
} 

void rain_fun(int year, int month, float rain[year][month])
{
	int i, j;
	float subtot, total;
	
	printf("YEARS	RAINFALL(INCHES)\n");
	for (i = 0, total = 0; i < year; i++)
	{
		for (j = 0, subtot = 0; j < month; j++)
			subtot += *(*(rain + i) + j);
		printf("%5d	%15.1f\n", 2000 + i, subtot);
		total += subtot;
	}
	printf("\nThe yearly average is %.1f inches.\n\n", total/year);
	printf("MONTHLY AVERAGES: \n\n");
	printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct");
	printf(" Nov Dec\n");
	
	for (j = 0; j < month; j++)
	{
		for (i = 0, subtot = 0; i < year; i++)
			subtot += *(*(rain + i) + j);
		printf("%4.1f", subtot/year);
	}
	printf("\n");
}