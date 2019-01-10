// ������ͨ������Ӣ��ÿ�����������Ѻã���ŷ��������ÿ�ٹ��������㡣
// ������ĳ�����һ���ָó������û�ѡ��һ��ģʽ�����ƵĻ����Ƶģ���Ȼ���ռ������������ͺġ�

//12.11.2_b
#include "12.11.2_b.h"

void set_mode(int mode)
{
	switch (mode)
	{
		case 0 :
		case 1 :
			Mode = mode;
			break;
		default :
			printf("Invalid mode specified. Mode 1 (US) used. \n");
			Mode = 1;
			break;
	}
	return;
}

void get_info(void)
{	
	switch (Mode)
	{
		case 0 :
			printf("Enter distance traveled in kilometers : ");
			scanf("%lf", &Distance);
			printf("Enter fuel consumed in liters : ");
			scanf("%lf", &Fuel);
			
			Result = Fuel/Distance * 100;
			break;
		case 1 :
			printf("Enter distance traveled in miles : ");
			scanf("%lf", &Distance);
			printf("Enter fuel consumed in gallon : ");
			scanf("%lf", &Fuel);
			
			Result = Distance/Fuel;
			break;
	}
}

void show_info(void)
{
	switch (Mode)
	{
		case 0 :
			printf("Fuel consumption is %.2lf liters per 100 km.\n", Result);
			break;
		case 1 :
			printf("Fuel consumption is %.2lf miles per gallon.\n", Result);
			break;
	}
}