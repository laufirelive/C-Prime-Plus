// ���������ϰ 2 �еĳ���ʹ����ʹ���Զ������������ṩ��ͬ���û����棬Ҳ����˵��Ҫ��ʾ�û�����ģʽ�ȵȡ�Ȼ���������������һ�鲻ͬ�ĺ������á�

//12.11.3_b
#include "12.11.3_b.h"

int set_mode(const int mode)
{
	switch (mode)
	{
		case 0 :
		case 1 :
			return mode;
	}
	
	printf("Invalid mode specified. Mode 1 (US) used. \n");
	return 1;
}

double get_info(const int mode)
{	
	double distance, fuel;
	double result;
	
	switch (mode)
	{
		case 0 :
			printf("Enter distance traveled in kilometers : ");
			scanf("%lf", &distance);
			printf("Enter fuel consumed in liters : ");
			scanf("%lf", &fuel);
			
			result = fuel/distance * 100;
			break;
		case 1 :
			printf("Enter distance traveled in miles : ");
			scanf("%lf", &distance);
			printf("Enter fuel consumed in gallon : ");
			scanf("%lf", &fuel);
			
			result = distance/fuel;
			break;
	}
	
	return result;
}

void show_info(const int mode, const double result)
{
	switch (mode)
	{
		case 0 :
			printf("Fuel consumption is %.2lf liters per 100 km.\n", result);
			break;
		case 1 :
			printf("Fuel consumption is %.2lf miles per gallon.\n", result);
			break;
	}
}