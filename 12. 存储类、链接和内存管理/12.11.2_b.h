// 在美国通常是以英里每加仑来计算友好，在欧洲是以升每百公里来计算。
// 下面是某程序的一部分该程序让用户选择一个模式（公制的或美制的），然后收集数据来计算油耗。

//12.11.2_b

#include <stdio.h>

static int Mode;

double Distance;
double Fuel;
double Result;

void set_mode(int mode);
void get_info(void);
void show_info(void);