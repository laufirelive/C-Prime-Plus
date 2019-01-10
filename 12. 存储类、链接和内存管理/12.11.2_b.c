// 在美国通常是以英里每加仑来计算友好，在欧洲是以升每百公里来计算。
// 下面是某程序的一部分该程序让用户选择一个模式（公制的或美制的），然后收集数据来计算油耗。

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